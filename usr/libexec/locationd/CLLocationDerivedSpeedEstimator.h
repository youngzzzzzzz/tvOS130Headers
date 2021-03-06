/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:44 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <locationd/CLRoutineMonitorClientProtocol.h>

@protocol CLIntersiloUniverse, CLVehicleStateNotifierProtocol;
@class CLSilo, NSDate, CLLocation, CLTimer, NSString;

@interface CLLocationDerivedSpeedEstimator : NSObject <CLRoutineMonitorClientProtocol> {

	id<CLIntersiloUniverse> _universe;
	id<CLVehicleStateNotifierProtocol> _vehicleStateProxy;
	CLSilo* _silo;
	BOOL _showActivityVehicular;
	BOOL _showActivityVehicularMounted;
	BOOL _visualIndicatorActive;
	BOOL _seenNonVehicularState;
	BOOL _motionVehicular;
	NSDate* _wsbClientStartTime;
	unique_ptr<CLWifiService_Type::Client, std::__1::default_delete<CLWifiService_Type::Client> >* _wifiServiceClient;
	unique_ptr<CLMotionState_Type::Client, std::__1::default_delete<CLMotionState_Type::Client> >* _motionStateClient;
	int _vehicularToken;
	unsigned long long _vehicularHints;
	unsigned long long _prevVehicularHints;
	unsigned long long _hintsAvailable;
	double _vehicularStartTime;
	double _vehicularLastNoHintsTime;
	double _vehicularLastBTHintTime;
	double _vehicularLastMotionHintTime;
	int _numMotionExitsWithBT;
	int _lastSeenVehicularTime;
	int _sequentialVehicularIndex;
	double _accelDetectionLatency;
	double _gpsDetectionLatency;
	double _basebandDetectionLatency;
	double _wifiDetectionLatency;
	double _btDetectionLatency;
	double _vehicularDuration;
	double _vehicularDurationExitFromNoHints;
	double _vehicularDurationExitFromLastBTHint;
	double _vehicularDurationLastBTHintFromLastMotionHint;
	int _numConsecutiveVehicularSpeedObservations;
	double _lastElapsedTime;
	double _lastDistanceMoved;
	BOOL _valid;
	CLLocation* _prevLoc;
	CLTimer* _scanTimer;
	SCD_Struct_CL33 _currentEstimate;

}

@property (assign,nonatomic) SCD_Struct_CL33 currentEstimate;              //@synthesize currentEstimate=_currentEstimate - In the implementation block
@property (nonatomic,retain) CLLocation * prevLoc;                         //@synthesize prevLoc=_prevLoc - In the implementation block
@property (nonatomic,retain) CLTimer * scanTimer;                          //@synthesize scanTimer=_scanTimer - In the implementation block
@property (assign,nonatomic) BOOL valid;                                   //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(void)registerForNotifications;
-(void)unregisterForNotifications;
-(CLTimer *)scanTimer;
-(void)setScanTimer:(CLTimer *)arg1 ;
-(id)initInUniverse:(id)arg1 ;
-(void)_onScanTimer;
-(void)startWsbClient;
-(void)handleVehicularStateChanged;
-(void)stopWsbClient;
-(void)_invalidateSpeedEstimate;
-(BOOL)_feedLocation:(id)arg1 ;
-(void)setCurrentEstimate:(SCD_Struct_CL33)arg1 ;
-(CLLocation *)prevLoc;
-(void)setPrevLoc:(CLLocation *)arg1 ;
-(void)updateStatusBarLabel;
-(void)submitFalseDetectionMetricsWithType:(unsigned long long)arg1 ;
-(void)logLatencyMetricsInternal;
-(void)submitLatencyMetrics;
-(void)updateWsbClient:(BOOL)arg1 ;
-(void)handleMotionStateNotification:(NotificationData*)arg1 ;
-(BOOL)feedLocation:(const CLDaemonLocation*)arg1 ;
-(void)onWifiServiceNotification:(int)arg1 data:(NotificationData*)arg2 ;
-(void)onMotionStateNotification:(int)arg1 data:(NotificationData)arg2 ;
-(void)setStatusBarWithLabel:(id)arg1 ;
-(void)clearStatusBarColorAndText;
-(SCD_Struct_CL33)currentEstimate;
@end


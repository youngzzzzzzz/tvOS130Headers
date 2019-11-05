/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:48 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLWorkoutRecordingDelegate;
#import <locationd/locationd-Structs.h>
@class NSURL, NSMutableDictionary, NSMutableArray, NSArray, NSDictionary;

@interface CLWorkoutRecording : NSObject {

	NSURL* _workingDirectory;
	id<CLWorkoutRecordingDelegate> _delegate;
	unique_ptr<CMMsl::WriterManager<CLLegacyFileManager>, std::__1::default_delete<CMMsl::WriterManager<CLLegacyFileManager> > >* _writer;
	unique_ptr<CLMotionNotifier::Dispatcher, std::__1::default_delete<CLMotionNotifier::Dispatcher> >* _accelerometerDispatcher;
	unique_ptr<CLMotionNotifier::Dispatcher, std::__1::default_delete<CLMotionNotifier::Dispatcher> >* _accel800Dispatcher;
	unique_ptr<CLMotionNotifier::Dispatcher, std::__1::default_delete<CLMotionNotifier::Dispatcher> >* _deviceMotionDispatcher;
	unique_ptr<CLCatherineNotifier_Type::Client, std::__1::default_delete<CLCatherineNotifier_Type::Client> >* _heartRateObserverClient;
	unique_ptr<CLOdometerNotifier_Type::Client, std::__1::default_delete<CLOdometerNotifier_Type::Client> >* _odometerObserverClient;
	unique_ptr<CLWatchOrientationSettingsNotifier_Type::Client, std::__1::default_delete<CLWatchOrientationSettingsNotifier_Type::Client> >* _watchOrientationObserverClient;
	unique_ptr<CLNatalimetryNotifier_Type::Client, std::__1::default_delete<CLNatalimetryNotifier_Type::Client> >* _bodyMetricsObserverClient;
	unique_ptr<CLMotionStateMediator_Type::Client, std::__1::default_delete<CLMotionStateMediator_Type::Client> >* _motionStateMediatorClient;
	unique_ptr<CLWifiService_Type::Client, std::__1::default_delete<CLWifiService_Type::Client> >* _wifiClient;
	unique_ptr<CLMotionNotifier::Dispatcher, std::__1::default_delete<CLMotionNotifier::Dispatcher> >* _pressureDispatcher;
	NSMutableDictionary* _metadata;
	CLGizmoOrientation _watchOrientation;
	CLBodyMetrics _bodyMetrics;
	WorkoutRecorderHealthKitInfo* _healthKitInfo;
	NSMutableArray* _wifiLookupTable;
	double _privacyTimeOffset;
	double _privacyElevationOffset;
	float _privacyPressureOffset;
	BOOL _disablePrivacyElevationOffset;
	BOOL _disableBodyMetrics;
	BOOL _disableWatchOrientation;
	BOOL _disableHealthKitInfo;
	BOOL _disableWifiScans;
	BOOL _disablePressure;
	BOOL _disableStrideCalBins;
	double _startTime;
	double _stopTime;

}

@property (nonatomic,readonly) NSArray * recordingURLs; 
@property (nonatomic,copy,readonly) NSDictionary * metadata; 
@property (nonatomic,readonly) double startTime;                          //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double stopTime;                           //@synthesize stopTime=_stopTime - In the implementation block
-(void)dealloc;
-(double)startTime;
-(void)stop;
-(void)cleanup;
-(NSDictionary *)metadata;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)start:(id)arg1 ;
-(double)stopTime;
-(void)onOdometerNotification:(const int*)arg1 data:(const NotificationData*)arg2 ;
-(void)onMotionStateMediatorNotification:(const int*)arg1 data:(const NotificationData*)arg2 ;
-(void)onPressureData:(const Sample*)arg1 ;
-(void)teardownListeners;
-(BOOL)setWorkingDirectory:(id)arg1 ;
-(void)setupListeners;
-(void)writeWatchOrientation;
-(void)writeBodyMetrics;
-(void)writeHealthKitInfo;
-(void)writeStrideCalBins;
-(void)deleteWorkingDirectory;
-(double)makeSafeCFAbsoluteTime:(double)arg1 ;
-(void)resetBodyMetrics;
-(void)setupHealthKitQueries;
-(void)teardownHealthKitQueries;
-(double)makeSafeAbsoluteElevation:(double)arg1 ;
-(NSArray *)recordingURLs;
-(void)onAccelerometerData:(const Sample*)arg1 ;
-(void)onAccelerometer800Data:(const NotificationData*)arg1 count:(unsigned)arg2 ;
-(void)onDeviceMotionData:(const Sample*)arg1 ;
-(void)onCatherineNotification:(const int*)arg1 data:(const NotificationData*)arg2 ;
-(void)onWatchOrientationNotification:(const int*)arg1 data:(const NotificationData*)arg2 ;
-(void)onNatalimetryNotification:(const int*)arg1 data:(const NotificationData*)arg2 ;
-(void)onWifiScanNotification:(const int*)arg1 data:(const NotificationData*)arg2 ;
@end

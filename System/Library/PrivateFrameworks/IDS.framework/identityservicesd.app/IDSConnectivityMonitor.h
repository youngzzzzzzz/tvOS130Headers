/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/IDSUTunDeliveryControllerConnectivityDelegate.h>

@class NSTimer, NRDeviceMonitor, NSString, NSDate;

@interface IDSConnectivityMonitor : NSObject <IDSUTunDeliveryControllerConnectivityDelegate> {

	BOOL _isNearby;
	BOOL _isConnected;
	NSTimer* _monitorTimer;
	NRDeviceMonitor* _deviceMonitor;
	NSString* _cbuuidString;
	NSString* _pairedDeviceCBUUIDString;
	double _timeConnected;
	double _timeDisconnected;
	NSDate* _lastConnection;
	NSDate* _lastDisconnection;

}

@property (nonatomic,retain) NSTimer * monitorTimer;                           //@synthesize monitorTimer=_monitorTimer - In the implementation block
@property (nonatomic,retain) NRDeviceMonitor * deviceMonitor;                  //@synthesize deviceMonitor=_deviceMonitor - In the implementation block
@property (nonatomic,retain) NSString * cbuuidString;                          //@synthesize cbuuidString=_cbuuidString - In the implementation block
@property (nonatomic,retain) NSString * pairedDeviceCBUUIDString;              //@synthesize pairedDeviceCBUUIDString=_pairedDeviceCBUUIDString - In the implementation block
@property (assign,nonatomic) BOOL isNearby;                                    //@synthesize isNearby=_isNearby - In the implementation block
@property (assign,nonatomic) BOOL isConnected;                                 //@synthesize isConnected=_isConnected - In the implementation block
@property (assign,nonatomic) double timeConnected;                             //@synthesize timeConnected=_timeConnected - In the implementation block
@property (assign,nonatomic) double timeDisconnected;                          //@synthesize timeDisconnected=_timeDisconnected - In the implementation block
@property (nonatomic,retain) NSDate * lastConnection;                          //@synthesize lastConnection=_lastConnection - In the implementation block
@property (nonatomic,retain) NSDate * lastDisconnection;                       //@synthesize lastDisconnection=_lastDisconnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isConnected;
-(void)setIsNearby:(BOOL)arg1 ;
-(BOOL)isNearby;
-(void)setIsConnected:(BOOL)arg1 ;
-(NRDeviceMonitor *)deviceMonitor;
-(void)checkConnectivityState:(id)arg1 ;
-(void)sendMonitorMessage;
-(void)setPairedDeviceCBUUIDString:(NSString *)arg1 ;
-(double)timeConnected;
-(void)setTimeConnected:(double)arg1 ;
-(double)timeDisconnected;
-(void)setTimeDisconnected:(double)arg1 ;
-(NSDate *)lastConnection;
-(NSDate *)lastDisconnection;
-(void)setLastConnection:(NSDate *)arg1 ;
-(void)setLastDisconnection:(NSDate *)arg1 ;
-(void)deliveryController:(id)arg1 uniqueID:(id)arg2 isConnected:(BOOL)arg3 ;
-(NSTimer *)monitorTimer;
-(void)setMonitorTimer:(NSTimer *)arg1 ;
-(void)setDeviceMonitor:(NRDeviceMonitor *)arg1 ;
-(NSString *)cbuuidString;
-(void)setCbuuidString:(NSString *)arg1 ;
-(NSString *)pairedDeviceCBUUIDString;
@end


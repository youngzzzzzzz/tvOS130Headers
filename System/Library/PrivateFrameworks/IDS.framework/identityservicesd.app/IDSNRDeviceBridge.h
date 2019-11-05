/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/NRDeviceMonitorDelegate.h>

@protocol IDSNRDeviceBridgeDelegate, OS_dispatch_queue;
@class NSObject, NRDeviceMonitor, NSUUID, NSString;

@interface IDSNRDeviceBridge : NSObject <NRDeviceMonitorDelegate> {

	unsigned char _latestLinkType;
	id<IDSNRDeviceBridgeDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _nrMonitorQueue;
	NRDeviceMonitor* _nrDeviceMonitor;
	NSUUID* _deviceIdentifier;

}

@property (assign,nonatomic,__weak) id<IDSNRDeviceBridgeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> nrMonitorQueue;                //@synthesize nrMonitorQueue=_nrMonitorQueue - In the implementation block
@property (nonatomic,retain) NRDeviceMonitor * nrDeviceMonitor;                          //@synthesize nrDeviceMonitor=_nrDeviceMonitor - In the implementation block
@property (nonatomic,retain) NSUUID * deviceIdentifier;                                  //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned char latestLinkType;                               //@synthesize latestLinkType=_latestLinkType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isRegistered;
-(id<IDSNRDeviceBridgeDelegate>)delegate;
-(void)setDelegate:(id<IDSNRDeviceBridgeDelegate>)arg1 ;
-(BOOL)isConnected;
-(BOOL)isNearby;
-(NSUUID *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSUUID *)arg1 ;
-(void)deviceLinkTypeDidChange:(id)arg1 linkType:(unsigned char)arg2 ;
-(void)deviceIsClassCConnectedDidChange:(id)arg1 isClassCConnected:(BOOL)arg2 ;
-(void)deviceIsAsleepDidChange:(id)arg1 isAsleep:(BOOL)arg2 ;
-(void)deviceIsCloudConnectedDidChange:(id)arg1 isCloudConnected:(BOOL)arg2 ;
-(void)deviceIsConnectedDidChange:(id)arg1 isConnected:(BOOL)arg2 ;
-(void)deviceIsNearbyDidChange:(id)arg1 isNearby:(BOOL)arg2 ;
-(id)initWithDeviceIdentifier:(id)arg1 delegate:(id)arg2 startMonitor:(BOOL)arg3 ;
-(void)_startNRDeviceMonitor:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)nrMonitorQueue;
-(void)setNrDeviceMonitor:(NRDeviceMonitor *)arg1 ;
-(NRDeviceMonitor *)nrDeviceMonitor;
-(void)_notifyIDSNanoRegistryPluginManagerOnWatch:(BOOL)arg1 ;
-(unsigned char)latestLinkType;
-(void)setLatestLinkType:(unsigned char)arg1 ;
-(void)_notifyWirelessRadioManagerAboutLinkChange:(unsigned char)arg1 ;
-(id)initWithDeviceIdentifier:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isDevicesIdentifierEqualTo:(id)arg1 ;
-(void)setNrMonitorQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

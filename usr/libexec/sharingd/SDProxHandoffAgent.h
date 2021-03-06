/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:55 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/MCProfileConnectionObserver.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class SFDeviceDiscovery, NSObject, SFProxHandoffService, CUCoalescer, RPCompanionLinkClient, SFNotificationProxy, SDStatusMonitor, CUSystemMonitor, SFCombinedDevice, NSString;

@interface SDProxHandoffAgent : NSObject <MCProfileConnectionObserver> {

	SFDeviceDiscovery* _bleActionDiscovery;
	NSMutableDictionary* _bleActionDevices;
	NSObject*<OS_dispatch_source> _bleActionScanTimer;
	BOOL _bleActionScanTimedOut;
	SFProxHandoffService* _bleActionService;
	NSObject*<OS_dispatch_source> _bleActionServiceTimer;
	SFDeviceDiscovery* _bleInfoDiscovery;
	NSMutableDictionary* _bleInfoDevices;
	CUCoalescer* _bleMapCoalescer;
	NSMutableDictionary* _bleUnmapped;
	BOOL _candidateNearby;
	BOOL _clientShouldAdvertise;
	RPCompanionLinkClient* _clinkClient;
	NSObject*<OS_dispatch_source> _delayTimer;
	NSMutableDictionary* _mappedDevices;
	BOOL _mcEnabled;
	BOOL _motionMonitorStarted;
	SFNotificationProxy* _notificationProxy;
	NSMutableSet* _proxClients;
	BOOL _stationary;
	SDStatusMonitor* _statusMonitor;
	CUSystemMonitor* _systemMonitor;
	NSObject*<OS_dispatch_source> _transferTimer;
	SFCombinedDevice* _uiDevice;
	BOOL _userOnCall;
	double _prefBLEActionScanSecs;
	BOOL _prefEnabled;
	BOOL _prefForceShouldAdvertise;
	BOOL _prefForceStationary;
	BOOL _prefForceOnCall;
	BOOL _prefHandoffEnabled;
	BOOL _prefHighNormal;
	BOOL _prefMediumBubbleEnabled;
	double _prefRetriggerSecs;
	double _prefTransferSecs;
	BOOL _preventNotifications;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL preventNotifications;                               //@synthesize preventNotifications=_preventNotifications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAgent;
-(NSString *)description;
-(id)init;
-(void)invalidate;
-(void)_invalidate;
-(void)_update;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)_routes;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_run;
-(id)displayNameForContact:(id)arg1 ;
-(void)proximityClientUpdate:(id)arg1 ;
-(void)prefsChanged;
-(void)notificationDidDismiss:(id)arg1 reason:(long long)arg2 ;
-(void)userDidTapNotification:(id)arg1 ;
-(BOOL)_systemCanTrigger;
-(void)_bleActionDiscoveryEnsureStopped;
-(void)_bleInfoDiscoveryEnsureStopped;
-(void)_commonEnsureStopped;
-(void)_clinkEnsureStopped;
-(void)_serviceEnsureStopped;
-(void)_commonShouldAdvertiseChanged;
-(void)_commonCallCountChanged;
-(void)_motionEnsureStopped;
-(void)_commonEnsureStarted;
-(BOOL)_clinkShouldStart;
-(void)_clinkEnsureStarted;
-(BOOL)_bleActionDiscoveryShouldStart;
-(void)_bleActionDiscoveryEnsureStarted;
-(BOOL)_bleInfoDiscoveryShouldStart;
-(void)_bleInfoDiscoveryEnsureStarted;
-(BOOL)_motionShouldStart;
-(void)_motionEnsureStarted;
-(BOOL)_serviceShouldStart;
-(void)_serviceEnsureStarted;
-(void)_commonScreenStateChanged;
-(void)_bleUpdateMappingAndNearbyCoalesced;
-(void)commonSystemUIChanged;
-(void)_proxiedNotificationDidDismiss:(id)arg1 reason:(long long)arg2 ;
-(void)_proxiedNotificationWasTapped:(NSMutableArray*)arg1 ;
-(void)_uiStopIfNeeded:(id)arg1 reason:(long long)arg2 ;
-(void)_resetAllStates;
-(id)_combinedDevicePending;
-(void)_runNotificationPending;
-(void)_runNotificationPendingContent;
-(void)_runNotificationReady;
-(void)_runNotificationPresented;
-(void)_runNotificationDismissed;
-(void)_runTransferInProgress;
-(void)_runTransferPending;
-(void)_runTransferReady;
-(void)_runTransferPendingDismiss;
-(void)_runTransferDone;
-(BOOL)_runStateVerify:(int)arg1 device:(id)arg2 ;
-(void)_combinedDevicePrepareForCallTransferTrigger:(id)arg1 ;
-(void)_proximityClientDeviceWillTrigger:(id)arg1 ;
-(BOOL)_shouldMediumPromptWithInfo:(id)arg1 ;
-(void)_runCallHandoffStart:(id)arg1 ;
-(void)_proximityClientDeviceEnteredImmediate:(id)arg1 ;
-(void)_proximityClientDeviceExitedImmediate:(id)arg1 ;
-(void)_runCallHandoffHandleResponse:(id)arg1 error:(id)arg2 ;
-(void)_runCallHandoffStartDelayTimer;
-(void)_runCallHandoffHandleDelayTimerFired;
-(void)_uiDismissWhenReady:(id)arg1 reason:(long long)arg2 ;
-(void)_bleActionDeviceFound:(id)arg1 ;
-(void)_bleActionDeviceLost:(id)arg1 ;
-(void)_bleActionDeviceChanged:(id)arg1 ;
-(void)_bleActionScanTimerActivate;
-(void)_bleActionScanTimerInvalidate;
-(void)_bleUpdateMappingReset;
-(void)_bleActionDeviceFoundCandidate:(id)arg1 ;
-(id)_bleUpdateMappingWithDevice:(id)arg1 ;
-(void)_proximityClientDeviceDidUnTrigger:(id)arg1 ;
-(void)_proximityClientDeviceUpdated:(id)arg1 ;
-(void)_bleDeviceNearbyEnter:(id)arg1 ;
-(void)_bleDeviceNearbyExit:(id)arg1 ;
-(void)_bleActionScanTimerFired;
-(void)_bleInfoDeviceFound:(id)arg1 ;
-(void)_bleInfoDeviceLost:(id)arg1 ;
-(void)_bleInfoDeviceChanged:(id)arg1 ;
-(void)_updateCandidateIsNearby;
-(void)_proximityClientDeviceEnteredNearby:(id)arg1 ;
-(void)_proximityClientDeviceExitedNearby:(id)arg1 ;
-(void)_bleUpdateMappingAndNearby;
-(void)_clinkHandleRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_clinkHomePodHandleRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_proximityClientSeedInitialDevices:(id)arg1 ;
-(void)_proximityClientSeedWillTriggerDeviceIfNeeded:(id)arg1 ;
-(id)_combinedDeviceForUIID:(id)arg1 ;
-(id)mediaTransferInfoFromInfo:(id)arg1 ;
-(void)_serviceTimeoutInvalidate;
-(void)_serviceTimeoutFired;
-(void)_proximityClientDeviceWasDismissed:(id)arg1 reason:(long long)arg2 ;
-(void)_proximityClientDeviceWasSelected:(id)arg1 ;
-(id)_routeForDevice:(id)arg1 ;
-(id)callTransferInfoForDevice:(id)arg1 ;
-(void)setPreventNotifications:(BOOL)arg1 ;
-(int)proximityClientStart:(id)arg1 ;
-(void)proximityClientStop:(id)arg1 ;
-(int)proximityClient:(id)arg1 dismissContentForDevice:(id)arg2 ;
-(int)proximityClient:(id)arg1 provideContent:(id)arg2 forDevice:(id)arg3 force:(BOOL)arg4 ;
-(int)proximityClient:(id)arg1 updateContent:(id)arg2 forDevice:(id)arg3 ;
-(void)_proximityClientDeviceWasDismissed:(id)arg1 ;
-(void)_serviceTimeoutActivate;
-(void)_hapticsFireNotificationSuccess;
-(void)_hapticsFireSelection;
-(void)_hapticsEnsurePrepared;
-(void)_hapticsEnsureStopped;
-(BOOL)_expectingContentForDeviceID:(id)arg1 ;
-(BOOL)callTransferShouldPush:(id)arg1 ;
-(void)testUI:(id)arg1 ;
-(BOOL)preventNotifications;
@end


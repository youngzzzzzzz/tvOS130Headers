/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBSMediaRemoteServiceInterface, OS_dispatch_source, OS_dispatch_queue;
#import <sharingd/sharingd-Structs.h>
@class NSData, SFDeviceDiscovery, SFService, SFPINPairSession, NSUUID, NSObject, NSURL, SDStatusMonitor, CUSystemMonitor, CUUserNotificationSession, NEVPNConnection, SFBLEScanner, SFDeviceRepairService, SFDeviceRepairSession, SFWiFiHealthMonitor;

@interface SDSetupAgent : NSObject {

	NSData* _bleAuthTagFilter;
	BOOL _clientEnabled;
	SFDeviceDiscovery* _deviceDiscovery;
	NSMutableDictionary* _devices;
	BOOL _hsa2Enabled;
	id<PBSMediaRemoteServiceInterface> _pbsMediaService;
	id _pinPairDialogToken;
	SFService* _pinPairService;
	SFPINPairSession* _pinPairSession;
	NSUUID* _pinPairUUID;
	int _profilesNotifyToken;
	BOOL _pwsAutoGrantingEnabled;
	BOOL _pwsGrantingEnabled;
	BOOL _scanEligible;
	int _scanSeconds;
	NSObject*<OS_dispatch_source> _scanTimer;
	BOOL _serverEnabled;
	NSURL* _setupURL;
	BOOL _shouldScan;
	SDStatusMonitor* _statusMonitor;
	CUSystemMonitor* _systemMonitor;
	NSMutableDictionary* _triggeredDevices;
	BOOL _triggeredUIAppleTVPair;
	BOOL _triggeredUIAppleTVSetup;
	BOOL _renableB238SetupAfterWiFi;
	BOOL _triggeredUIB238Setup;
	BOOL _triggeredUIiOSSetup;
	BOOL _triggeredUIOSRecovery;
	BOOL _triggeredUIRepair;
	BOOL _triggeredUITVLatencySetup;
	CUUserNotificationSession* _unoteTVLatencySetup;
	BOOL _triggeredUIWatchSetup;
	BOOL _triggeredUIWHASetup;
	NEVPNConnection* _vpnCnx;
	unsigned long long _watchFastScanLastEndTicks;
	NSObject*<OS_dispatch_source> _watchFastScanTimer;
	NSMutableDictionary* _watchSetupDevices;
	BOOL _watchMigrationEnabled;
	unsigned long long _watchMigrationLastTicks;
	BOOL _watchSetupEnabled;
	SFBLEScanner* _watchSetupScanner;
	BOOL _airplayActive;
	int _airplayNotifyToken;
	BOOL _cdpEnabled;
	int _cfuNotifyToken;
	int _iTunesNotifyToken;
	CUSystemMonitor* _manateeMonitor;
	BOOL _manateeProblem;
	unsigned long long _problemFlags;
	int _problemNotifyToken;
	BOOL _repairEnabled;
	SFDeviceRepairService* _repairService;
	SFDeviceRepairSession* _repairSession;
	BOOL _repairSilent;
	SFWiFiHealthMonitor* _wifiHealthMonitor;
	BOOL _wifiBad;
	BOOL _wifiBad8021x;
	BOOL _prefRepairAccounts;
	BOOL _prefRepairHomeKit;
	BOOL _prefRepairVPN;
	BOOL _prefRepairWiFi;
	BOOL _preventRepair;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL preventRepair;                                      //@synthesize preventRepair=_preventRepair - In the implementation block
@property (nonatomic,readonly) BOOL uiShowing; 
+(id)sharedSetupAgent;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)_activate;
-(void)invalidate;
-(void)_invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_update;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)repairDevice:(id)arg1 flags:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(void)retriggerProximitySetup:(/*^block*/id)arg1 ;
-(void)setupDevice:(id)arg1 homeIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)showDevicePickerWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)nfcTagReaderUIActivateWithEndpoint:(id)arg1 params:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_deviceFound:(id)arg1 ;
-(void)_deviceLost:(id)arg1 ;
-(void)prefsChanged;
-(BOOL)_uiShowing;
-(void)_screenStateChanged;
-(void)_uiLockStatusChanged;
-(void)_ensureClientStopped;
-(void)_ensureServerStopped;
-(void)_uiStartWithDevice:(id)arg1 viewControllerName:(id)arg2 xpcEndpoint:(id)arg3 label:(id)arg4 unlessApps:(id)arg5 extraInfo:(id)arg6 ;
-(void)_uiStartRepair:(id)arg1 flags:(unsigned)arg2 ;
-(void)_uiStartSetupiOS:(id)arg1 autoStart:(BOOL)arg2 ;
-(void)_uiStartSetupB238:(id)arg1 extraInfo:(id)arg2 ;
-(void)_uiStartWithDevice:(id)arg1 viewControllerName:(id)arg2 label:(id)arg3 unlessApps:(id)arg4 extraInfo:(id)arg5 ;
-(void)_uiStartHomeKitDeviceDetectedWithURL:(id)arg1 ;
-(void)_ensureClientStarted;
-(void)_ensureServerStarted;
-(void)_repairEnsuredStarted;
-(void)_repairEnsuredStopped;
-(void)_iTunesAccountsChanged;
-(void)_appleAccountSignIn:(id)arg1 ;
-(void)_hsa2Changed;
-(void)_wifiStateChanged;
-(void)_scanTimerFired;
-(void)_watchFound:(id)arg1 ;
-(void)_resetTriggers;
-(void)_postDeviceSetupNotificationForDevice:(id)arg1 present:(BOOL)arg2 ;
-(void)_uiStopIfNeededWithDevice:(id)arg1 ;
-(void)_uiStartPair:(id)arg1 extraInfo:(id)arg2 ;
-(void)_uiStartAppleTVSetup:(id)arg1 extraInfo:(id)arg2 ;
-(void)_launchAppWithMachServiceName:(id)arg1 ;
-(void)_uiStartOSRecovery:(id)arg1 extraInfo:(id)arg2 ;
-(void)_repairSilentStart:(id)arg1 ;
-(void)_uiStartTVLatencyBanner:(id)arg1 ;
-(void)_uiStartTVLatencySetup:(id)arg1 extraInfo:(id)arg2 ;
-(void)_uiStartSetupWHA:(id)arg1 ;
-(BOOL)_shouldOfferPassword:(id)arg1 ;
-(void)_uiStartWiFiPasswordSharing:(id)arg1 ;
-(void)_uiStartWithDevice:(id)arg1 viewControllerName:(id)arg2 xpcEndpoint:(id)arg3 label:(id)arg4 extraInfo:(id)arg5 ;
-(void)_uiStartForMacWithDevice:(id)arg1 label:(id)arg2 extraInfo:(id)arg3 ;
-(void)_watchFastScanStop;
-(void)_watchFastScanStartIfAllowed:(id)arg1 ;
-(id)_watchMigrating:(id)arg1 ;
-(void)_watchStartMigration:(id)arg1 ;
-(void)_uiStartSetupWatch:(id)arg1 ;
-(void)_pinPairHandleRequest:(id)arg1 ;
-(void)_pinPairHandleShowPIN:(id)arg1 ;
-(void)_pinPairHandleHidePIN;
-(void)_repairProblemFlagsChanged;
-(void)_repairHandleCFUItemsChanged;
-(void)_repairHandleManateeChanged;
-(void)_repairVPNError:(id)arg1 ;
-(void)_repairHandleCompletion;
-(void)_repairHandleCFUItems:(id)arg1 ;
-(void)_repairSilentProgress:(unsigned)arg1 info:(id)arg2 ;
-(void)_repairUpdateIDSCache;
-(void)setPreventRepair:(BOOL)arg1 ;
-(void)openSetupURL:(id)arg1 ;
-(void)_openSetupURL:(id)arg1 ;
-(void)reenableProxCardType:(unsigned char)arg1 ;
-(BOOL)uiShowing;
-(void)_pwsHandleUserResponse:(int)arg1 device:(id)arg2 info:(id)arg3 ;
-(void)_pwsHandleProgressEvent:(unsigned)arg1 info:(id)arg2 ;
-(void)testHomeKitDeviceDetected:(id)arg1 ;
-(void)testNFCUI:(id)arg1 ;
-(void)testPairUI:(id)arg1 ;
-(void)testPINShow:(id)arg1 ;
-(void)testPINHide;
-(void)testRepairUI:(id)arg1 ;
-(void)testSetupUIB238:(id)arg1 ;
-(void)testSetupUIiOS:(id)arg1 ;
-(void)testSetupUIPasswordSharing:(id)arg1 ;
-(void)testSetupUIWatch:(id)arg1 ;
-(void)testSetupUIWHA:(id)arg1 ;
-(void)testUIAppleTVSetup:(id)arg1 ;
-(void)testUIOSRecovery:(id)arg1 ;
-(void)testUITVLatencySetup:(id)arg1 ;
-(BOOL)preventRepair;
@end

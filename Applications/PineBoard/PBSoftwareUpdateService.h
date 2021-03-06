/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:30 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PBOSSoftwareUpdateProcessDelegate.h>
#import <PineBoard/PBSystemOverlayControllerDelegate.h>
#import <PineBoard/PBSystemUIManaging.h>

@class TVSBackgroundTask, PCSimpleTimer, NSTimer, PBSystemOverlayController, TVSUIOSUpdateViewController, NSString;

@interface PBSoftwareUpdateService : NSObject <PBOSSoftwareUpdateProcessDelegate, PBSystemOverlayControllerDelegate, PBSystemUIManaging> {

	BOOL _monitoringEnabled;
	BOOL _precheckingOSUpdateConditions;
	TVSBackgroundTask* _osSoftwareUpdateInitialCheckTask;
	TVSBackgroundTask* _osSoftwareUpdatePeriodicCheckTask;
	PCSimpleTimer* _darkWakeTimer;
	PCSimpleTimer* _updateDelayExpirationTimer;
	NSTimer* _vendorBagRefetchTimeoutTimer;
	/*^block*/id _osSoftwareUpdateCheckResponse;
	PBSystemOverlayController* _overlayController;
	TVSUIOSUpdateViewController* _updateViewController;

}

@property (assign,nonatomic) BOOL monitoringEnabled;                                             //@synthesize monitoringEnabled=_monitoringEnabled - In the implementation block
@property (assign,nonatomic) BOOL precheckingOSUpdateConditions;                                 //@synthesize precheckingOSUpdateConditions=_precheckingOSUpdateConditions - In the implementation block
@property (nonatomic,retain) TVSBackgroundTask * osSoftwareUpdateInitialCheckTask;               //@synthesize osSoftwareUpdateInitialCheckTask=_osSoftwareUpdateInitialCheckTask - In the implementation block
@property (nonatomic,retain) TVSBackgroundTask * osSoftwareUpdatePeriodicCheckTask;              //@synthesize osSoftwareUpdatePeriodicCheckTask=_osSoftwareUpdatePeriodicCheckTask - In the implementation block
@property (nonatomic,retain) PCSimpleTimer * darkWakeTimer;                                      //@synthesize darkWakeTimer=_darkWakeTimer - In the implementation block
@property (nonatomic,retain) PCSimpleTimer * updateDelayExpirationTimer;                         //@synthesize updateDelayExpirationTimer=_updateDelayExpirationTimer - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * vendorBagRefetchTimeoutTimer;                      //@synthesize vendorBagRefetchTimeoutTimer=_vendorBagRefetchTimeoutTimer - In the implementation block
@property (nonatomic,copy) id osSoftwareUpdateCheckResponse;                                     //@synthesize osSoftwareUpdateCheckResponse=_osSoftwareUpdateCheckResponse - In the implementation block
@property (nonatomic,readonly) PBSystemOverlayController * overlayController;                    //@synthesize overlayController=_overlayController - In the implementation block
@property (nonatomic,readonly) TVSUIOSUpdateViewController * updateViewController;               //@synthesize updateViewController=_updateViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPresenting,nonatomic,readonly) BOOL presenting; 
+(id)sharedInstance;
-(id)init;
-(BOOL)isPresenting;
-(void)startDownload:(/*^block*/id)arg1 ;
-(void)cancelDownload:(/*^block*/id)arg1 ;
-(void)_dismiss;
-(void)isUpdate:(id)arg1 readyForInstallation:(/*^block*/id)arg2 ;
-(void)currentDownload:(/*^block*/id)arg1 ;
-(void)setAssetDownloadIsDiscretionary:(BOOL)arg1 ;
-(void)purgeDownload:(/*^block*/id)arg1 ;
-(void)installUpdate:(id)arg1 withOptions:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)purgeableAssetSpaceWithCompletion:(/*^block*/id)arg1 ;
-(void)purgeAssetsWithCompletion:(/*^block*/id)arg1 ;
-(PBSystemOverlayController *)overlayController;
-(void)_handleDeviceWillSleepNotification:(id)arg1 ;
-(void)_handleDeviceWillWakeNotification:(id)arg1 ;
-(void)osUpdateProcessDidStartApplyWithData:(id)arg1 ;
-(void)osUpdateProcessDidStartRedownloadWithData:(id)arg1 ;
-(void)osUpdateProcessDidStartCheckWithData:(id)arg1 ;
-(void)osUpdateProcessDidFinishCheckWithData:(id)arg1 ;
-(void)osUpdateProcessDidFinishDownloadWithData:(id)arg1 ;
-(void)osUpdateProcessDidFinishApplyWithData:(id)arg1 ;
-(void)osUpdateProcessDidUpdateDownloadProgressWithData:(id)arg1 ;
-(void)osUpdateProcessDidUpdateApplyProgressWithData:(id)arg1 ;
-(void)osUpdateProcessDidStartDownloadWithData:(id)arg1 ;
-(void)osUpdateProcessDidEncounterSlowUpdateWithData:(id)arg1 ;
-(void)rebootDueToSlowUpdate;
-(void)notePlaybackStarted;
-(void)reallyPerformOSSoftwareUpdateCheck;
-(void)reallyPerformMDMOSSoftwareUpdateCheck;
-(void)checkForOSUpdatesWithOptions:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)isOSSoftwareUpdateChecking:(/*^block*/id)arg1 ;
-(void)isOSSoftwareUpdateDownloading:(/*^block*/id)arg1 ;
-(void)reallyPerformOSSoftwareRestore;
-(void)isOSSoftwareUpdateRunning:(/*^block*/id)arg1 ;
-(void)cancelOSSoftwareUpdate;
-(void)_handlePineBoardPrefsDidChange;
-(void)_handleOSUpdatePrefsDidChange;
-(void)_handleManagedConfigurationSettingsChangedNotification:(id)arg1 ;
-(void)setMonitoringEnabled:(BOOL)arg1 ;
-(void)_scheduleOSUpdateCheck;
-(id)osSoftwareUpdateCheckResponse;
-(void)setOsSoftwareUpdateCheckResponse:(id)arg1 ;
-(void)_startOSUpdateCheckForAction:(unsigned long long)arg1 ;
-(BOOL)_okToCheckForOSSoftwareUpdate;
-(TVSBackgroundTask *)osSoftwareUpdateInitialCheckTask;
-(void)setOsSoftwareUpdateInitialCheckTask:(TVSBackgroundTask *)arg1 ;
-(TVSBackgroundTask *)osSoftwareUpdatePeriodicCheckTask;
-(void)setOsSoftwareUpdatePeriodicCheckTask:(TVSBackgroundTask *)arg1 ;
-(void)_scheduleOSUpdateTimerForNextDarkWake;
-(void)_scheduleOSUpdateCheckForExpiredDelay;
-(PCSimpleTimer *)darkWakeTimer;
-(void)_cancelOSUpdateDarkWakeTimer;
-(void)_scheduleOSUpdateDarkWakeAt:(id)arg1 ;
-(void)setDarkWakeTimer:(PCSimpleTimer *)arg1 ;
-(void)_osUpdateDarkWakeTimerFired:(id)arg1 ;
-(NSTimer *)vendorBagRefetchTimeoutTimer;
-(void)setVendorBagRefetchTimeoutTimer:(NSTimer *)arg1 ;
-(void)_reloadVendorBag;
-(PCSimpleTimer *)updateDelayExpirationTimer;
-(void)setUpdateDelayExpirationTimer:(PCSimpleTimer *)arg1 ;
-(void)_osUpdateDelayedUpdateExpirationTimerFired:(id)arg1 ;
-(void)_postVendorBagReloadContinueAutoApply;
-(BOOL)_serverAllowsAutoApplyUpdates;
-(BOOL)precheckingOSUpdateConditions;
-(void)setPrecheckingOSUpdateConditions:(BOOL)arg1 ;
-(void)_precheckConditionsAndPerformAction:(unsigned long long)arg1 ;
-(BOOL)_isAtHomeSeedUser;
-(void)_scheduleOSUpdateOnSleepCheck;
-(id)_versionForUpdate:(id)arg1 ;
-(void)_showOSUpdateDownloadAndApplyConfirmationForUpdate:(id)arg1 largeUpdate:(BOOL)arg2 assetIsDownloaded:(BOOL)arg3 ;
-(void)_showOSUpdateUpToDateDialog:(BOOL)arg1 ;
-(void)_showOSUpdateError:(id)arg1 inDomain:(id)arg2 description:(id)arg3 ;
-(void)_showApplyConfirmationDialogWithData:(id)arg1 ;
-(void)_presentWithCompletion:(/*^block*/id)arg1 ;
-(void)_didEncounterSlowUpdate;
-(void)startSoftwareUpdateMonitoring;
-(BOOL)monitoringEnabled;
-(TVSUIOSUpdateViewController *)updateViewController;
@end


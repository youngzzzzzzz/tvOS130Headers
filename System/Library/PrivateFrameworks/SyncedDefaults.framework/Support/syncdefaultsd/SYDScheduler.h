/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_activity, OS_os_log;
@class SYDServerRequest, NSString, SYDSchedulingParameters, SYDGlobalScheduling, SYDAccount, SYDServer, NSMapTable, NSObject, NSMutableSet, NSMutableDictionary, NSMutableArray, SYDPerformBlock, NSURL, SYDSchedulerPushManager, SYDNetworkStateManager, SYDBackgroundScheduler;

@interface SYDScheduler : NSObject {

	BOOL _isIdle;
	BOOL _tracksAllChanges;
	BOOL _disableThrottling;
	BOOL _tracksUsage;
	BOOL _wasDisabledLastTime;
	BOOL _isAwake;
	BOOL _isSynchronizing;
	BOOL _hadASuccessfulSync;
	BOOL _needsToEndTransaction;
	BOOL _isSyncCancelled;
	SYDServerRequest* _currentServerRequest;
	NSString* _identifier;
	SYDSchedulingParameters* _parameters;
	SYDGlobalScheduling* _scheduling;
	SYDAccount* _account;
	SYDServer* _server;
	NSString* _debugName;
	NSString* _lastKnownUser;
	NSMapTable* _syncTasksByApp;
	unsigned long long _rank;
	NSObject*<OS_os_activity> _blockedOnNetworkToSyncNow;
	NSObject*<OS_os_activity> _blockedOnSyncQueueToSyncNow;
	unsigned long long _syncIdentifier;
	NSMutableSet* _cancelledApps;
	NSMutableDictionary* _syncWithTrackingRequestsByBundleIdentifier;
	NSMutableArray* _pendingSyncRequests;
	SYDPerformBlock* _willStartSynchronizingSoonBlock;
	double _nextSoonSynchronization;
	NSURL* _lastSeenPrimaryURL;
	NSURL* _redirectedURL;
	unsigned long long _redirectCount;
	double _minimalDelayedTime;
	SYDPerformBlock* _synchronizeAllAppsBlock;
	NSString* _lastModifiedHeaderForConfig;
	SYDSchedulerPushManager* _pushManager;
	SYDNetworkStateManager* _networkStateManager;
	SYDBackgroundScheduler* _backgroundScheduler;
	unsigned long long _backgroundRescheduleCount;
	double _lastPushNotification;
	double _lastSynchronization;
	double _syncIndicatorStart;
	NSObject*<OS_os_log> _journalLog;
	unsigned long long _transactionCount;
	SYDPerformBlock* _isWaitingToIdleBlock;
	NSMutableDictionary* _usagePerDisplayIdentifier;
	NSMutableDictionary* _sessionUsagePerDisplayIdentifier;
	double _lastRequestForConfig;

}

@property (nonatomic,retain) NSString * identifier;                                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * debugName;                                                          //@synthesize debugName=_debugName - In the implementation block
@property (nonatomic,retain) SYDAccount * account;                                                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * lastKnownUser;                                                      //@synthesize lastKnownUser=_lastKnownUser - In the implementation block
@property (assign,nonatomic) BOOL wasDisabledLastTime;                                                      //@synthesize wasDisabledLastTime=_wasDisabledLastTime - In the implementation block
@property (nonatomic,retain) NSMapTable * syncTasksByApp;                                                   //@synthesize syncTasksByApp=_syncTasksByApp - In the implementation block
@property (assign,nonatomic) unsigned long long rank;                                                       //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) BOOL isAwake;                                                                  //@synthesize isAwake=_isAwake - In the implementation block
@property (assign,nonatomic) BOOL isSynchronizing;                                                          //@synthesize isSynchronizing=_isSynchronizing - In the implementation block
@property (assign,nonatomic) BOOL hadASuccessfulSync;                                                       //@synthesize hadASuccessfulSync=_hadASuccessfulSync - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_activity> blockedOnNetworkToSyncNow;                           //@synthesize blockedOnNetworkToSyncNow=_blockedOnNetworkToSyncNow - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_activity> blockedOnSyncQueueToSyncNow;                         //@synthesize blockedOnSyncQueueToSyncNow=_blockedOnSyncQueueToSyncNow - In the implementation block
@property (assign,nonatomic) BOOL needsToEndTransaction;                                                    //@synthesize needsToEndTransaction=_needsToEndTransaction - In the implementation block
@property (assign,nonatomic) unsigned long long syncIdentifier;                                             //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isSyncCancelled;                                                          //@synthesize isSyncCancelled=_isSyncCancelled - In the implementation block
@property (nonatomic,retain) NSMutableSet * cancelledApps;                                                  //@synthesize cancelledApps=_cancelledApps - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * syncWithTrackingRequestsByBundleIdentifier;              //@synthesize syncWithTrackingRequestsByBundleIdentifier=_syncWithTrackingRequestsByBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingSyncRequests;                                          //@synthesize pendingSyncRequests=_pendingSyncRequests - In the implementation block
@property (nonatomic,retain) SYDPerformBlock * willStartSynchronizingSoonBlock;                             //@synthesize willStartSynchronizingSoonBlock=_willStartSynchronizingSoonBlock - In the implementation block
@property (assign,nonatomic) double nextSoonSynchronization;                                                //@synthesize nextSoonSynchronization=_nextSoonSynchronization - In the implementation block
@property (nonatomic,retain) NSURL * lastSeenPrimaryURL;                                                    //@synthesize lastSeenPrimaryURL=_lastSeenPrimaryURL - In the implementation block
@property (nonatomic,retain) NSURL * redirectedURL;                                                         //@synthesize redirectedURL=_redirectedURL - In the implementation block
@property (assign,nonatomic) unsigned long long redirectCount;                                              //@synthesize redirectCount=_redirectCount - In the implementation block
@property (nonatomic,retain) SYDGlobalScheduling * scheduling;                                              //@synthesize scheduling=_scheduling - In the implementation block
@property (assign,nonatomic) double minimalDelayedTime;                                                     //@synthesize minimalDelayedTime=_minimalDelayedTime - In the implementation block
@property (nonatomic,retain) SYDPerformBlock * synchronizeAllAppsBlock;                                     //@synthesize synchronizeAllAppsBlock=_synchronizeAllAppsBlock - In the implementation block
@property (nonatomic,retain) NSString * lastModifiedHeaderForConfig;                                        //@synthesize lastModifiedHeaderForConfig=_lastModifiedHeaderForConfig - In the implementation block
@property (nonatomic,retain) SYDSchedulerPushManager * pushManager;                                         //@synthesize pushManager=_pushManager - In the implementation block
@property (nonatomic,retain) SYDNetworkStateManager * networkStateManager;                                  //@synthesize networkStateManager=_networkStateManager - In the implementation block
@property (nonatomic,retain) SYDBackgroundScheduler * backgroundScheduler;                                  //@synthesize backgroundScheduler=_backgroundScheduler - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundRescheduleCount;                                  //@synthesize backgroundRescheduleCount=_backgroundRescheduleCount - In the implementation block
@property (assign,nonatomic) double lastPushNotification;                                                   //@synthesize lastPushNotification=_lastPushNotification - In the implementation block
@property (assign,nonatomic) double lastSynchronization;                                                    //@synthesize lastSynchronization=_lastSynchronization - In the implementation block
@property (assign,nonatomic) double syncIndicatorStart;                                                     //@synthesize syncIndicatorStart=_syncIndicatorStart - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> journalLog;                                               //@synthesize journalLog=_journalLog - In the implementation block
@property (assign,nonatomic) unsigned long long transactionCount;                                           //@synthesize transactionCount=_transactionCount - In the implementation block
@property (assign,nonatomic) BOOL isIdle;                                                                   //@synthesize isIdle=_isIdle - In the implementation block
@property (nonatomic,retain) SYDPerformBlock * isWaitingToIdleBlock;                                        //@synthesize isWaitingToIdleBlock=_isWaitingToIdleBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * usagePerDisplayIdentifier;                               //@synthesize usagePerDisplayIdentifier=_usagePerDisplayIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sessionUsagePerDisplayIdentifier;                        //@synthesize sessionUsagePerDisplayIdentifier=_sessionUsagePerDisplayIdentifier - In the implementation block
@property (nonatomic,retain) SYDSchedulingParameters * parameters;                                          //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) double lastRequestForConfig;                                                   //@synthesize lastRequestForConfig=_lastRequestForConfig - In the implementation block
@property (nonatomic,retain) SYDServerRequest * currentServerRequest;                                       //@synthesize currentServerRequest=_currentServerRequest - In the implementation block
@property (assign,nonatomic) SYDServer * server;                                                            //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) BOOL isWaitingToIdle; 
@property (assign,nonatomic) BOOL tracksAllChanges;                                                         //@synthesize tracksAllChanges=_tracksAllChanges - In the implementation block
@property (assign,nonatomic) BOOL disableThrottling;                                                        //@synthesize disableThrottling=_disableThrottling - In the implementation block
@property (assign,nonatomic) BOOL tracksUsage;                                                              //@synthesize tracksUsage=_tracksUsage - In the implementation block
+(Class)accountClass;
+(Class)parametersClass;
+(Class)pushManagerClass;
-(id)description;
-(void)dealloc;
-(NSString *)identifier;
-(void)setRedirectCount:(unsigned long long)arg1 ;
-(id)configuration;
-(void)setIdentifier:(NSString *)arg1 ;
-(SYDServer *)server;
-(void)setServer:(SYDServer *)arg1 ;
-(unsigned long long)redirectCount;
-(void)beginTransaction;
-(void)endTransaction;
-(SYDSchedulingParameters *)parameters;
-(NSString *)debugName;
-(void)setDebugName:(NSString *)arg1 ;
-(void)setRank:(unsigned long long)arg1 ;
-(unsigned long long)rank;
-(SYDBackgroundScheduler *)backgroundScheduler;
-(SYDAccount *)account;
-(void)setAccount:(SYDAccount *)arg1 ;
-(void)setParameters:(SYDSchedulingParameters *)arg1 ;
-(unsigned long long)transactionCount;
-(void)setTransactionCount:(unsigned long long)arg1 ;
-(id)statusDescription;
-(unsigned long long)syncIdentifier;
-(void)resetUpdates;
-(void)cancelSync;
-(BOOL)isIdle;
-(id)persistentState;
-(double)_pollingInterval;
-(BOOL)isAwake;
-(void)shutdownWithHandler:(/*^block*/id)arg1 ;
-(BOOL)tracksAllChanges;
-(void)logChange:(id)arg1 forBundleIdentifier:(id)arg2 changeCount:(long long)arg3 ;
-(void)setApplicationNeedsToSynchronizeSoon:(id)arg1 reason:(int)arg2 ;
-(void)endSyncWithTrackingRequestForBundleIndentifier:(id)arg1 error:(id)arg2 ;
-(BOOL)disableThrottling;
-(void)synchronizeApplicationsSimilarToApplication:(id)arg1 ;
-(SYDGlobalScheduling *)scheduling;
-(void)setScheduling:(SYDGlobalScheduling *)arg1 ;
-(void)_startTrackingChanges;
-(void)_accountDidChange;
-(void)_otherSchedulerDidUpdateConfigurationDictionary:(id)arg1 ;
-(void)_shouldUpdateTokenOnServer;
-(void)_receivedPushNotification:(id)arg1 ;
-(void)_networkStateDidChange;
-(void)_networkTypeDidChange;
-(void)resetIdling;
-(void)_cancelPlannedSynchronization;
-(int)_updateAccountRelatedManagers;
-(void)resetAllApplications;
-(void)synchronizeApplicationsWithServerSoon:(id)arg1 reason:(int)arg2 message:(id)arg3 description:(id)arg4 ;
-(void)_awake;
-(void)awake;
-(void)_otherSchedulerDidUpdateConfigurationDictionaryHelper:(id)arg1 ;
-(double)_configurationUpdateInterval;
-(BOOL)tracksUsage;
-(void)_addUsage:(unsigned long long)arg1 forKey:(id)arg2 forDisplayIdentifier:(id)arg3 ;
-(BOOL)_addAppToQueue:(id)arg1 reason:(int)arg2 now:(double)arg3 ;
-(void)_scheduleNextPollingSynchronization;
-(double)_reasonnableConfigurationUpdateInterval;
-(BOOL)_hasPendingTrackingMessages;
-(void)_endSyncWithTrackingRequestWithError:(id)arg1 ;
-(void)_startSynchronizationSoon;
-(void)synchronizeApplicationsWithServerNow:(id)arg1 reason:(int)arg2 description:(id)arg3 ;
-(void)_schedulePendingSyncRequests;
-(void)_stopSynchronizingWithTasks:(id)arg1 capacity:(unsigned long long)arg2 group:(id)arg3 now:(double)arg4 ;
-(void)_stopSynchronizingWithTask:(id)arg1 now:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_serviceUnavailableWithDuration:(double)arg1 ;
-(void)_didUsePropertyList:(id)arg1 forOutput:(BOOL)arg2 forDisplayIdentifier:(id)arg3 ;
-(long long)_maxConcurrentProcessingTaskCount;
-(SYDServerRequest *)currentServerRequest;
-(void)setCurrentServerRequest:(SYDServerRequest *)arg1 ;
-(void)_performRequest:(id)arg1 credentials:(id)arg2 retryCount:(unsigned)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_endSynchronizationWithRemainingTasks:(id)arg1 response:(id)arg2 sessionError:(id)arg3 ;
-(void)_handleSyncResponseWithData:(id)arg1 syncTaskMap:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)_useAlternateHost:(id)arg1 ;
-(void)_sendSyncRequestWithCredentials:(id)arg1 activity:(id)arg2 changes:(id)arg3 syncTaskMap:(id)arg4 ;
-(id)_newRequestWithPath:(id)arg1 body:(id)arg2 ;
-(void)_handleSyncRequestResponseWithCredentials:(id)arg1 activity:(id)arg2 syncTaskMap:(id)arg3 changes:(id)arg4 HTTPResponse:(id)arg5 data:(id)arg6 error:(id)arg7 ;
-(void)_synchronizeAllApps;
-(BOOL)_needsToDoSomeUpdateWithServerNow:(double)arg1 ;
-(BOOL)_startSynchronizationIfPossible;
-(void)_startSynchronizationSoonHelper;
-(void)_addUsage:(unsigned long long)arg1 forKey:(id)arg2 forDisplayIdentifier:(id)arg3 usingUsageDictionary:(id)arg4 ;
-(void)_startSynchronizingWithTasks:(id)arg1 capacity:(unsigned long long)arg2 group:(id)arg3 allChanges:(id)arg4 syncTaskMap:(id)arg5 ;
-(void)_startSynchronizingWithTask:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(long long)_maximumAppsPerRequest;
-(void)setSyncIdentifier:(unsigned long long)arg1 ;
-(void)_sendSyncRequestWithCredentials:(id)arg1 ;
-(void)_sendSetAPNSRequestWithCredentials:(id)arg1 ;
-(void)_handleAPNSRequestResponseWithCredentials:(id)arg1 publicToken:(id)arg2 HTTPResponse:(id)arg3 data:(id)arg4 error:(id)arg5 ;
-(void)_handleConfigRequestResponseWithCredentials:(id)arg1 HTTPResponse:(id)arg2 data:(id)arg3 error:(id)arg4 ;
-(void)_sendConfigRequestWithCredentials:(id)arg1 ;
-(BOOL)_startSynchronizationIfPossibleHelper;
-(void)_accountDidChangeHelper;
-(void)_resetUpdatesForceSynchronization:(BOOL)arg1 ;
-(void)_shouldUpdateTokenOnServerHelper;
-(void)_receivedSimulatedPushNotificationHelper:(id)arg1 ;
-(void)_addPendingSyncRequest:(id)arg1 ;
-(void)_handlePushNotification:(id)arg1 ;
-(void)_networkStateDidChangeHelper;
-(void)_networkTypeDidChangeHelper;
-(void)synchronizeApplicationsWithServerNow:(id)arg1 reason:(int)arg2 message:(id)arg3 description:(id)arg4 ;
-(BOOL)_addAppsToQueue:(id)arg1 reason:(int)arg2 now:(double)arg3 ;
-(void)_beginSyncWithTrackingForApps:(id)arg1 reason:(int)arg2 message:(id)arg3 soon:(BOOL)arg4 ;
-(double)_rescheduleMinimalDelayWithNow:(double)arg1 ;
-(void)_didRescheduleEarly;
-(void)_didRescheduleAsUsual;
-(void)cancelSyncOnShutdown;
-(void)_forgetIdling;
-(void)_idling;
-(void)_rescheduleSyncWithTrackingRequest;
-(id)limitsDescription;
-(void)_stopTrackingChanges;
-(unsigned long long)_usageForKey:(id)arg1 forDisplayIdentifier:(id)arg2 usingUsageDictionary:(id)arg3 ;
-(NSObject*<OS_os_log>)journalLog;
-(id)initWithIdentifier:(id)arg1 andPersistentState:(id)arg2 globalPushManager:(id)arg3 ;
-(void)accountChange;
-(void)passwordChange;
-(void)deviceUnlockedSinceBootChange;
-(void)revalidateAccount;
-(BOOL)startQueuedSynchronization;
-(void)_receivedSimulatedPushNotification:(id)arg1 ;
-(void)synchronizeApplicationsWithServerNow:(id)arg1 reason:(int)arg2 ;
-(void)synchronizeApplicationsWithServerSoon:(id)arg1 reason:(int)arg2 ;
-(void)unscheduleApplication:(id)arg1 ;
-(void)cancelSyncForApplications:(id)arg1 ;
-(BOOL)isWaitingToIdle;
-(void)refetchConfiguration;
-(void)setTracksAllChanges:(BOOL)arg1 ;
-(id)usageDescription;
-(void)updateUsageDictionary:(id*)arg1 ;
-(void)resetUsage;
-(void)setDisableThrottling:(BOOL)arg1 ;
-(void)setTracksUsage:(BOOL)arg1 ;
-(void)setIsIdle:(BOOL)arg1 ;
-(NSString *)lastKnownUser;
-(void)setLastKnownUser:(NSString *)arg1 ;
-(BOOL)wasDisabledLastTime;
-(void)setWasDisabledLastTime:(BOOL)arg1 ;
-(NSMapTable *)syncTasksByApp;
-(void)setSyncTasksByApp:(NSMapTable *)arg1 ;
-(void)setIsAwake:(BOOL)arg1 ;
-(BOOL)isSynchronizing;
-(void)setIsSynchronizing:(BOOL)arg1 ;
-(BOOL)hadASuccessfulSync;
-(void)setHadASuccessfulSync:(BOOL)arg1 ;
-(NSObject*<OS_os_activity>)blockedOnNetworkToSyncNow;
-(void)setBlockedOnNetworkToSyncNow:(NSObject*<OS_os_activity>)arg1 ;
-(NSObject*<OS_os_activity>)blockedOnSyncQueueToSyncNow;
-(void)setBlockedOnSyncQueueToSyncNow:(NSObject*<OS_os_activity>)arg1 ;
-(BOOL)needsToEndTransaction;
-(void)setNeedsToEndTransaction:(BOOL)arg1 ;
-(BOOL)isSyncCancelled;
-(void)setIsSyncCancelled:(BOOL)arg1 ;
-(NSMutableSet *)cancelledApps;
-(void)setCancelledApps:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)syncWithTrackingRequestsByBundleIdentifier;
-(void)setSyncWithTrackingRequestsByBundleIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)pendingSyncRequests;
-(void)setPendingSyncRequests:(NSMutableArray *)arg1 ;
-(SYDPerformBlock *)willStartSynchronizingSoonBlock;
-(void)setWillStartSynchronizingSoonBlock:(SYDPerformBlock *)arg1 ;
-(double)nextSoonSynchronization;
-(void)setNextSoonSynchronization:(double)arg1 ;
-(NSURL *)lastSeenPrimaryURL;
-(void)setLastSeenPrimaryURL:(NSURL *)arg1 ;
-(NSURL *)redirectedURL;
-(void)setRedirectedURL:(NSURL *)arg1 ;
-(double)minimalDelayedTime;
-(void)setMinimalDelayedTime:(double)arg1 ;
-(SYDPerformBlock *)synchronizeAllAppsBlock;
-(void)setSynchronizeAllAppsBlock:(SYDPerformBlock *)arg1 ;
-(NSString *)lastModifiedHeaderForConfig;
-(void)setLastModifiedHeaderForConfig:(NSString *)arg1 ;
-(SYDSchedulerPushManager *)pushManager;
-(void)setPushManager:(SYDSchedulerPushManager *)arg1 ;
-(SYDNetworkStateManager *)networkStateManager;
-(void)setNetworkStateManager:(SYDNetworkStateManager *)arg1 ;
-(void)setBackgroundScheduler:(SYDBackgroundScheduler *)arg1 ;
-(unsigned long long)backgroundRescheduleCount;
-(void)setBackgroundRescheduleCount:(unsigned long long)arg1 ;
-(double)lastPushNotification;
-(void)setLastPushNotification:(double)arg1 ;
-(double)lastSynchronization;
-(void)setLastSynchronization:(double)arg1 ;
-(double)syncIndicatorStart;
-(void)setSyncIndicatorStart:(double)arg1 ;
-(void)setJournalLog:(NSObject*<OS_os_log>)arg1 ;
-(SYDPerformBlock *)isWaitingToIdleBlock;
-(void)setIsWaitingToIdleBlock:(SYDPerformBlock *)arg1 ;
-(NSMutableDictionary *)usagePerDisplayIdentifier;
-(void)setUsagePerDisplayIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sessionUsagePerDisplayIdentifier;
-(void)setSessionUsagePerDisplayIdentifier:(NSMutableDictionary *)arg1 ;
-(double)lastRequestForConfig;
-(void)setLastRequestForConfig:(double)arg1 ;
@end


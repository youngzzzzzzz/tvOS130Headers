/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLBackgroundJobLibraryCoordinatorDelegate.h>
#import <PhotoLibraryServices/PLForegroundMonitorDelegate.h>
#import <PhotoLibraryServices/PLBackgroundJobCameraWatcherDelegate.h>

@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source, PLBackgroundJobServiceDelegate;
@class NSObject, PLBackgroundJobLibraryCoordinator, PFCoalescer, PLForegroundMonitor, PLBackgroundJobCameraWatcher, NSDictionary, NSString;

@interface PLBackgroundJobService : NSObject <PLBackgroundJobLibraryCoordinatorDelegate, PLForegroundMonitorDelegate, PLBackgroundJobCameraWatcherDelegate> {

	NSObject*<OS_xpc_object> _xpcActivity;
	unsigned long long _state;
	PLBackgroundJobLibraryCoordinator* _libraryCoordinator;
	PFCoalescer* _registrationCoalescer;
	PLForegroundMonitor* _foregroundMonitor;
	PLBackgroundJobCameraWatcher* _cameraWatcher;
	double _registrationCoalescerPushBackTimeInterval;
	NSDictionary* _libraryInvalidationCompletionHandlerByLibraryURL;
	NSDictionary* _bundlesToProcessByPriority;
	os_unfair_lock_s _stateLock;
	os_unfair_lock_s _bundlesToProcessByPriorityLock;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_source> _xpcActivityDeferTimer;
	BOOL _deferringService;
	BOOL _simulateXpcActivityDeferring;
	BOOL _cameraForeground;
	id<PLBackgroundJobServiceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLBackgroundJobServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_criteriaForActivityPriority:(unsigned long long)arg1 ;
+(id)_activityIdentifierForPriority:(unsigned long long)arg1 ;
-(id)init;
-(id<PLBackgroundJobServiceDelegate>)delegate;
-(void)setDelegate:(id<PLBackgroundJobServiceDelegate>)arg1 ;
-(void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 forBundleIdentifier:(id)arg3 ;
-(void)cameraWatcherDidChangeState:(id)arg1 ;
-(void)libraryCoordinatorFinishedJobsOnSubmittedBundle:(id)arg1 priority:(unsigned long long)arg2 ;
-(void)libraryCoordinatorFinishedJobsOnAllSubmittedBundles;
-(id)initWithLibraryCoordinator:(id)arg1 ;
-(id)_getBundlePathsToProcess;
-(void)_simulateXPCShouldDefer;
-(void)_shutdown;
-(void)invalidateLibraryBundle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)_getServiceState;
-(unsigned long long)_getServiceStateAlreadyLocked;
-(void)_setServiceState:(unsigned long long)arg1 ;
-(void)_setServiceStateAlreadyLocked:(unsigned long long)arg1 ;
-(void)_verifyStateTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(void)signalBackgroundProcessingNeededOnLibrary:(id)arg1 ;
-(void)registerActivityIfNecessaryOnBundle:(id)arg1 ;
-(void)_registerActivityWithoutCoalescingIfNecessaryOnBundle:(id)arg1 ;
-(BOOL)_serviceReadyForRegistration;
-(void)_registerActivityIfNecessaryOnBundles:(id)arg1 ;
-(void)_registerActivityWithPriority:(unsigned long long)arg1 ;
-(void)_unregisterActivityIfNeededShouldConsiderDeferring:(BOOL)arg1 ;
-(void)_startPollingForActivityStatus;
-(void)_stopRunningBackgroundJobsAndTearDownXPCDeferTimers;
-(void)_stopPollingForActivityStatus;
-(void)_startRunningBackgroundJobsWithPriority:(unsigned long long)arg1 ;
-(void)_stopRunningBackgroundJobs;
-(void)_updateCameraForegroundState:(BOOL)arg1 ;
-(id)_bundlesToProcessByPriorityAsPathStrings;
-(void)_persistBundleRecordsDictionaryToUserDefaults;
-(void)_loadBundleRecordsDictionaryFromUserDefaults;
-(void)_appendBundleRecordsToProcessingSet:(id)arg1 priority:(unsigned long long)arg2 ;
-(void)_removeBundleRecordFromProcessingSet:(id)arg1 priority:(unsigned long long)arg2 ;
-(void)_removeAllBundlesFromProcessingSet;
-(id)_getBundleRecordsFromProcessingSetForPriority:(unsigned long long)arg1 ;
-(id)_getBundleRecordsFromProcessingSetForAllPriorites;
@end

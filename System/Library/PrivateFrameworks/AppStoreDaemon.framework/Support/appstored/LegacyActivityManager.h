/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <appstored/appstored-Structs.h>
@class NSMutableDictionary, NSObject;

@interface LegacyActivityManager : NSObject {

	NSMutableDictionary* _backgroundTaskObservers;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _isRunning;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	os_unfair_lock_s _observerLock;
	BOOL _v3UpdatesEnabled;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)disableAutomaticDownloadsWithReason:(id)arg1 ;
-(void)enableAutomaticDownloadsWithReason:(id)arg1 ;
-(void)_setupEventHandlers;
-(void)_addBackgroundTaskWithRequest:(id)arg1 reason:(id)arg2 ;
-(void)_cancelBackgroundTaskWithIdentifier:(id)arg1 ;
-(void)handleWakeWithName:(const char*)arg1 result:(BOOL)arg2 ;
-(id)_addAppUsageFlushTask:(id)arg1 forceReset:(BOOL)arg2 activityName:(id)arg3 scheduledDate:(id)arg4 refreshInverval:(long long)arg5 ;
-(id)_addObserverForBackgroundTaskWithIdentifierPrefix:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_addRecordFavoriteAppsTask:(id)arg1 ;
-(void)_addCacheDeleteTask:(id)arg1 ;
-(void)addBackgroundTaskWithRequest:(id)arg1 reason:(id)arg2 ;
-(void)cancelBackgroundTaskWithIdentifier:(id)arg1 ;
-(id)resetAppUsageTaskWithReason:(id)arg1 ;
-(void)resetClusterMappingRefreshTaskWithReason:(id)arg1 ;
-(void)resetAppUsageActorIDDateWithReason:(id)arg1 nextPostDate:(id)arg2 ;
-(void)scheduleAppUsageFlushDnuWithReason:(id)arg1 ;
-(BOOL)shouldResetAppUsageActorID:(id)arg1 ;
-(void)_addUpdateCheckJobWithDate:(id)arg1 identifier:(id)arg2 allowsCellular:(BOOL)arg3 requireScreenSleep:(BOOL)arg4 addGracePeriod:(BOOL)arg5 reason:(id)arg6 ;
-(id)_addAppUsageRecordDnuMetricsTask:(id)arg1 ;
-(void)_addAppClusterMappingRefreshTask:(id)arg1 forReset:(BOOL)arg2 ;
-(void)_addAppUsageFlushDnuTask:(id)arg1 forceReset:(BOOL)arg2 ;
-(double)_appUsagePostInterval:(long long)arg1 ;
-(long long)_appUsagePostsPerDay;
-(double)_checkIntervalWithDefault:(double)arg1 bagKeys:(id)arg2 error:(id*)arg3 ;
-(id)_logableDate:(id)arg1 ;
-(id)_nextCheckDateWithInterval:(double)arg1 ;
-(void)_removeObserversForBackgroundTaskWithIdentifierPrefix:(id)arg1 ;
-(void)_scheduleAppUsageActorIDResetDate:(BOOL)arg1 targetPostDate:(id)arg2 reason:(id)arg3 ;
@end


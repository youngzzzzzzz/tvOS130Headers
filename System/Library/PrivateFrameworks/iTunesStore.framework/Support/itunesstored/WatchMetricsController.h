/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SSWatchMetricsEventsController;

@interface WatchMetricsController : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSWatchMetricsEventsController* _eventsController;
	BOOL _reportRunning;
	id _taskObserver;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_lastRunTime;
-(void)observeXPCServer:(id)arg1 ;
-(void)_handleTaskEvent;
-(void)_cellularSettingChanged;
-(void)_scheduleTask;
-(void)_stopBackgroundTask;
-(BOOL)_hasEntitlements:(id)arg1 ;
-(void)_sendUnentitledResponseToMessage:(id)arg1 connection:(id)arg2 ;
-(void)insertWatchEventWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_startBackgroundTaskAtSecondsFromNow:(double)arg1 window:(double)arg2 ;
-(void)_reportEventsOnCompletion:(/*^block*/id)arg1 ;
@end

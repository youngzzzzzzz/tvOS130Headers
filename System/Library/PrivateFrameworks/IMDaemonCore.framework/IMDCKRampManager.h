/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSTimer;

@interface IMDCKRampManager : NSObject {

	NSObject*<OS_dispatch_queue> _ckQueue;
	NSTimer* _retryTimer;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> ckQueue;              //@synthesize ckQueue=_ckQueue - In the implementation block
@property (nonatomic,retain) NSTimer * retryTimer;                                //@synthesize retryTimer=_retryTimer - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_scheduleOperation:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)ckQueue;
-(id)_CKUtilitiesSharedInstance;
-(void)fetchLatestRampStateFromCK:(/*^block*/id)arg1 ;
-(NSTimer *)retryTimer;
-(void)setRetryTimer:(NSTimer *)arg1 ;
-(id)_rampUpRecordID;
-(BOOL)_shouldSendPriorityRequest;
-(void)_writeRampStateAllowed:(BOOL)arg1 promoted:(BOOL)arg2 visible:(BOOL)arg3 fetchHadServerError:(BOOL)arg4 ;
-(void)_performRampCheckWithRetryAfter:(double)arg1 ;
-(void)_persistRampFetchServerError:(BOOL)arg1 ;
-(void)_fetchLatestRampStateFromCK:(/*^block*/id)arg1 ;
-(void)cachedRampState:(/*^block*/id)arg1 ;
@end


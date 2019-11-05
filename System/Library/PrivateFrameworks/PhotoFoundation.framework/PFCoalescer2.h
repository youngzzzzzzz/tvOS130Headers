/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, PFCoalescerDelegate;
#import <PhotoFoundation/PhotoFoundation-Structs.h>
@class NSObject;

@interface PFCoalescer2 : NSObject {

	opaque_pthread_mutex_t _lock;
	mach_timebase_info _timebase;
	unsigned long long _activityDelay;
	unsigned long long _maxActivityDelay;
	unsigned long long _coalescingInterval;
	unsigned long long _processingDelay;
	BOOL _finished;
	BOOL _delegateProcessingInProgress;
	NSObject*<OS_dispatch_group> _postGroup;
	/*^block*/id _leaveBlock;
	unsigned long long _coalesceStart;
	unsigned long long _fireDelay;
	/*^block*/id _postNotice;
	id<PFCoalescerDelegate> _delegate;

}

@property (__weak,readonly) id<PFCoalescerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long activityDelay; 
@property (assign,nonatomic) unsigned long long maxActivityDelay; 
@property (assign,nonatomic) unsigned long long coalescingInterval; 
@property (assign,nonatomic) unsigned long long processingDelay; 
-(id<PFCoalescerDelegate>)delegate;
-(void)finish:(/*^block*/id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)processingComplete;
-(id)initWithDelegate:(id)arg1 updateFrequency:(unsigned long long)arg2 ;
-(id)initUIControlRefreshCoalescerWithDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 activityDelay:(unsigned long long)arg2 maxActivityDelay:(unsigned long long)arg3 coalescingInterval:(unsigned long long)arg4 processingDelay:(unsigned long long)arg5 ;
-(void)delayPostBy:(unsigned long long)arg1 ;
-(void)postFinishedNotice;
-(void)postNotice;
-(void)coalesce:(/*^block*/id)arg1 ;
-(void)mutate:(/*^block*/id)arg1 ;
-(unsigned long long)activityDelay;
-(void)setActivityDelay:(unsigned long long)arg1 ;
-(unsigned long long)maxActivityDelay;
-(void)setMaxActivityDelay:(unsigned long long)arg1 ;
-(unsigned long long)coalescingInterval;
-(void)setCoalescingInterval:(unsigned long long)arg1 ;
-(unsigned long long)processingDelay;
-(void)setProcessingDelay:(unsigned long long)arg1 ;
@end

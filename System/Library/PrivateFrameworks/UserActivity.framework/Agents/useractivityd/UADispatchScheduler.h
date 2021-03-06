/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSString;

@interface UADispatchScheduler : NSObject {

	double _frequency;
	unsigned long long _runCount;
	unsigned long long _nextTime;
	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _executingGroup;
	NSString* _name;
	/*^block*/id _block;

}

@property (retain,readonly) NSObject*<OS_dispatch_source> source;                     //@synthesize source=_source - In the implementation block
@property (retain,readonly) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (retain,readonly) NSObject*<OS_dispatch_group> executingGroup;              //@synthesize executingGroup=_executingGroup - In the implementation block
@property (copy) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (assign) double frequency;                                                  //@synthesize frequency=_frequency - In the implementation block
@property (retain,readonly) id block;                                                 //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long runCount;                                     //@synthesize runCount=_runCount - In the implementation block
@property (readonly) unsigned long long nextTime;                                     //@synthesize nextTime=_nextTime - In the implementation block
+(id)dispatchScheduler:(id)arg1 frequency:(double)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(NSString *)name;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setName:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_source>)source;
-(void)resume;
-(void)suspend;
-(id)block;
-(void)reset;
-(void)waitUntilComplete;
-(void)setFrequency:(double)arg1 ;
-(double)frequency;
-(BOOL)scheduleAt:(id)arg1 ;
-(unsigned long long)nextTime;
-(unsigned long long)runCount;
-(BOOL)scheduleNext:(double)arg1 ;
-(id)nextRunTimeString;
-(void)doIt;
-(id)init:(id)arg1 frequency:(double)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_doIt;
-(NSObject*<OS_dispatch_group>)executingGroup;
-(void)updateFrequency:(double)arg1 ;
@end


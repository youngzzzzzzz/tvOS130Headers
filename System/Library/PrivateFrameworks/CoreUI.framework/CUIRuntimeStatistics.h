/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CUIRuntimeStatistics : NSObject {

	Aq _wasted_size;
	Aq _total_size;
	Aq _shortCircuitImageLookup;
	Aq _total_lookup;
	NSObject*<OS_dispatch_queue> _queue;
	int _notify_token;

}
+(id)sharedRuntimeStatistics;
+(void)generateLog;
-(id)init;
-(void)dealloc;
-(void)_logStatistics:(int)arg1 ;
-(void)addStatisticAllocatedImageSize:(unsigned long long)arg1 roundedSize:(unsigned long long)arg2 ;
-(void)incrementStatisticDidShortCircuitImageLookup;
-(void)incrementStatisticLookup;
@end

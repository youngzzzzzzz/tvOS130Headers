/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface MLBackgroundWatchdog : NSObject {

	NSObject*<OS_dispatch_source> _timer;

}

@property (retain) NSObject*<OS_dispatch_source> timer;              //@synthesize timer=_timer - In the implementation block
+(id)watchdogWithTimeout:(double)arg1 queue:(id)arg2 ;
+(id)watchdogWithTimeout:(double)arg1 label:(id)arg2 queue:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
@end


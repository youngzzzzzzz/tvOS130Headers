/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreSDB.framework/CoreSDB
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreSDB/CoreSDB-Structs.h>
@class NSThread, NSString, NSRunLoop, NSObject;

@interface _CSDBThreadObject : NSObject {

	NSThread* _thread;
	NSString* _identifier;
	NSRunLoop* _runLoop;
	CFRunLoopSourceRef _runLoopSource;
	NSString* _queueContext;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)_threadedMain;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(id)initWithIdentifier:(id)arg1 qosClass:(unsigned short)arg2 ;
-(id)thread;
-(void)performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(BOOL)isCurrentThreadOtherwiseAssert:(BOOL)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSCondition.h>

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {

	NSMutableArray* _runLoopStateList;

}
-(id)init;
-(void)dealloc;
-(void)wait;
-(BOOL)waitUntilDate:(id)arg1 ;
-(void)signal;
-(void)broadcast;
-(void)waitInMode:(id)arg1 ;
-(BOOL)waitUntilDate:(id)arg1 inMode:(id)arg2 ;
-(BOOL)_waitInMode:(id)arg1 untilDate:(id)arg2 ;
-(void)_signalRunLoopWithState:(id)arg1 ;
@end


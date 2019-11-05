/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRunLoop;

@interface IAPStackshot : NSObject {

	NSRunLoop* _stackshotRunLoop;
	unsigned _timerID;

}
+(id)sharedInstance;
-(id)init;
-(void)start;
-(void)_stackshotThread;
-(void)endTimer:(id)arg1 ;
-(void)_saveStackshot:(id)arg1 ;
-(id)startTimer:(double)arg1 withInfo:(id)arg2 ;
@end

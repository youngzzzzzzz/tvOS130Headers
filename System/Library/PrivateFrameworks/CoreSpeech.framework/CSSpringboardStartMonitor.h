/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSpringboardStartMonitor : CSEventMonitor {

	int _notifyToken;
	BOOL _isSpringBoardStarted;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(BOOL)isSpringboardStarted;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)_checkSpringBoardStarted;
-(void)_didReceiveSpringboardStarted:(BOOL)arg1 ;
-(void)_notifyObserver:(id)arg1 withStarted:(BOOL)arg2 ;
-(void)_didReceiveSpringboardStartedInQueue:(BOOL)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSAudioServerCrashMonitor : CSEventMonitor {

	unsigned long long _serverState;

}

@property (assign,nonatomic) unsigned long long serverState;              //@synthesize serverState=_serverState - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_didReceiveMediaserverNotification:(unsigned long long)arg1 ;
-(void)_mediaserverdDidRestart;
-(void)_notifyObserver:(id)arg1 withMediaserverState:(unsigned long long)arg2 ;
-(void)notifyAudioServerCrash;
-(unsigned long long)serverState;
-(void)setServerState:(unsigned long long)arg1 ;
@end


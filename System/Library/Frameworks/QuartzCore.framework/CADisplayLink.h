/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CADisplay;

@interface CADisplayLink : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) CADisplay * display; 
@property (nonatomic,retain) id userInfo; 
@property (nonatomic,readonly) double maximumRefreshRate; 
@property (nonatomic,readonly) double heartbeatRate; 
@property (nonatomic,readonly) long long minimumFrameDuration; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double targetTimestamp; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) long long frameInterval; 
@property (assign,nonatomic) long long preferredFramesPerSecond; 
+(id)px_displayLinkWithWeakTarget:(id)arg1 selector:(SEL)arg2 ;
+(id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2 ;
+(id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(id)userInfo;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setUserInfo:(id)arg1 ;
-(BOOL)isPaused;
-(double)timestamp;
-(double)duration;
-(long long)frameInterval;
-(void)setFrameInterval:(long long)arg1 ;
-(CADisplay *)display;
-(double)heartbeatRate;
-(long long)minimumFrameDuration;
-(id)_initWithDisplayLinkItem:(DisplayLinkItem*)arg1 ;
-(void)addToRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setPaused:(BOOL)arg1 ;
-(double)targetTimestamp;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(long long)preferredFramesPerSecond;
-(long long)actualFramesPerSecond;
-(double)maximumRefreshRate;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, CADisplayLink;

@interface GKBubbleMeshAnimator : NSObject {

	NSMutableSet* _animatingViews;
	CADisplayLink* _displayLink;
	double _lastUpdateTime;

}

@property (nonatomic,retain) NSMutableSet * animatingViews;              //@synthesize animatingViews=_animatingViews - In the implementation block
@property (assign,nonatomic) CADisplayLink * displayLink;                //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double lastUpdateTime;                      //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
+(id)sharedAnimator;
-(id)init;
-(void)dealloc;
-(void)applicationWillResignActive:(id)arg1 ;
-(double)lastUpdateTime;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)update:(id)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)setLastUpdateTime:(double)arg1 ;
-(void)addAnimatingBubbleView:(id)arg1 ;
-(void)removeAnimatingBubbleView:(id)arg1 ;
-(NSMutableSet *)animatingViews;
-(void)setAnimatingViews:(NSMutableSet *)arg1 ;
@end

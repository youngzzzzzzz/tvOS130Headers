/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GKBubblePathAnimator : NSObject

@property (nonatomic,readonly) long long animatorType; 
+(id)sharedBubblePathAnimator;
+(id)hiTimingFunction;
-(void)animateTransition:(id)arg1 ;
-(void)animateTransition:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)animatorType;
-(BOOL)bubblesOnscreenAtBeginning;
-(BOOL)bubblesOnscreenAtEnd;
-(double)minimumDurationForViewAnimations;
-(id)effectiveViewForContext:(id)arg1 ;
@end

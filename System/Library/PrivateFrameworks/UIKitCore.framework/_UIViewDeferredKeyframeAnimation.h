/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIViewDeferredAnimation.h>

@class NSMutableArray;

@interface _UIViewDeferredKeyframeAnimation : _UIViewDeferredAnimation {

	NSMutableArray* _animationFrames;

}
-(BOOL)isEmpty;
-(void)_finalize;
-(void)animateFrameAtIndex:(long long)arg1 animations:(/*^block*/id)arg2 ;
-(void)addAnimationFrameForValue:(id)arg1 ;
-(id)_animationFrames;
-(void)_enumerateAnimationFramesForKeyframes:(/*^block*/id)arg1 ;
@end

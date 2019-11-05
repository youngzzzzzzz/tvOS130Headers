/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@class UIAttachmentBehavior;

@interface _UIPlatterMenuSnapBehavior : UIDynamicBehavior {

	UIAttachmentBehavior* _spring1;
	UIAttachmentBehavior* _spring2;

}

@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double frequency; 
@property (assign,nonatomic) CGPoint anchorPoint; 
-(double)damping;
-(void)setDamping:(double)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)setFrequency:(double)arg1 ;
-(double)frequency;
-(id)initWithItem:(id)arg1 attachedToAnchor:(CGPoint)arg2 ;
@end

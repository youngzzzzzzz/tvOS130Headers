/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, UIViewController, UIInputViewSetPlacement;


@protocol UISplitKeyboardSource <_UIRemoteKeyboardViewSource,UIInputViewSetPlacementOwner>
@property (nonatomic,retain,readonly) UIView * view; 
@property (nonatomic,readonly) BOOL isChangingPlacement; 
@property (nonatomic,readonly) CGPoint positionConstraintConstant; 
@property (nonatomic,retain,readonly) UIViewController * _inputViewController; 
@property (nonatomic,retain,readonly) UIInputViewSetPlacement * placement; 
@property (nonatomic,retain,readonly) id<UIInputViewSetPlacementApplicator> applicator; 
@required
-(UIView *)view;
-(UIInputViewSetPlacement *)placement;
-(UIViewController *)_inputViewController;
-(id<UIInputViewSetPlacementApplicator>)applicator;
-(void)setInterfaceAutorotationDisabled:(BOOL)arg1;
-(void)prepareForSplitTransition;
-(void)finishSplitTransition;
-(BOOL)isChangingPlacement;
-(id)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1;
-(CGPoint)positionConstraintConstant;

@end


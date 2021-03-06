/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:10 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPresentationController.h>

@class UIVisualEffectView, UIView;

@interface HBFolderPresentationController : UIPresentationController {

	UIVisualEffectView* _visualEffectView;
	UIView* _dimmingView;

}

@property (nonatomic,retain) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                               //@synthesize dimmingView=_dimmingView - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)presentationTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(UIView *)dimmingView;
-(void)setDimmingView:(UIView *)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)dismissalTransitionWillBegin;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoardUI/HeadBoardUI-Structs.h>
#import <HeadBoardUI/HBUITopShelfParadeCollectionViewCell.h>

@class UIView;

@interface HBUITopShelfParadeActionsCollectionViewCell : HBUITopShelfParadeCollectionViewCell {

	UIView* _backgroundViewControllerContainerView;
	UIView* _contentViewControllerContainerView;

}

@property (nonatomic,readonly) UIView * backgroundViewControllerContainerView;              //@synthesize backgroundViewControllerContainerView=_backgroundViewControllerContainerView - In the implementation block
@property (nonatomic,readonly) UIView * contentViewControllerContainerView;                 //@synthesize contentViewControllerContainerView=_contentViewControllerContainerView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)paradeBackgroundViewDidChange:(id)arg1 ;
-(void)paradeContentViewDidChange:(id)arg1 ;
-(UIView *)backgroundViewControllerContainerView;
-(UIView *)contentViewControllerContainerView;
@end

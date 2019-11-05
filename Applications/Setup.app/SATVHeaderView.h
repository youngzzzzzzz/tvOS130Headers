/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:58 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIActivityIndicatorView, UIView;

@interface SATVHeaderView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIActivityIndicatorView* _activitiyIndicatorView;
	UIView* _activityIndicatorContainerView;

}

@property (nonatomic,retain) UIActivityIndicatorView * activitiyIndicatorView;              //@synthesize activitiyIndicatorView=_activitiyIndicatorView - In the implementation block
@property (nonatomic,retain) UIView * activityIndicatorContainerView;                       //@synthesize activityIndicatorContainerView=_activityIndicatorContainerView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                       //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)showActivityIndicator;
-(UIView *)activityIndicatorContainerView;
-(void)setActivityIndicatorContainerView:(UIView *)arg1 ;
-(void)hideActivityIndicator;
-(CGSize)_titleSizeForSize:(CGSize)arg1 ;
-(CGSize)_subtitleSizeForSize:(CGSize)arg1 ;
-(UIActivityIndicatorView *)activitiyIndicatorView;
-(void)setActivitiyIndicatorView:(UIActivityIndicatorView *)arg1 ;
@end

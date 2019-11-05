/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface PXPeopleProgressFooterView : UIView {

	BOOL _usesEmphasizedTitle;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;               //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic) BOOL usesEmphasizedTitle;              //@synthesize usesEmphasizedTitle=_usesEmphasizedTitle - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(double)preferredHeightForWidth:(double)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)_setupViews;
-(void)setUsesEmphasizedTitle:(BOOL)arg1 ;
-(void)_setupConstraints;
-(BOOL)usesEmphasizedTitle;
@end

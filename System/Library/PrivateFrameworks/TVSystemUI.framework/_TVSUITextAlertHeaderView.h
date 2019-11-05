/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, NSLayoutConstraint, NSString;

@interface _TVSUITextAlertHeaderView : UICollectionViewCell {

	UILabel* _titleLabel;
	NSLayoutConstraint* _titleLabelLeadingConstraint;
	NSString* _title;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_textColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabelLeadingConstant:(double)arg1 ;
@end

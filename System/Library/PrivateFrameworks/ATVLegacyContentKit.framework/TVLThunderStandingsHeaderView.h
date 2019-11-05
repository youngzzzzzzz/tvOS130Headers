/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLThunderStandingsRowCell.h>

@class UIView;

@interface TVLThunderStandingsHeaderView : TVLThunderStandingsRowCell {

	UIView* _dividerView;

}

@property (nonatomic,retain) UIView * dividerView;              //@synthesize dividerView=_dividerView - In the implementation block
-(void)layoutSubviews;
-(id)_labelColor;
-(id)_labelFont;
-(UIView *)dividerView;
-(void)setDividerView:(UIView *)arg1 ;
-(void)configureWithHeaderDefinitions:(id)arg1 ;
@end

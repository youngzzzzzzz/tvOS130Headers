/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, NSString, UIColor;

@interface UIKeyboardEmojiSectionHeader : UICollectionReusableView {

	UILabel* _emojiSectionHeader;

}

@property (nonatomic,copy) NSString * headerName; 
@property (nonatomic,copy) UIColor * headerTextColor; 
@property (assign,nonatomic) double headerFontSize; 
@property (assign,nonatomic) double headerOpacity; 
@property (assign,nonatomic) BOOL useVibrantBlend; 
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)headerTextColor;
-(void)setHeaderTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(NSString *)headerName;
-(void)setHeaderName:(NSString *)arg1 ;
-(void)setHeaderFontSize:(double)arg1 ;
-(void)setHeaderOpacity:(double)arg1 ;
-(void)setUseVibrantBlend:(BOOL)arg1 ;
-(double)headerFontSize;
-(double)headerOpacity;
-(BOOL)useVibrantBlend;
@end


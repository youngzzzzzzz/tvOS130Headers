/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>

@class NSString;

@interface UIStatusBarDateTimeItemView : UIStatusBarItemView {

	BOOL _useCustomFadeAnimation;
	NSString* _dateTimeString;

}

@property (nonatomic,copy) NSString * dateTimeString;                  //@synthesize dateTimeString=_dateTimeString - In the implementation block
@property (assign,nonatomic) BOOL useCustomFadeAnimation;              //@synthesize useCustomFadeAnimation=_useCustomFadeAnimation - In the implementation block
+(const char*)_cStringFromData:(SCD_Struct_UI100*)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(long long)textStyle;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)accessibilityHUDRepresentation;
-(void)setVisible:(BOOL)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(id)contentsImage;
-(double)extraRightPadding;
-(BOOL)shouldTintContentImage;
-(BOOL)useCustomFadeAnimation;
-(void)setUseCustomFadeAnimation:(BOOL)arg1 ;
-(NSString *)dateTimeString;
-(void)setDateTimeString:(NSString *)arg1 ;
@end


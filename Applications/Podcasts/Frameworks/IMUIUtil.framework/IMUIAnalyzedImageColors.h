/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:15 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Frameworks/IMUIUtil.framework/IMUIUtil
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface IMUIAnalyzedImageColors : NSObject {

	BOOL _isBackgroundLight;
	UIColor* _backgroundColor;
	UIColor* _textPrimaryColor;
	UIColor* _textSecondaryColor;

}

@property (nonatomic,retain) UIColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * textPrimaryColor;                //@synthesize textPrimaryColor=_textPrimaryColor - In the implementation block
@property (nonatomic,retain) UIColor * textSecondaryColor;              //@synthesize textSecondaryColor=_textSecondaryColor - In the implementation block
@property (assign,nonatomic) BOOL isBackgroundLight;                    //@synthesize isBackgroundLight=_isBackgroundLight - In the implementation block
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setTextPrimaryColor:(UIColor *)arg1 ;
-(void)setTextSecondaryColor:(UIColor *)arg1 ;
-(void)setIsBackgroundLight:(BOOL)arg1 ;
-(BOOL)isBackgroundLight;
-(UIColor *)textPrimaryColor;
-(UIColor *)textSecondaryColor;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:19 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIImage, UIColor, UIImageView, UIView, CAGradientLayer;

@interface MTArtworkBackgroundView : UIView {

	BOOL _useLightStyle;
	UIImage* _artwork;
	UIColor* _blendColor;
	double _fadeHeight;
	UIImageView* _artworkView;
	UIView* _colorView;
	UIView* _fadeView;
	UIImage* _blurredArtwork;
	CAGradientLayer* _gradientLayer;

}

@property (nonatomic,retain) UIImageView * artworkView;                    //@synthesize artworkView=_artworkView - In the implementation block
@property (nonatomic,retain) UIView * colorView;                           //@synthesize colorView=_colorView - In the implementation block
@property (nonatomic,retain) UIView * fadeView;                            //@synthesize fadeView=_fadeView - In the implementation block
@property (nonatomic,retain) UIImage * blurredArtwork;                     //@synthesize blurredArtwork=_blurredArtwork - In the implementation block
@property (nonatomic,retain) CAGradientLayer * gradientLayer;              //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,retain) UIImage * artwork;                            //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,retain) UIColor * blendColor;                         //@synthesize blendColor=_blendColor - In the implementation block
@property (assign,nonatomic) BOOL useLightStyle;                           //@synthesize useLightStyle=_useLightStyle - In the implementation block
@property (assign,nonatomic) double fadeHeight;                            //@synthesize fadeHeight=_fadeHeight - In the implementation block
-(id)init;
-(UIImage *)artwork;
-(void)setArtwork:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(CAGradientLayer *)gradientLayer;
-(UIView *)colorView;
-(void)setColorView:(UIView *)arg1 ;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
-(UIImageView *)artworkView;
-(void)setArtworkView:(UIImageView *)arg1 ;
-(void)_updateGradientColors;
-(id)initWithArtwork:(id)arg1 blendColor:(id)arg2 ;
-(void)setBlendColor:(UIColor *)arg1 ;
-(id)_blurredImageForImage:(id)arg1 ;
-(void)setBlurredArtwork:(UIImage *)arg1 ;
-(UIView *)fadeView;
-(UIColor *)blendColor;
-(double)fadeHeight;
-(void)setFadeHeight:(double)arg1 ;
-(BOOL)useLightStyle;
-(void)setUseLightStyle:(BOOL)arg1 ;
-(void)setFadeView:(UIView *)arg1 ;
-(UIImage *)blurredArtwork;
@end

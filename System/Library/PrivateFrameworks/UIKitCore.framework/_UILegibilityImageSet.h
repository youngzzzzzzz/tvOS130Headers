/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage;

@interface _UILegibilityImageSet : NSObject {

	UIImage* _image;
	UIImage* _shadowImage;

}

@property (nonatomic,retain) UIImage * image;                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;              //@synthesize shadowImage=_shadowImage - In the implementation block
+(id)imageFromImage:(id)arg1 withShadowImage:(id)arg2 ;
-(void)dealloc;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 shadowImage:(id)arg2 ;
-(id)imageSetFlippedForRightToLeft;
-(id)imageSetWithOrientation:(long long)arg1 ;
@end


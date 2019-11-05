/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MRCAMLLayer.h>

@class MRImage, MRTextRenderer;

@interface MRCAMLTextLayer : MRCAMLLayer {

	MRImage* textImage;
	MRTextRenderer* textRenderer;

}

@property (nonatomic,retain) MRImage * textImage; 
@property (nonatomic,retain) MRTextRenderer * textRenderer; 
-(void)dealloc;
-(MRTextRenderer *)textRenderer;
-(void)setTextRenderer:(MRTextRenderer *)arg1 ;
-(void)setTextImage:(MRImage *)arg1 ;
-(MRImage *)textImage;
@end

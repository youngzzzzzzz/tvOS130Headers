/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCAsset.h>

@class NSMutableSet, NSSet;

@interface MCAssetVideo : MCAsset {

	NSMutableSet* mSlides;

}

@property (readonly) NSSet * slides; 
-(id)init;
-(BOOL)isInUse;
-(NSSet *)slides;
-(void)demolish;
-(void)learnSlide:(id)arg1 ;
-(void)forgetSlide:(id)arg1 ;
@end


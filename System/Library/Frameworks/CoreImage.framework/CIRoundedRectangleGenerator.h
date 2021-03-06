/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, NSNumber, CIColor;

@interface CIRoundedRectangleGenerator : CIFilter {

	CIVector* inputExtent;
	NSNumber* inputRadius;
	CIColor* inputColor;

}

@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) CIColor * inputColor; 
+(id)customAttributes;
-(id)outputImage;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(CIColor *)inputColor;
-(void)setInputColor:(CIColor *)arg1 ;
@end


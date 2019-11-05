/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPercentileRed : CIFilter {

	CIImage* inputImage;
	NSNumber* inputPercentile;
	NSNumber* inputCount;
	NSNumber* inputScale;
	NSNumber* inputNormalize;
	NSNumber* inputClip;
	NSNumber* inputHard;

}

@property (nonatomic,retain) NSNumber * inputPercentile; 
@property (nonatomic,retain) NSNumber * inputCount; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputNormalize; 
@property (nonatomic,retain) NSNumber * inputClip; 
@property (nonatomic,retain) NSNumber * inputHard; 
+(id)customAttributes;
-(NSNumber *)inputCount;
-(id)outputImage;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(void)setInputCount:(NSNumber *)arg1 ;
-(NSNumber *)inputPercentile;
-(void)setInputPercentile:(NSNumber *)arg1 ;
-(NSNumber *)inputNormalize;
-(void)setInputNormalize:(NSNumber *)arg1 ;
-(NSNumber *)inputClip;
-(void)setInputClip:(NSNumber *)arg1 ;
-(NSNumber *)inputHard;
-(void)setInputHard:(NSNumber *)arg1 ;
@end

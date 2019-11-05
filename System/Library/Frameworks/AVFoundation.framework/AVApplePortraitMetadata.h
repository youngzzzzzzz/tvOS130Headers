/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/NSSecureCoding.h>

@class AVApplePortraitMetadataInternal, NSData, NSIndexSet;

@interface AVApplePortraitMetadata : NSObject <NSSecureCoding> {

	AVApplePortraitMetadataInternal* _internal;

}

@property (readonly) float apertureFocalRatio; 
@property (readonly) float minimumApertureFocalRatio; 
@property (readonly) float maximumApertureFocalRatio; 
@property (readonly) float portraitLightingEffectStrength; 
@property (readonly) float luminanceNoiseAmplitude; 
@property (readonly) int faceOrientation; 
@property (readonly) NSData * faceObservationsData; 
@property (readonly) NSIndexSet * indexesOfShallowDepthOfFieldObservations; 
@property (readonly) CGRect focusRectangle; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)faceOrientation;
-(float)apertureFocalRatio;
-(float)minimumApertureFocalRatio;
-(float)maximumApertureFocalRatio;
-(float)portraitLightingEffectStrength;
-(float)luminanceNoiseAmplitude;
-(NSData *)faceObservationsData;
-(NSIndexSet *)indexesOfShallowDepthOfFieldObservations;
-(CGRect)focusRectangle;
-(id)initWithInternal:(id)arg1 ;
-(id)initWithPortraitMetadataDictionary:(id)arg1 ;
@end

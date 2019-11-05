/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/NSSecureCoding.h>

@interface AVCompositionTrackFormatDescriptionReplacement : NSObject <NSSecureCoding> {

	opaqueCMFormatDescriptionRef _originalFormatDescription;
	opaqueCMFormatDescriptionRef _replacementFormatDescription;

}

@property (readonly) const opaqueCMFormatDescriptionRef originalFormatDescription; 
@property (readonly) const opaqueCMFormatDescriptionRef replacementFormatDescription; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const opaqueCMFormatDescriptionRef)originalFormatDescription;
-(const opaqueCMFormatDescriptionRef)replacementFormatDescription;
-(id)initWithOriginalFormatDescription:(opaqueCMFormatDescriptionRef)arg1 andReplacementFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
@end

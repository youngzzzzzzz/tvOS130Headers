/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataObject.h>
#import <AVFoundation/NSCopying.h>

@interface AVMetadataSalientObject : AVMetadataObject <NSCopying> {

	long long _objectID;

}

@property (readonly) long long objectID;              //@synthesize objectID=_objectID - In the implementation block
+(id)salientObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)objectID;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 type:(id)arg4 ;
-(id)initWithObjectID:(long long)arg1 time:(SCD_Struct_AV7)arg2 duration:(SCD_Struct_AV7)arg3 bounds:(CGRect)arg4 optionalInfoDict:(id)arg5 originalMetadataObject:(id)arg6 sourceCaptureInput:(id)arg7 ;
-(id)initWithObjectID:(long long)arg1 time:(SCD_Struct_AV7)arg2 duration:(SCD_Struct_AV7)arg3 bounds:(CGRect)arg4 ;
@end


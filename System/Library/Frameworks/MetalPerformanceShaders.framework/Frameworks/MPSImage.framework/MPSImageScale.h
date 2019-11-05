/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageScale : MPSUnaryImageKernel {

	MPSScaleTransform _transformStorage;
	MPSScaleTransform* _scaleTransform;

}

@property (assign,nonatomic) const MPSScaleTransform* scaleTransform;              //@synthesize scaleTransform=_scaleTransform - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setScaleTransform:(const MPSScaleTransform*)arg1 ;
-(const MPSScaleTransform*)scaleTransform;
@end

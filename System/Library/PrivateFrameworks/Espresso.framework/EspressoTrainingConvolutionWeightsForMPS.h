/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/Espresso-Structs.h>
#import <Espresso/EspressoConvolutionWeightsForMPS.h>

@protocol MTLBuffer;
@interface EspressoTrainingConvolutionWeightsForMPS : EspressoConvolutionWeightsForMPS {

	BOOL is_training;
	id<MTLBuffer> _weightsBuffer;
	id<MTLBuffer> _biasesBuffer;

}

@property (retain) id<MTLBuffer> weightsBuffer;              //@synthesize weightsBuffer=_weightsBuffer - In the implementation block
@property (retain) id<MTLBuffer> biasesBuffer;               //@synthesize biasesBuffer=_biasesBuffer - In the implementation block
-(BOOL)ready;
-(void*)weights;
-(float*)biasTerms;
-(unsigned)weightsLayout;
-(id<MTLBuffer>)weightsBuffer;
-(id<MTLBuffer>)biasesBuffer;
-(void)setBiasesBuffer:(id<MTLBuffer>)arg1 ;
-(void)setWeightsBuffer:(id<MTLBuffer>)arg1 ;
-(id)initWithParams:(convolution_uniforms)arg1 forMode:(BOOL)arg2 ;
@end


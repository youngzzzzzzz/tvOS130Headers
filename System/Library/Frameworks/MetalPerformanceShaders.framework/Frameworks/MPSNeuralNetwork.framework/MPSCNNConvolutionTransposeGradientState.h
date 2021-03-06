/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSCNNConvolutionGradientState.h>

@class MPSCNNConvolutionTranspose, MPSCNNConvolutionGradientState;

@interface MPSCNNConvolutionTransposeGradientState : MPSCNNConvolutionGradientState {

	MPSCNNConvolutionTranspose* _convolutionTranspose;
	MPSCNNConvolutionGradientState* _convolutionGradientState;
	long long _kernelOffsetX;
	long long _kernelOffsetY;

}

@property (nonatomic,readonly) MPSCNNConvolutionGradientState * convolutionGradientState;              //@synthesize convolutionGradientState=_convolutionGradientState - In the implementation block
@property (nonatomic,retain,readonly) MPSCNNConvolutionTranspose * convolutionTranspose;               //@synthesize convolutionTranspose=_convolutionTranspose - In the implementation block
+(id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4 weightsLayout:(unsigned)arg5 ;
+(id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4 ;
-(id)debugDescription;
-(void)dealloc;
-(id)initWithResource:(id)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4 ;
-(id)convolution;
-(MPSCNNConvolutionTranspose *)convolutionTranspose;
-(id)initWithResource:(id)arg1 weightsLayout:(unsigned)arg2 ;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 weightsLayout:(unsigned)arg4 ;
-(unsigned long long)sourceWidth;
-(unsigned long long)sourceHeight;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 ;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4 ;
-(id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4 weightsLayout:(unsigned)arg5 ;
-(MPSCNNConvolutionGradientState *)convolutionGradientState;
@end


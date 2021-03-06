/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNNormalizationNode.h>

@interface MPSCNNLocalContrastNormalizationNode : MPSCNNNormalizationNode {

	float _pm;
	float _ps;
	float _p0;
	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;

}

@property (assign,nonatomic) float pm;                                     //@synthesize pm=_pm - In the implementation block
@property (assign,nonatomic) float ps;                                     //@synthesize ps=_ps - In the implementation block
@property (assign,nonatomic) float p0;                                     //@synthesize p0=_p0 - In the implementation block
@property (assign,nonatomic) unsigned long long kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (assign,nonatomic) unsigned long long kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
+(id)nodeWithSource:(id)arg1 kernelSize:(unsigned long long)arg2 ;
-(unsigned long long)kernelHeight;
-(unsigned long long)kernelWidth;
-(FilterGraphNode*)newFilterNode;
-(id)initWithSource:(id)arg1 ;
-(Class)gradientClass;
-(float)p0;
-(void)setP0:(float)arg1 ;
-(float)pm;
-(void)setPm:(float)arg1 ;
-(float)ps;
-(void)setPs:(float)arg1 ;
-(void)setKernelWidth:(unsigned long long)arg1 ;
-(void)setKernelHeight:(unsigned long long)arg1 ;
-(id)initWithSource:(id)arg1 kernelSize:(unsigned long long)arg2 ;
@end


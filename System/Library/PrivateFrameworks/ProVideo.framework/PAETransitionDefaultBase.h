/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAESharedDefaultBase.h>
#import <ProVideo/FxTransition.h>

@interface PAETransitionDefaultBase : PAESharedDefaultBase <FxTransition> {

	BOOL _haveEase;
	BOOL _haveMotionBlur;
	int _initGap;

}
-(BOOL)addParameters;
-(BOOL)parameterChanged:(unsigned)arg1 ;
-(BOOL)addEaseParametersWithDefault:(float)arg1 andFlags:(unsigned)arg2 ;
-(BOOL)convertTimeFraction:(double)arg1 toLocal:(double*)arg2 andDerivative:(double*)arg3 atTime:(/*function pointer*/void**)arg4 ;
-(BOOL)isFrontGap;
-(BOOL)isEndGap;
-(BOOL)frameSetup:(SCD_Struct_PA76*)arg1 inputInfoA:(SCD_Struct_PA77)arg2 inputInfoB:(SCD_Struct_PA77)arg3 timeFraction:(float)arg4 hardware:(BOOL*)arg5 software:(BOOL*)arg6 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withInfo:(SCD_Struct_PA76*)arg5 ;
-(BOOL)finishInitialSetup:(id*)arg1 ;
-(BOOL)getEaseIn:(double*)arg1 easeOut:(double*)arg2 atTime:(/*function pointer*/void**)arg3 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withSpeed:(float)arg5 withInfo:(SCD_Struct_PA76*)arg6 ;
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInputA:(SCD_Struct_PA77)arg3 withInputB:(SCD_Struct_PA77)arg4 withTimeFraction:(float)arg5 withInfo:(SCD_Struct_PA76*)arg6 ;
-(BOOL)renderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withInfo:(SCD_Struct_PA76*)arg5 ;
-(BOOL)addMotionBlurParameters;
-(double)relativeShutterAtTime:(/*function pointer*/void**)arg1 ;
@end

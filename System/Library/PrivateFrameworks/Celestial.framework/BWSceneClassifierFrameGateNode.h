/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWSceneClassifierFrameGateNode : BWNode {

	BOOL _discardsBlurryFrames;
	int _maxFrameRate;
	SCD_Struct_BW2 _lastEmittedPTS;
	int _inputFrameCount;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)nodeType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)initWithMaxOutputFrameRate:(int)arg1 ;
-(void)setDiscardsBlurryFrames:(BOOL)arg1 ;
-(BOOL)discardsBlurryFrames;
@end


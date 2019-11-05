/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFanOutNode.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface BWAttachedMediaSplitNode : BWFanOutNode {

	NSArray* _attachedMediaKeys;
	NSMutableDictionary* _attachedMediaFormatDescriptions;
	NSArray* _attachedMediaToPropagateToPrimaryOutput;
	NSMutableSet* _disabledAttachedMediaKeys;
	int _numOutputs;
	BOOL _emitsNodeErrorsForMissingAttachedMedia;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(id)initWithAttachedMediaKeys:(id)arg1 attachedMediaToPropagateToPrimaryOutput:(id)arg2 ;
-(id)initWithAttachedMediaKeys:(id)arg1 ;
-(void)setOutputRenderingEnabled:(BOOL)arg1 forAttachedMediaKey:(id)arg2 ;
-(BOOL)isOutputRenderingEnabledForAttachedMediaKey:(id)arg1 ;
-(void)setEmitsNodeErrorsForMissingAttachedMedia:(BOOL)arg1 ;
-(BOOL)emitsNodeErrorsForMissingAttachedMedia;
@end

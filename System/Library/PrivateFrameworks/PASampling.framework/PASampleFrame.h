/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PASerializable.h>

@class NSMutableSet, NSString, NSSet;

@interface PASampleFrame : NSObject <PASerializable> {

	PASampleFrame* _parentFrame;
	NSMutableSet* _childFrames;
	unsigned long long _address;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak,readonly) PASampleFrame * parentFrame;                   //@synthesize parentFrame=_parentFrame - In the implementation block
@property (readonly) NSSet * childFrames;                                  //@synthesize childFrames=_childFrames - In the implementation block
@property (assign) unsigned long long address;                             //@synthesize address=_address - In the implementation block
@property (readonly) unsigned long long symbolicationAddress; 
@property (readonly) BOOL isKernel; 
@property (readonly) BOOL isRootFrame; 
@property (readonly) BOOL isTruncatedBacktraceFrame; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
+(id)_newSampleFrameFromSerializedSampleFrame:(const SCD_Struct_PA15*)arg1 ;
+(id)addStack:(id)arg1 toSetOfRootFrames:(id)arg2 ;
+(id)newSampleFrameWithStackFrame:(pa_stack_frame*)arg1 andParent:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(unsigned long long)address;
-(id)initWithAddress:(unsigned long long)arg1 ;
-(void)setAddress:(unsigned long long)arg1 ;
-(PASampleFrame *)parentFrame;
-(NSSet *)childFrames;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(NSMutableDictionary*)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(NSMutableDictionary*)arg2 andDataBufferDictionary:(NSMutableDictionary*)arg3 ;
-(BOOL)isKernel;
-(id)_initWithSerializedSampleFrame:(const SCD_Struct_PA15*)arg1 ;
-(unsigned long long)symbolicationAddress;
-(BOOL)isTruncatedBacktraceFrame;
-(id)copyWithNewParent:(id)arg1 ;
-(id)initWithStackFrame:(pa_stack_frame*)arg1 andParent:(id)arg2 ;
-(id)initWithSampleFrame:(id)arg1 andParent:(id)arg2 ;
-(void)_addChildFrame:(id)arg1 ;
-(void)querySymbolInformationForSelfAndChildrenUsingTask:(id)arg1 andKernelTask:(id)arg2 andSampleTimeSeriesDataStore:(id)arg3 ;
-(BOOL)isRootFrame;
-(BOOL)correspondsToStackshotFrame:(pa_stack_frame*)arg1 ;
@end

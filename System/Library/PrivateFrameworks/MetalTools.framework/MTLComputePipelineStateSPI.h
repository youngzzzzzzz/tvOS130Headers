/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MTLDebugInstrumentationData;


@protocol MTLComputePipelineStateSPI <MTLComputePipelineState>
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
@property (assign,nonatomic) unsigned long long resourceIndex; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * debugInstrumentationData; 
@optional
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1;

@required
-(unsigned long long)uniqueIdentifier;
-(unsigned long long)staticThreadgroupMemoryLength;
-(MTLDebugInstrumentationData *)debugInstrumentationData;

@end

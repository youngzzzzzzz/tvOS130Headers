/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLIndirectCommandBufferSPI <MTLIndirectCommandBuffer>
@property (readonly) unsigned long long uniqueIdentifier; 
@property (readonly) unsigned long long storageMode; 
@property (assign,nonatomic) unsigned long long resourceIndex; 
@required
-(unsigned long long)uniqueIdentifier;
-(unsigned long long)storageMode;
-(unsigned long long)resourceIndex;
-(void)getHeader:(void*)arg1 headerSize:(unsigned long long*)arg2;
-(void)setResourceIndex:(unsigned long long)arg1;

@end


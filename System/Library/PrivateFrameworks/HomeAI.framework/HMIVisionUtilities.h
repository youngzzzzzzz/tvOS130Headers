/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HomeAI/HMFLogging.h>

@class NSString;

@interface HMIVisionUtilities : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(int)createIOSurfaceBackedPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelBuffer:(_CVBuffer*)arg3 ;
+(CVBufferRef)cropAndResizePixelBuffer:(CVBufferRef)arg1 rect:(CGRect)arg2 size:(CGSize)arg3 error:(id*)arg4 ;
+(CGRect)applyPadding:(CGRect)arg1 withOriginalSize:(CGSize)arg2 padding:(CGSize)arg3 ;
+(CVBufferRef)cropPixelBuffer:(CVBufferRef)arg1 cropRect:(CGRect)arg2 error:(id*)arg3 ;
+(CVBufferRef)resizePixelBuffer:(CVBufferRef)arg1 resultSize:(CGSize)arg2 error:(id*)arg3 ;
+(CGRect)imposeMinSizeFor:(CGRect)arg1 withOriginalSize:(CGSize)arg2 minCrop:(int)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorInOut.h>
#import <CoreImage/CIImageProcessorOutput.h>

@protocol CIImageProcessorOutput
@property (nonatomic,readonly) CGRect region; 
@property (nonatomic,readonly) unsigned long long bytesPerRow; 
@property (nonatomic,readonly) int format; 
@property (nonatomic,readonly) void* baseAddress; 
@property (nonatomic,readonly) IOSurfaceRef surface; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) id<MTLTexture> metalTexture; 
@property (nonatomic,readonly) id<MTLCommandBuffer> metalCommandBuffer; 
@required
-(unsigned long long)bytesPerRow;
-(void*)baseAddress;
-(int)format;
-(CGRect)region;
-(CVBufferRef)pixelBuffer;
-(id<MTLCommandBuffer>)metalCommandBuffer;
-(id<MTLTexture>)metalTexture;
-(IOSurfaceRef)surface;

@end


@protocol MTLCommandBuffer;
@interface CIImageProcessorOutput : CIImageProcessorInOut <CIImageProcessorOutput> {

	id<MTLCommandBuffer> _cmdBuffer;

}

@property (nonatomic,readonly) CGRect region; 
@property (nonatomic,readonly) unsigned long long bytesPerRow; 
@property (nonatomic,readonly) int format; 
@property (nonatomic,readonly) void* baseAddress; 
@property (nonatomic,readonly) IOSurfaceRef surface; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) id<MTLTexture> metalTexture; 
@property (nonatomic,readonly) id<MTLCommandBuffer> metalCommandBuffer; 
-(void)dealloc;
-(unsigned)contextID;
-(void*)baseAddress;
-(CGColorSpaceRef)workingColorSpace;
-(id<MTLCommandBuffer>)metalCommandBuffer;
-(id<MTLTexture>)metalTexture;
-(id)initWithSurface:(IOSurfaceRef)arg1 texture:(Texture*)arg2 allowSRGB:(BOOL)arg3 bounds:(CGRect)arg4 context:(Context*)arg5 ;
-(BOOL)metalCommandBufferRequested;
-(id)metalContext;
@end


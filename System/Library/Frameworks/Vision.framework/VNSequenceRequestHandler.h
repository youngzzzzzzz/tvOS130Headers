/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequestWarming.h>
#import <Vision/VNRequestCancelling.h>

@class VNRequestPerformer;

@interface VNSequenceRequestHandler : NSObject <VNRequestWarming, VNRequestCancelling> {

	VNRequestPerformer* _requestPerformer;

}
+(void)requestForcedCleanup;
+(void)forcedCleanup;
+(void)requestForcedCleanupWithOptions:(id)arg1 ;
+(void)requestForcedCleanupWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)forcedCleanupWithOptions:(id)arg1 ;
+(id)asyncProcessingDispatchQueue;
-(id)init;
-(void)cancelAllRequests;
-(BOOL)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareForPerformingRequests:(id)arg1 error:(id*)arg2 ;
-(BOOL)_performRequests:(id)arg1 onUnvettedImageBuffer:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCVPixelBuffer:(CVBufferRef)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onCVPixelBuffer:(CVBufferRef)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCVPixelBuffer:(CVBufferRef)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCVPixelBuffer:(CVBufferRef)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onCGImage:(CGImageRef)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onCGImage:(CGImageRef)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCGImage:(CGImageRef)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCGImage:(CGImageRef)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onImageData:(id)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onImageData:(id)arg2 orientation:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 onImageData:(id)arg2 orientation:(unsigned)arg3 gatheredForensics:(id*)arg4 error:(id*)arg5 ;
-(BOOL)performRequests:(id)arg1 onImageSpecifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 onImageSpecifier:(id)arg2 gatheredForensics:(id*)arg3 error:(id*)arg4 ;
@end

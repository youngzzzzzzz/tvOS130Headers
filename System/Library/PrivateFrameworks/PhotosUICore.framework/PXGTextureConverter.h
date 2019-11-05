/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PXGImageTexture;


@protocol PXGTextureConverter <NSObject>
@property (nonatomic,readonly) int presentationType; 
@property (nonatomic,readonly) PXGImageTexture * transparentTexture; 
@property (nonatomic,readonly) BOOL supportsTextureAtlas; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue; 
@required
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setRequestQueue:(id)arg1;
-(int)presentationType;
-(void)setProcessingQueue:(id)arg1;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(id)createTextureFromCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2;
-(id)createTextureFromCVPixelBuffer:(CVBufferRef)arg1 transform:(CGAffineTransform)arg2;
-(id)createPayloadTextureFromPayload:(id)arg1;
-(id)createTextureAtlasManagerForImageDataSpec:(SCD_Struct_PX24)arg1;
-(PXGImageTexture *)transparentTexture;
-(BOOL)supportsTextureAtlas;

@end

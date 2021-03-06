/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MDRenderTarget <NSObject>
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) double contentScale; 
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) id<GGLRenderQueueSource> renderSource; 
@property (nonatomic,readonly) BOOL multiSample; 
@property (nonatomic,readonly) const RenderTargetFormat* format; 
@property (nonatomic,readonly) Renderer* renderer; 
@property (nonatomic,readonly) BOOL shouldRasterize; 
@property (nonatomic,readonly) CGSize sizeInPixels; 
@property (nonatomic,readonly) RenderTarget* finalRenderTarget; 
@property (nonatomic,readonly) float averageFPS; 
@optional
-(CGPoint*)convertPoint:(CGPoint)arg1 toLayer:(id)arg2;
-(float)averageFPS;
-(DebugConsoleRef)debugConsoleForId:(int)arg1;
-(void)willDrawView;
-(void)didDrawView;

@required
-(CGSize)size;
-(const RenderTargetFormat*)format;
-(void)setSize:(CGSize)arg1;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1;
-(BOOL)shouldRasterize;
-(Renderer*)renderer;
-(double)contentScale;
-(CGSize)sizeInPixels;
-(RenderTarget*)finalRenderTarget;
-(void)setContentScale:(double)arg1;
-(BOOL)multiSample;
-(void)destroyRenderTarget;
-(void)createRenderTarget;
-(BOOL)hasRenderTarget;
-(shared_ptr<ggl::BitmapDataBase>*)bitmapData;
-(id<GGLRenderQueueSource>)renderSource;
-(void)setRenderSource:(id)arg1;

@end


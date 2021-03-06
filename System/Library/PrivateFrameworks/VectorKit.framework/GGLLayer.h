/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GGLLayer
@property (assign) id<GGLLayerDelegate> renderDelegate; 
@property (nonatomic,readonly) CGSize backingSize; 
@property (readonly) int backingFormat; 
@required
-(id<GGLLayerDelegate>)renderDelegate;
-(void)setRenderDelegate:(id)arg1;
-(void)onTimerFired:(double)arg1;
-(void)didEnterBackground;
-(int)backingFormat;
-(CGSize)backingSize;

@end


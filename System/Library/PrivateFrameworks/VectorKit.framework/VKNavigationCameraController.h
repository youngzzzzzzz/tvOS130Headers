/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class VKSceneConfiguration;


@protocol VKNavigationCameraController <VKCameraController,VKPuckAnimatorDelegate>
@property (assign,nonatomic) VKScreenCanvas*<VKInteractiveMap> screenCanvas; 
@property (assign,nonatomic) VKSceneConfiguration * sceneConfiguration; 
@property (assign,nonatomic) double zoomScale; 
@required
-(void)stop;
-(void)setZoomScale:(double)arg1;
-(double)zoomScale;
-(VKSceneConfiguration *)sceneConfiguration;
-(void)setSceneConfiguration:(id)arg1;
-(void)setScreenCanvas:(id)arg1;
-(void)startWithPounce:(BOOL)arg1 startLocation:(CGSize)arg2 startCourse:(double)arg3 pounceCompletionHandler:(/*^block*/id)arg4;
-(VKScreenCanvas*<VKInteractiveMap>)screenCanvas;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MDRenderTarget, MDMapControllerDelegate;
#import <VectorKit/VectorKit-Structs.h>
@class VKCamera, VKCameraController, ARSession;

@interface VKScreenCanvas : NSObject {

	MapEngine* _mapEngine;
	RunLoopController* _runLoopController;
	AnimationRunner* _animationRunner;
	shared_ptr<md::TaskContext>* _taskContext;
	VKCamera* _camera;
	id<MDRenderTarget> _displayTarget;
	BOOL _userIsGesturing;
	VKCameraController* _cameraController;
	VKEdgeInsets _edgeInsets;
	VKEdgeInsets _fullyOccludedEdgeInsets;
	BOOL _deallocing;
	Renderer* _mapRenderer;
	LayoutContext* _layoutContext;
	id<MDMapControllerDelegate> _mapDelegate;
	PerspectiveView<double> _view;
	ARSession* _arSession;

}

@property (nonatomic,readonly) VKCamera * camera;                                  //@synthesize camera=_camera - In the implementation block
@property (nonatomic,readonly) MapEngine* mapEngine;                               //@synthesize mapEngine=_mapEngine - In the implementation block
@property (assign,nonatomic) VKEdgeInsets edgeInsets; 
@property (assign,nonatomic) VKEdgeInsets fullyOccludedEdgeInsets;                 //@synthesize fullyOccludedEdgeInsets=_fullyOccludedEdgeInsets - In the implementation block
@property (assign,nonatomic) id<MDMapControllerDelegate> mapDelegate;              //@synthesize mapDelegate=_mapDelegate - In the implementation block
@property (assign,getter=isGesturing,nonatomic) BOOL gesturing; 
-(void)dealloc;
-(long long)tileSize;
-(void)setContentsScale:(double)arg1 ;
-(id)viewportInfo;
-(VKCamera *)camera;
-(VKEdgeInsets)edgeInsets;
-(void)setEdgeInsets:(VKEdgeInsets)arg1 ;
-(shared_ptr<md::FeatureMarker>*)featureMarkerAtScreenPoint:(CGPoint)arg1 ;
-(void)updateCameraForFrameResize;
-(void)didReceiveMemoryWarning:(BOOL)arg1 beAggressive:(BOOL)arg2 ;
-(id)cameraController;
-(BOOL)isGesturing;
-(void)setGesturing:(BOOL)arg1 ;
-(id<MDMapControllerDelegate>)mapDelegate;
-(id)initWithMapEngine:(MapEngine*)arg1 inBackground:(BOOL)arg2 ;
-(void)setMapDelegate:(id<MDMapControllerDelegate>)arg1 ;
-(void)transferStateFromCanvas:(id)arg1 ;
-(void)setCameraController:(id)arg1 ;
-(void)runAnimation:(id)arg1 ;
-(void)setFullyOccludedEdgeInsets:(VKEdgeInsets)arg1 ;
-(VKEdgeInsets)fullyOccludedEdgeInsets;
-(BOOL)restoreViewportFromInfo:(id)arg1 ;
-(void)updateWithTimestamp:(double)arg1 ;
-(void)didPresent;
-(BOOL)wantsTimerTick;
-(void)puckAnimator:(id)arg1 updatedPosition:(const Coordinate3D<Radians, double>*)arg2 course:(const Unit<RadianUnitDescription, double>*)arg3 ;
-(void)puckAnimator:(id)arg1 updatedTargetPosition:(const Coordinate3D<Radians, double>*)arg2 ;
-(MapEngine*)mapEngine;
-(void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2 ;
@end


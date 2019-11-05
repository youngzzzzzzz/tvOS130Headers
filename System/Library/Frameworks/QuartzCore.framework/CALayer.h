/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/PXGInternalReusableView.h>
#import <QuartzCore/CAPropertyInfo.h>
#import <QuartzCore/NSSecureCoding.h>
#import <QuartzCore/CAMediaTiming.h>

@class NSString, NSArray, CAMeshTransform, NSDictionary;

@interface CALayer : NSObject <PXGInternalReusableView, CAPropertyInfo, NSSecureCoding, CAMediaTiming> {

	CALayerIvars* _attr;

}

@property (assign,setter=is_setBlurRadius:,nonatomic) double is_blurRadius; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL px_supportsAlphaBlending; 
@property (nonatomic,retain,readonly) CALayer * currentLayer; 
@property (nonatomic,retain,readonly) CALayer * _mapKit_mapLayer; 
@property (setter=_ui_setLayoutRun:,nonatomic,retain) id<_UIVectorTextLayoutRun> _ui_layoutRun; 
@property (nonatomic,readonly) CALayer * _labelLayerToClipDuringBoundsSizeAnimation; 
@property (copy) NSArray * states; 
@property (copy) NSArray * stateTransitions; 
@property (readonly) CGRect visibleRect; 
@property (copy) CAMeshTransform * meshTransform; 
@property (assign) BOOL needsLayoutOnGeometryChange; 
@property (assign) BOOL canDrawConcurrently; 
@property (assign) BOOL acceleratesDrawing; 
@property (getter=isFrozen) BOOL frozen; 
@property (assign) BOOL allowsHitTesting; 
@property (assign) BOOL hitTestsContentsAlphaChannel; 
@property (assign) BOOL hitTestsAsOpaque; 
@property (assign) BOOL clearsContext; 
@property (assign) BOOL contentsOpaque; 
@property (assign) BOOL contentsContainsSubtitles; 
@property (assign) BOOL literalContentsCenter; 
@property (copy) NSString * contentsScaling; 
@property (assign) CGAffineTransform contentsTransform; 
@property (assign) BOOL contentsAlignsToPixels; 
@property (assign) BOOL contentsDither; 
@property (assign) CGColorRef contentsMultiplyColor; 
@property (copy) NSString * contentsSwizzle; 
@property (assign) BOOL invertsShadow; 
@property (assign) BOOL shadowPathIsBounds; 
@property (assign) BOOL continuousCorners; 
@property (retain) id cornerContents; 
@property (assign) CGRect cornerContentsCenter; 
@property (assign) BOOL cornerContentsMasksEdges; 
@property (assign) double motionBlurAmount; 
@property (assign) BOOL sortsSublayers; 
@property (assign) BOOL preloadsCache; 
@property (assign) BOOL flipsHorizontalAxis; 
@property (assign) BOOL rasterizationPrefersDisplayCompositing; 
@property (assign) unsigned disableUpdateMask; 
@property (assign) BOOL definesDisplayRegionOfInterest; 
@property (assign) BOOL allowsGroupBlending; 
@property (assign) BOOL allowsDisplayCompositing; 
@property (assign) BOOL createsCompositingGroup; 
@property (assign) CGSize sizeRequisition; 
@property (assign) CGSize backgroundColorPhase; 
@property (assign) BOOL inheritsTiming; 
@property (copy) NSArray * presentationModifiers; 
@property (copy) NSArray * layoutDependents; 
@property (assign) id<CALayerDelegate> unsafeUnretainedDelegate; 
@property (copy) NSString * securityMode; 
@property (assign) CGRect bounds; 
@property (assign) CGPoint position; 
@property (assign) double zPosition; 
@property (assign) CGPoint anchorPoint; 
@property (assign) double anchorPointZ; 
@property (assign) CATransform3D transform; 
@property (assign) CGRect frame; 
@property (getter=isHidden) BOOL hidden; 
@property (getter=isDoubleSided) BOOL doubleSided; 
@property (getter=isGeometryFlipped) BOOL geometryFlipped; 
@property (readonly) CALayer * superlayer; 
@property (copy) NSArray * sublayers; 
@property (assign) CATransform3D sublayerTransform; 
@property (retain) CALayer * mask; 
@property (assign) BOOL masksToBounds; 
@property (retain) id contents; 
@property (assign) CGRect contentsRect; 
@property (copy) NSString * contentsGravity; 
@property (assign) double contentsScale; 
@property (assign) CGRect contentsCenter; 
@property (copy) NSString * contentsFormat; 
@property (copy) NSString * minificationFilter; 
@property (copy) NSString * magnificationFilter; 
@property (assign) float minificationFilterBias; 
@property (getter=isOpaque) BOOL opaque; 
@property (assign) BOOL needsDisplayOnBoundsChange; 
@property (assign) BOOL drawsAsynchronously; 
@property (assign) unsigned edgeAntialiasingMask; 
@property (assign) BOOL allowsEdgeAntialiasing; 
@property (assign) CGColorRef backgroundColor; 
@property (assign) double cornerRadius; 
@property (assign) unsigned long long maskedCorners; 
@property (copy) NSString * cornerCurve; 
@property (assign) double borderWidth; 
@property (assign) CGColorRef borderColor; 
@property (assign) float opacity; 
@property (assign) BOOL allowsGroupOpacity; 
@property (retain) id compositingFilter; 
@property (copy) NSArray * filters; 
@property (copy) NSArray * backgroundFilters; 
@property (assign) BOOL shouldRasterize; 
@property (assign) double rasterizationScale; 
@property (assign) CGColorRef shadowColor; 
@property (assign) float shadowOpacity; 
@property (assign) CGSize shadowOffset; 
@property (assign) double shadowRadius; 
@property (assign) const CGPathRef shadowPath; 
@property (copy) NSDictionary * actions; 
@property (copy) NSString * name; 
@property (__weak) id<CALayerDelegate> delegate; 
@property (copy) NSDictionary * style; 
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) BOOL autoreverses; 
@property (copy) NSString * fillMode; 
+(id)SCNJSExportProtocol;
+(id)_web_renderLayerWithContextID:(unsigned)arg1 ;
+(void)initialize;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)properties;
+(void)CAMLParserEndElement:(id)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(id)layer;
+(BOOL)needsDisplayForKey:(id)arg1 ;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(id)defaultActionForKey:(id)arg1 ;
+(double)cornerCurveExpansionFactor:(id)arg1 ;
+(BOOL)needsLayoutForKey:(id)arg1 ;
-(double)pkui_elapsedDurationForAnimation:(id)arg1 ;
-(double)pkui_remainingDurationForAnimation:(id)arg1 ;
-(id)pkui_additiveAnimationKeyPrefixForKeyPath:(id)arg1 ;
-(id)pkui_addAdditiveAnimation:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_pkui_nextAdditiveAnimationKeyWithKeyPath:(id)arg1 ;
-(id)pkui_addAdditiveAnimation:(id)arg1 ;
-(double)pkui_elapsedDurationForAnimationWithKey:(id)arg1 ;
-(double)pkui_remainingDurationForAnimationWithKey:(id)arg1 ;
-(BOOL)pkui_hasAdditiveAnimationForKeyPath:(id)arg1 ;
-(double)pkui_animateToOpacity:(double)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_gkDescriptionWithChildren:(int)arg1 ;
-(id)_gkRecursiveDescription;
-(CATransform3D)_gkParentSublayerTransform;
-(void)is_addBlurFilterIfNeeded;
-(id)_is_blurFilter;
-(void)_is_setBlurFilter:(id)arg1 ;
-(void)is_setBlurRadius:(double)arg1 ;
-(double)is_blurRadius;
-(void)_is_removeBlurFilterIfNeeded;
-(void)pxg_configureWithTexture:(id)arg1 geometry:(SCD_Struct_CA24*)arg2 info:(SCD_Struct_CA25*)arg3 style:(SCD_Struct_CA28*)arg4 textureInfo:({?=}*)arg5 resizableCapInsets:(SCD_Struct_CA26)arg6 ;
-(void)pxg_becomeReusable;
-(void)pxg_addToScrollViewController:(id)arg1 ;
-(void)pxg_prepareForReuse;
-(void)pxg_shiftPosition:(CGPoint)arg1 ;
-(BOOL)px_supportsAlphaBlending;
-(void)setDoubleBounds:(CGRect)arg1 ;
-(void)setDoublePosition:(CGPoint)arg1 ;
-(void)_mapkit_addAnimation:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(CGRect)doubleBounds;
-(CALayer *)_mapKit_mapLayer;
-(CGRect)convertDoubleRect:(CGRect)arg1 toLayer:(id)arg2 ;
-(CALayer *)currentLayer;
-(CGPoint)doublePosition;
-(CGPoint)convertDoublePoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(CGPoint)convertDoublePoint:(CGPoint)arg1 toLayer:(id)arg2 ;
-(CGRect)convertDoubleRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(BOOL)getPresentationValue:(id*)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(BOOL)arg4 ;
-(BOOL)getPresentationValue:(id*)arg1 forKey:(id)arg2 removeAnimation:(BOOL)arg3 ;
-(void)_mapkit_removeAnimationImmediatelyForKey:(id)arg1 ;
-(id)ak_addAdditiveAnimation:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_ak_nextAdditiveAnimationKeyWithKeyPath:(id)arg1 ;
-(id)ak_additiveAnimationKeyPrefixForKeyPath:(id)arg1 ;
-(id)ak_addAdditiveAnimation:(id)arg1 ;
-(BOOL)uiHasFilterWithName:(id)arg1 ;
-(void)setPerspectiveDistance:(double)arg1 ;
-(void)_ui_animateKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 usingSpringWithStiffnessFactor:(double)arg4 initialVelocity:(double)arg5 completion:(/*^block*/id)arg6 ;
-(void)_ui_removeAnimationForKeyPath:(id)arg1 ;
-(long long)compareTextEffectsOrdering:(id)arg1 ;
-(CALayer *)_labelLayerToClipDuringBoundsSizeAnimation;
-(void)_setLabelMasksToBoundsForAnimation:(BOOL)arg1 ;
-(id<_UIVectorTextLayoutRun>)_ui_layoutRun;
-(void)_ui_setLayoutRun:(id)arg1 ;
-(void)_web_setLayerTopLeftPosition:(CGPoint)arg1 ;
-(void)_web_setLayerBoundsOrigin:(CGPoint)arg1 ;
-(void)web_disableAllActions;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(BOOL)allowsWeakReference;
-(BOOL)retainWeakReference;
-(NSString *)name;
-(NSString *)debugDescription;
-(id)init;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<CALayerDelegate>)delegate;
-(void)setDelegate:(id<CALayerDelegate>)arg1 ;
-(void)setObservationInfo:(void*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(CGSize)size;
-(double)beginTime;
-(void)setBeginTime:(double)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)contents;
-(CATransform3D)transform;
-(id)valueForKeyPath:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void*)observationInfo;
-(id)context;
-(CGPoint)position;
-(double)duration;
-(NSDictionary *)style;
-(void)setStyle:(NSDictionary *)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(BOOL)isOpaque;
-(double)mass;
-(void)setMass:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(float)speed;
-(void)setSpeed:(float)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)display;
-(void)_display;
-(CGRect)bounds;
-(NSDictionary *)actions;
-(void)setActions:(NSDictionary *)arg1 ;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)isFrozen;
-(BOOL)isHidden;
-(void)setAllowsDisplayCompositing:(BOOL)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)reloadValueForKeyPath:(id)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_colorSpaceDidChange;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)animationForKey:(id)arg1 ;
-(id)_initWithReference:(id)arg1 ;
-(float)opacity;
-(BOOL)contentsAreFlipped;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(CAMeshTransform *)meshTransform;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)invalidateContents;
-(void)_dealloc;
-(BOOL)_canDisplayConcurrently;
-(BOOL)canDrawConcurrently;
-(double)contentsScale;
-(void)drawInContext:(CGContextRef)arg1 ;
-(BOOL)clearsContext;
-(BOOL)acceleratesDrawing;
-(BOOL)drawsAsynchronously;
-(void)setContentsChanged;
-(void)setNeedsDisplay;
-(CGSize)_preferredSize;
-(void)_prepareContext:(CGContextRef)arg1 ;
-(void)setNeedsLayout;
-(CALayer *)superlayer;
-(void)setSizeRequisition:(CGSize)arg1 ;
-(void)insertState:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)addState:(id)arg1 ;
-(void)removeState:(id)arg1 ;
-(id)stateWithName:(id)arg1 ;
-(id)dependentStatesOfState:(id)arg1 ;
-(id)stateTransitionFrom:(id)arg1 to:(id)arg2 ;
-(void)_scrollPoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(void)_scrollRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(CGRect)_visibleRectOfLayer:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toLayer:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollPoint:(CGPoint)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 ;
-(CGRect)visibleRect;
-(double)repeatDuration;
-(BOOL)autoreverses;
-(float)repeatCount;
-(double)timeOffset;
-(NSString *)fillMode;
-(void)setTimeOffset:(double)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)setRepeatDuration:(double)arg1 ;
-(void)setAutoreverses:(BOOL)arg1 ;
-(void)setFillMode:(NSString *)arg1 ;
-(CGRect)contentsRect;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(NSString *)magnificationFilter;
-(void)setMagnificationFilter:(NSString *)arg1 ;
-(NSString *)minificationFilter;
-(void)setMinificationFilter:(NSString *)arg1 ;
-(float)minificationFilterBias;
-(void)setMinificationFilterBias:(float)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(BOOL)_defersDidBecomeVisiblePostCommit;
-(void)_didCommitLayer:(Transaction*)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(id)CA_archivingValueForKey:(id)arg1 ;
-(double)zPosition;
-(void)setZPosition:(double)arg1 ;
-(void)setTransform:(CATransform3D)arg1 ;
-(CGAffineTransform)affineTransform;
-(void)setAffineTransform:(CGAffineTransform)arg1 ;
-(BOOL)isGeometryFlipped;
-(void)setGeometryFlipped:(BOOL)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toLayer:(id)arg2 ;
-(double)convertTime:(double)arg1 fromLayer:(id)arg2 ;
-(double)convertTime:(double)arg1 toLayer:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(unsigned)edgeAntialiasingMask;
-(void)setEdgeAntialiasingMask:(unsigned)arg1 ;
-(unsigned)disableUpdateMask;
-(void)setDisableUpdateMask:(unsigned)arg1 ;
-(NSString *)securityMode;
-(void)setSecurityMode:(NSString *)arg1 ;
-(NSString *)contentsFormat;
-(void)setContentsFormat:(NSString *)arg1 ;
-(NSString *)contentsGravity;
-(void)setContentsGravity:(NSString *)arg1 ;
-(NSString *)contentsScaling;
-(void)setContentsScaling:(NSString *)arg1 ;
-(NSArray *)sublayers;
-(void)setSublayers:(NSArray *)arg1 ;
-(CALayer *)mask;
-(void)setMask:(CALayer *)arg1 ;
-(id<CALayerDelegate>)unsafeUnretainedDelegate;
-(void)setUnsafeUnretainedDelegate:(id<CALayerDelegate>)arg1 ;
-(void)removeFromSuperlayer;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)addSublayer:(id)arg1 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
-(id)actionForKey:(id)arg1 ;
-(void)removeAllAnimations;
-(id)animationKeys;
-(BOOL)_scheduleAnimationTimer;
-(void)_cancelAnimationTimer;
-(id)presentationLayer;
-(id)modelLayer;
-(BOOL)needsDisplay;
-(void)displayIfNeeded;
-(void)renderInContext:(CGContextRef)arg1 ;
-(void)_renderBackgroundInContext:(CGContextRef)arg1 ;
-(void)_renderForegroundInContext:(CGContextRef)arg1 ;
-(void)_renderSublayersInContext:(CGContextRef)arg1 ;
-(void)_renderBorderInContext:(CGContextRef)arg1 ;
-(int)_overrideImageFormat;
-(CGColorSpaceRef)_retainColorSpace;
-(void)_contentsFormatDidChange:(id)arg1 ;
-(BOOL)needsLayout;
-(CGSize)preferredFrameSize;
-(void)layoutIfNeeded;
-(void)layoutSublayers;
-(unsigned long long)maskedCorners;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(NSString *)cornerCurve;
-(void)setCornerCurve:(NSString *)arg1 ;
-(BOOL)continuousCorners;
-(void)setContinuousCorners:(BOOL)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(double)anchorPointZ;
-(void)setAnchorPointZ:(double)arg1 ;
-(id)cornerContents;
-(void)setCornerContents:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)isDoubleSided;
-(void)setDoubleSided:(BOOL)arg1 ;
-(BOOL)needsDisplayOnBoundsChange;
-(void)setNeedsDisplayOnBoundsChange:(BOOL)arg1 ;
-(CATransform3D)sublayerTransform;
-(void)setSublayerTransform:(CATransform3D)arg1 ;
-(CGRect)contentsCenter;
-(void)setContentsCenter:(CGRect)arg1 ;
-(CGRect)cornerContentsCenter;
-(void)setCornerContentsCenter:(CGRect)arg1 ;
-(BOOL)cornerContentsMasksEdges;
-(void)setCornerContentsMasksEdges:(BOOL)arg1 ;
-(BOOL)contentsContainsSubtitles;
-(void)setContentsContainsSubtitles:(BOOL)arg1 ;
-(void)setOpacity:(float)arg1 ;
-(CGColorRef)backgroundColor;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(BOOL)masksToBounds;
-(void)setMasksToBounds:(BOOL)arg1 ;
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)backgroundFilters;
-(void)setBackgroundFilters:(NSArray *)arg1 ;
-(id)compositingFilter;
-(void)setCompositingFilter:(id)arg1 ;
-(CGColorRef)borderColor;
-(void)setBorderColor:(CGColorRef)arg1 ;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(CGColorRef)contentsMultiplyColor;
-(void)setContentsMultiplyColor:(CGColorRef)arg1 ;
-(NSString *)contentsSwizzle;
-(void)setContentsSwizzle:(NSString *)arg1 ;
-(float)shadowOpacity;
-(void)setShadowOpacity:(float)arg1 ;
-(CGColorRef)shadowColor;
-(void)setShadowColor:(CGColorRef)arg1 ;
-(CGSize)shadowOffset;
-(void)setShadowOffset:(CGSize)arg1 ;
-(double)shadowRadius;
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowPath:(const CGPathRef)arg1 ;
-(const CGPathRef)shadowPath;
-(BOOL)shouldRasterize;
-(void)setShouldRasterize:(BOOL)arg1 ;
-(BOOL)rasterizationPrefersDisplayCompositing;
-(void)setRasterizationPrefersDisplayCompositing:(BOOL)arg1 ;
-(double)rasterizationScale;
-(void)setRasterizationScale:(double)arg1 ;
-(void)setDrawsAsynchronously:(BOOL)arg1 ;
-(BOOL)allowsEdgeAntialiasing;
-(void)setAllowsEdgeAntialiasing:(BOOL)arg1 ;
-(BOOL)allowsGroupOpacity;
-(void)setAllowsGroupOpacity:(BOOL)arg1 ;
-(BOOL)needsLayoutOnGeometryChange;
-(id)ancestorSharedWithLayer:(id)arg1 ;
-(CGSize)sizeRequisition;
-(BOOL)drawsMipmapLevels;
-(BOOL)literalContentsCenter;
-(CGAffineTransform)contentsTransform;
-(BOOL)sortsSublayers;
-(BOOL)allowsHitTesting;
-(BOOL)ignoresHitTesting;
-(id)behaviors;
-(void)setBehaviors:(id)arg1 ;
-(BOOL)getRendererInfo:(CARenderRendererInfo*)arg1 size:(unsigned long long)arg2 ;
-(unsigned)_renderImageCopyFlags;
-(BOOL)isDescendantOf:(id)arg1 ;
-(double)motionBlurAmount;
-(CGSize)backgroundColorPhase;
-(BOOL)preloadsCache;
-(BOOL)createsCompositingGroup;
-(BOOL)allowsDisplayCompositing;
-(BOOL)wantsExtendedDynamicRangeContent;
-(BOOL)allowsGroupBlending;
-(BOOL)hitTestsContentsAlphaChannel;
-(BOOL)hitTestsAsOpaque;
-(BOOL)inheritsTiming;
-(BOOL)definesDisplayRegionOfInterest;
-(BOOL)invertsShadow;
-(BOOL)shadowPathIsBounds;
-(BOOL)hasBeenCommitted;
-(void)clearHasBeenCommitted;
-(void)setMeshTransform:(CAMeshTransform *)arg1 ;
-(void*)regionBeingDrawn;
-(BOOL)layoutIsActive;
-(void)layoutBelowIfNeeded;
-(id)layerBeingDrawn;
-(id)layerAtTime:(double)arg1 ;
-(void)addPresentationModifier:(id)arg1 ;
-(void)removePresentationModifier:(id)arg1 ;
-(NSArray *)presentationModifiers;
-(void)setPresentationModifiers:(NSArray *)arg1 ;
-(void)addLayoutDependent:(id)arg1 ;
-(void)removeLayoutDependent:(id)arg1 ;
-(NSArray *)layoutDependents;
-(void)setLayoutDependents:(NSArray *)arg1 ;
-(id)recursiveDescription;
-(BOOL)hidden;
-(BOOL)opaque;
-(BOOL)doubleSided;
-(BOOL)isFlipped;
-(void)setFlipped:(BOOL)arg1 ;
-(void)setAllowsHitTesting:(BOOL)arg1 ;
-(void)setHitTestsContentsAlphaChannel:(BOOL)arg1 ;
-(void)setHitTestsAsOpaque:(BOOL)arg1 ;
-(void)setLiteralContentsCenter:(BOOL)arg1 ;
-(void)setCanDrawConcurrently:(BOOL)arg1 ;
-(void)setClearsContext:(BOOL)arg1 ;
-(void)setFrozen:(BOOL)arg1 ;
-(void)setNeedsLayoutOnGeometryChange:(BOOL)arg1 ;
-(void)setSortsSublayers:(BOOL)arg1 ;
-(BOOL)flipsHorizontalAxis;
-(void)setFlipsHorizontalAxis:(BOOL)arg1 ;
-(void)setInvertsShadow:(BOOL)arg1 ;
-(void)setShadowPathIsBounds:(BOOL)arg1 ;
-(void)setContentsTransform:(CGAffineTransform)arg1 ;
-(BOOL)contentsAlignsToPixels;
-(void)setContentsAlignsToPixels:(BOOL)arg1 ;
-(BOOL)contentsDither;
-(void)setContentsDither:(BOOL)arg1 ;
-(BOOL)contentsOpaque;
-(void)setContentsOpaque:(BOOL)arg1 ;
-(void)setInheritsTiming:(BOOL)arg1 ;
-(void)setMotionBlurAmount:(double)arg1 ;
-(void)setPreloadsCache:(BOOL)arg1 ;
-(void)setCreatesCompositingGroup:(BOOL)arg1 ;
-(void)setWantsExtendedDynamicRangeContent:(BOOL)arg1 ;
-(void)setAllowsGroupBlending:(BOOL)arg1 ;
-(void)setBackgroundColorPhase:(CGSize)arg1 ;
-(void)setAcceleratesDrawing:(BOOL)arg1 ;
-(void)setDefinesDisplayRegionOfInterest:(BOOL)arg1 ;
@end

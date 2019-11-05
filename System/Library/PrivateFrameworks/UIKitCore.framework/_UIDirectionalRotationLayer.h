/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface _UIDirectionalRotationLayer : CALayer {

	CATransform3D _previousTransform;
	BOOL _counterTransformLayer;
	BOOL _inverseTransformLayer;

}

@property (assign,getter=isCounterTransformLayer,nonatomic) BOOL counterTransformLayer;              //@synthesize counterTransformLayer=_counterTransformLayer - In the implementation block
@property (assign,getter=isInverseTransformLayer,nonatomic) BOOL inverseTransformLayer;              //@synthesize inverseTransformLayer=_inverseTransformLayer - In the implementation block
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)setTransform:(CATransform3D)arg1 ;
-(BOOL)isCounterTransformLayer;
-(BOOL)isInverseTransformLayer;
-(void)setCounterTransformLayer:(BOOL)arg1 ;
-(void)setInverseTransformLayer:(BOOL)arg1 ;
@end

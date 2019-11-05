/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXZoomAnimationCoordinator.h>

@class NSArray;

@interface PXZoomAnimationGroupCoordinator : PXZoomAnimationCoordinator {

	NSArray* _zoomAnimationCoordinators;

}

@property (nonatomic,copy,readonly) NSArray * zoomAnimationCoordinators;              //@synthesize zoomAnimationCoordinators=_zoomAnimationCoordinators - In the implementation block
-(id)init;
-(void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2 ;
-(void)animateContentForEndPointType:(long long)arg1 inView:(NSObject*)arg2 withLayerType:(long long)arg3 zoomAnimationContext:(id)arg4 ;
-(id)initWithZoomAnimationCoordinators:(id)arg1 ;
-(NSArray *)zoomAnimationCoordinators;
@end

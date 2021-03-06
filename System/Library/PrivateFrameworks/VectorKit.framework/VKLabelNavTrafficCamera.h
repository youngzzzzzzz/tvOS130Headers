/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKLabelNavTrafficFeature.h>

@class VKTrafficCameraFeature;

@interface VKLabelNavTrafficCamera : VKLabelNavTrafficFeature {

	VKTrafficCameraFeature* _trafficCamera;

}

@property (nonatomic,readonly) VKTrafficCameraFeature * trafficCamera;              //@synthesize trafficCamera=_trafficCamera - In the implementation block
-(void)dealloc;
-(VKTrafficCameraFeature *)trafficCamera;
-(void)swapExternalFeature:(id)arg1 ;
-(shared_ptr<md::LabelIcon>*)createIcon:(NavContext*)arg1 ;
-(id)initWithTrafficCamera:(id)arg1 previousMercatorPoint:(const Mercator2<double>*)arg2 nextMercatorPoint:(const Mercator2<double>*)arg3 ;
@end


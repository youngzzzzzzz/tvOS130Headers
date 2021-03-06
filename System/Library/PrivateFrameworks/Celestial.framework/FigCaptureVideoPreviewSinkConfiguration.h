/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSinkConfiguration.h>

@class NSArray;

@interface FigCaptureVideoPreviewSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _depthDataDeliveryEnabled;
	BOOL _filterRenderingEnabled;
	NSArray* _filters;
	float _simulatedAperture;
	BOOL _primaryCaptureRectModificationEnabled;
	double _primaryCaptureRectAspectRatio;
	CGPoint _primaryCaptureRectCenter;

}

@property (assign,nonatomic) BOOL depthDataDeliveryEnabled;                           //@synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL filterRenderingEnabled;                             //@synthesize filterRenderingEnabled=_filterRenderingEnabled - In the implementation block
@property (nonatomic,copy) NSArray * filters;                                         //@synthesize filters=_filters - In the implementation block
@property (assign,nonatomic) float simulatedAperture;                                 //@synthesize simulatedAperture=_simulatedAperture - In the implementation block
@property (assign,nonatomic) BOOL primaryCaptureRectModificationEnabled;              //@synthesize primaryCaptureRectModificationEnabled=_primaryCaptureRectModificationEnabled - In the implementation block
@property (assign,nonatomic) double primaryCaptureRectAspectRatio;                    //@synthesize primaryCaptureRectAspectRatio=_primaryCaptureRectAspectRatio - In the implementation block
@property (assign,nonatomic) CGPoint primaryCaptureRectCenter;                        //@synthesize primaryCaptureRectCenter=_primaryCaptureRectCenter - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(float)simulatedAperture;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(void)setSimulatedAperture:(float)arg1 ;
-(BOOL)depthDataDeliveryEnabled;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)sinkType;
-(double)primaryCaptureRectAspectRatio;
-(CGPoint)primaryCaptureRectCenter;
-(BOOL)primaryCaptureRectModificationEnabled;
-(void)setPrimaryCaptureRectAspectRatio:(double)arg1 ;
-(void)setPrimaryCaptureRectCenter:(CGPoint)arg1 ;
-(BOOL)filterRenderingEnabled;
-(void)setPrimaryCaptureRectModificationEnabled:(BOOL)arg1 ;
-(void)setFilterRenderingEnabled:(BOOL)arg1 ;
@end


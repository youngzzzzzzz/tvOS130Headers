/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class VKVectorOverlayPolygonGroup, MKPolygon;

@interface MKPolygonRenderer : MKOverlayPathRenderer {

	VKVectorOverlayPolygonGroup* _vectorData;

}

@property (nonatomic,readonly) MKPolygon * polygon; 
+(Class)_mapkitLeafClass;
-(void)setFillColor:(id)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(BOOL)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(BOOL)_canProvideVectorGeometry;
-(void)_updateRenderColors;
-(void)fillPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(id)_vectorGeometry;
-(void)createPath;
-(id)initWithPolygon:(id)arg1 ;
-(MKPolygon *)polygon;
@end

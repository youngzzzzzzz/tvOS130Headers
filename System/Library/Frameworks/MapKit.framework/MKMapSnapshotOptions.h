/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/NSSecureCoding.h>
#import <MapKit/NSCopying.h>

@protocol VKRouteOverlay;
@class MKMapCamera, UITraitCollection, VKRouteContext, MKPointOfInterestFilter, NSArray;

@interface MKMapSnapshotOptions : NSObject <NSSecureCoding, NSCopying> {

	MKMapCamera* _camera;
	SCD_Struct_MK1 _mapRect;
	SCD_Struct_MK11 _region;
	unsigned long long _mapType;
	int _mode;
	BOOL _showsPointLabels;
	BOOL _showsBuildings;
	BOOL _showsNightMode;
	BOOL _rendersInBackground;
	BOOL _useSnapshotService;
	CGSize _size;
	UITraitCollection* _traitCollection;
	UIEdgeInsets _edgeInsets;
	unsigned long long _signpostId;
	VKRouteContext* _routeContext;
	id<VKRouteOverlay> _routeOverlay;
	BOOL _usingRect;
	BOOL _showsVenues;
	unsigned char _searchResultsType;
	MKPointOfInterestFilter* _pointOfInterestFilter;
	NSArray* _annotationViews;
	NSArray* _customFeatureAnnotations;

}

@property (nonatomic,readonly) BOOL usingRect;                                                                                                    //@synthesize usingRect=_usingRect - In the implementation block
@property (assign,setter=_setShowsNightMode:,getter=_showsNightMode,nonatomic) BOOL showsNightMode;                                               //@synthesize showsNightMode=_showsNightMode - In the implementation block
@property (assign,setter=_setShowsVenues:,getter=_showsVenues,nonatomic) BOOL showsVenues;                                                        //@synthesize showsVenues=_showsVenues - In the implementation block
@property (assign,setter=_setShowsPointLabels:,getter=_showsPointLabels,nonatomic) BOOL showsPointLabels;                                         //@synthesize showsPointLabels=_showsPointLabels - In the implementation block
@property (assign,setter=_setRendersInBackground:,getter=_rendersInBackground,nonatomic) BOOL rendersInBackground;                                //@synthesize rendersInBackground=_rendersInBackground - In the implementation block
@property (assign,setter=_setUseSnapshotService:,getter=_useSnapshotService,nonatomic) BOOL useSnapshotService;                                   //@synthesize useSnapshotService=_useSnapshotService - In the implementation block
@property (assign,setter=_setEdgeInsets:,getter=_edgeInsets,nonatomic) UIEdgeInsets edgeInsets;                                                   //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) unsigned long long signpostId;                                                                                       //@synthesize signpostId=_signpostId - In the implementation block
@property (setter=_setRouteContext:,getter=_routeContext,nonatomic,retain) VKRouteContext * routeContext;                                         //@synthesize routeContext=_routeContext - In the implementation block
@property (setter=_setRouteOverlay:,getter=_routeOverlay,nonatomic,retain) id<VKRouteOverlay> routeOverlay;                                       //@synthesize routeOverlay=_routeOverlay - In the implementation block
@property (nonatomic,copy) NSArray * annotationViews;                                                                                             //@synthesize annotationViews=_annotationViews - In the implementation block
@property (assign,setter=_setSearchResultsType:,getter=_searchResultsType,nonatomic) unsigned char searchResultsType;                             //@synthesize searchResultsType=_searchResultsType - In the implementation block
@property (setter=_setCustomFeatureAnnotations:,getter=_customFeatureAnnotations,nonatomic,copy) NSArray * customFeatureAnnotations;              //@synthesize customFeatureAnnotations=_customFeatureAnnotations - In the implementation block
@property (nonatomic,copy) MKMapCamera * camera;                                                                                                  //@synthesize camera=_camera - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK1 mapRect;                                                                                              //@synthesize mapRect=_mapRect - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK6 region;                                                                                               //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned long long mapType;                                                                                          //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,copy) MKPointOfInterestFilter * pointOfInterestFilter;                                                                       //@synthesize pointOfInterestFilter=_pointOfInterestFilter - In the implementation block
@property (assign,nonatomic) BOOL showsPointsOfInterest; 
@property (assign,nonatomic) BOOL showsBuildings;                                                                                                 //@synthesize showsBuildings=_showsBuildings - In the implementation block
@property (assign,nonatomic) CGSize size;                                                                                                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale; 
@property (nonatomic,copy) UITraitCollection * traitCollection;                                                                                   //@synthesize traitCollection=_traitCollection - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)size;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(SCD_Struct_MK6)region;
-(void)setMapRect:(SCD_Struct_MK1)arg1 ;
-(void)setMapType:(unsigned long long)arg1 ;
-(unsigned long long)mapType;
-(void)setCamera:(MKMapCamera *)arg1 ;
-(MKMapCamera *)camera;
-(void)setRegion:(SCD_Struct_MK6)arg1 ;
-(UIEdgeInsets)_edgeInsets;
-(UITraitCollection *)traitCollection;
-(BOOL)showsPointsOfInterest;
-(void)setShowsPointsOfInterest:(BOOL)arg1 ;
-(BOOL)showsBuildings;
-(void)setShowsBuildings:(BOOL)arg1 ;
-(id)_routeContext;
-(id)_routeOverlay;
-(void)setPointOfInterestFilter:(MKPointOfInterestFilter *)arg1 ;
-(MKPointOfInterestFilter *)pointOfInterestFilter;
-(BOOL)_showsNightMode;
-(void)_setShowsNightMode:(BOOL)arg1 ;
-(BOOL)_showsVenues;
-(void)_setShowsVenues:(BOOL)arg1 ;
-(void)_setEdgeInsets:(UIEdgeInsets)arg1 ;
-(SCD_Struct_MK1)mapRect;
-(BOOL)_showsPointLabels;
-(id)_customFeatureAnnotations;
-(unsigned char)_searchResultsType;
-(void)setAnnotationViews:(NSArray *)arg1 ;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(NSArray *)annotationViews;
-(void)_setUseSnapshotService:(BOOL)arg1 ;
-(void)_setRendersInBackground:(BOOL)arg1 ;
-(void)_setCustomFeatureAnnotations:(id)arg1 ;
-(void)_setSearchResultsType:(unsigned char)arg1 ;
-(BOOL)_useSnapshotService;
-(void)_updateShouldUseSnapshotService;
-(BOOL)usingRect;
-(void)_setShowsPointLabels:(BOOL)arg1 ;
-(BOOL)_rendersInBackground;
-(unsigned long long)signpostId;
-(void)setSignpostId:(unsigned long long)arg1 ;
-(void)_setRouteContext:(id)arg1 ;
-(void)_setRouteOverlay:(id)arg1 ;
@end


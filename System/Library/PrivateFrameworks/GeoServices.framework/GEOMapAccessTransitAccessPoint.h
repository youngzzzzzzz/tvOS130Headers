/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapTransitAccessPoint.h>

@protocol GEOMapTransitStation;
@class GEOMapAccess, NSString;

@interface GEOMapAccessTransitAccessPoint : NSObject <GEOMapTransitAccessPoint> {

	GEOMapAccess* _map;
	shared_ptr<geo::MapAccessPointFeature>* _accessPoint;
	id<GEOMapTransitStation> _station;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE33 coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE41 boundingRect; 
@property (nonatomic,readonly) SCD_Struct_GE33* polygonPoints; 
@property (nonatomic,readonly) long long polygonPointsCount; 
@property (nonatomic,readonly) unsigned long long stationID; 
@property (nonatomic,readonly) double groundRadius; 
@property (nonatomic,readonly) unsigned char entranceExitType; 
@property (nonatomic,readonly) unsigned short accessType; 
-(SCD_Struct_GE33)coordinate;
-(unsigned short)accessType;
-(unsigned long long)transitID;
-(id)findGeometryWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)distanceInMetersFrom:(SCD_Struct_GE33)arg1 ;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)internalName;
-(double)boundingRadius;
-(SCD_Struct_GE41)boundingRect;
-(SCD_Struct_GE33*)polygonPoints;
-(long long)polygonPointsCount;
-(id)findStops:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findStation:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)stationID;
-(double)groundRadius;
-(unsigned char)entranceExitType;
-(id)initWithMap:(id)arg1 accessPoint:(shared_ptr<geo::MapAccessPointFeature>*)arg2 ;
@end

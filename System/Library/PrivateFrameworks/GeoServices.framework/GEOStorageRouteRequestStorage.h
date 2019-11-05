/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOURLRouteHandle, NSMutableArray;

@interface GEOStorageRouteRequestStorage : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	GEOURLRouteHandle* _routeHandle;
	NSMutableArray* _waypoints;
	int _transportType;
	struct {
		unsigned has_transportType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_routeHandle : 1;
		unsigned read_waypoints : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_routeHandle : 1;
		unsigned wrote_waypoints : 1;
		unsigned wrote_transportType : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * waypoints; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (nonatomic,readonly) BOOL hasRouteHandle; 
@property (nonatomic,retain) GEOURLRouteHandle * routeHandle; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)waypointsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readRouteHandle;
-(GEOURLRouteHandle *)routeHandle;
-(void)setRouteHandle:(GEOURLRouteHandle *)arg1 ;
-(BOOL)hasRouteHandle;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(NSMutableArray *)waypoints;
-(void)_readWaypoints;
-(void)_addNoFlagsWaypoints:(id)arg1 ;
-(unsigned long long)waypointsCount;
-(void)clearWaypoints;
-(id)waypointsAtIndex:(unsigned long long)arg1 ;
-(void)addWaypoints:(id)arg1 ;
-(void)setWaypoints:(NSMutableArray *)arg1 ;
@end

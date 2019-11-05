/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, NSString, GEOComposedWaypoint;

@interface GEONavigationRouteSummary : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	NSString* _destinationName;
	GEOComposedWaypoint* _destination;
	GEOComposedWaypoint* _origin;
	double _travelTime;
	int _transportType;
	struct {
		unsigned has_travelTime : 1;
		unsigned has_transportType : 1;
		unsigned read_destinationName : 1;
		unsigned read_destination : 1;
		unsigned read_origin : 1;
		unsigned wrote_destinationName : 1;
		unsigned wrote_destination : 1;
		unsigned wrote_origin : 1;
		unsigned wrote_travelTime : 1;
		unsigned wrote_transportType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOComposedWaypoint * origin; 
@property (nonatomic,readonly) BOOL hasDestination; 
@property (nonatomic,retain) GEOComposedWaypoint * destination; 
@property (nonatomic,readonly) BOOL hasDestinationName; 
@property (nonatomic,retain) NSString * destinationName; 
@property (assign,nonatomic) BOOL hasTravelTime; 
@property (assign,nonatomic) double travelTime; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setDestination:(GEOComposedWaypoint *)arg1 ;
-(GEOComposedWaypoint *)destination;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(GEOComposedWaypoint *)origin;
-(void)setOrigin:(GEOComposedWaypoint *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(void)setRoute:(id)arg1 ;
-(double)travelTime;
-(void)setTravelTime:(double)arg1 ;
-(void)setHasTravelTime:(BOOL)arg1 ;
-(BOOL)hasTravelTime;
-(void)setDestinationName:(NSString *)arg1 ;
-(id)initWithRoute:(id)arg1 destinationName:(id)arg2 ;
-(void)_readDestinationName;
-(void)_readDestination;
-(void)_readOrigin;
-(NSString *)destinationName;
-(BOOL)hasDestinationName;
-(BOOL)hasDestination;
-(BOOL)hasOrigin;
@end

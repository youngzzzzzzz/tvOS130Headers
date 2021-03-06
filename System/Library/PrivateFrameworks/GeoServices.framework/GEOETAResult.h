/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPlaceSearchResponse, NSMutableArray;

@interface GEOETAResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	GEOPlaceSearchResponse* _placeSearchResponse;
	NSMutableArray* _sortedETAs;
	unsigned _distance;
	unsigned _historicTravelTime;
	unsigned _liveTravelTime;
	int _status;
	struct {
		unsigned has_distance : 1;
		unsigned has_historicTravelTime : 1;
		unsigned has_liveTravelTime : 1;
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
		unsigned read_placeSearchResponse : 1;
		unsigned read_sortedETAs : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_placeSearchResponse : 1;
		unsigned wrote_sortedETAs : 1;
		unsigned wrote_distance : 1;
		unsigned wrote_historicTravelTime : 1;
		unsigned wrote_liveTravelTime : 1;
		unsigned wrote_status : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasLiveTravelTime; 
@property (assign,nonatomic) unsigned liveTravelTime; 
@property (assign,nonatomic) BOOL hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime; 
@property (nonatomic,readonly) BOOL hasPlaceSearchResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * placeSearchResponse; 
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance; 
@property (nonatomic,retain) NSMutableArray * sortedETAs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)sortedETAType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)status;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(unsigned)distance;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(unsigned)historicTravelTime;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(void)setHasHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasHistoricTravelTime;
-(void)_readPlaceSearchResponse;
-(void)_readSortedETAs;
-(void)_addNoFlagsSortedETA:(id)arg1 ;
-(GEOPlaceSearchResponse *)placeSearchResponse;
-(BOOL)hasPlaceSearchResponse;
-(void)setPlaceSearchResponse:(GEOPlaceSearchResponse *)arg1 ;
-(unsigned long long)sortedETAsCount;
-(void)clearSortedETAs;
-(id)sortedETAAtIndex:(unsigned long long)arg1 ;
-(void)addSortedETA:(id)arg1 ;
-(NSMutableArray *)sortedETAs;
-(unsigned)liveTravelTime;
-(void)setLiveTravelTime:(unsigned)arg1 ;
-(void)setHasLiveTravelTime:(BOOL)arg1 ;
-(BOOL)hasLiveTravelTime;
-(void)setSortedETAs:(NSMutableArray *)arg1 ;
@end


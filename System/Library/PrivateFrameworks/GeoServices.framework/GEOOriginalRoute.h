/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSData;

@interface GEOOriginalRoute : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	NSData* _originalDirectionsResponseID;
	NSData* _routeHandle;
	int _originalRoutePurpose;
	unsigned _routeIndex;
	struct {
		unsigned has_originalRoutePurpose : 1;
		unsigned has_routeIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_originalDirectionsResponseID : 1;
		unsigned read_routeHandle : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_originalDirectionsResponseID : 1;
		unsigned wrote_routeHandle : 1;
		unsigned wrote_originalRoutePurpose : 1;
		unsigned wrote_routeIndex : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasOriginalRoutePurpose; 
@property (assign,nonatomic) int originalRoutePurpose; 
@property (nonatomic,readonly) BOOL hasRouteHandle; 
@property (nonatomic,retain) NSData * routeHandle; 
@property (nonatomic,readonly) BOOL hasOriginalDirectionsResponseID; 
@property (nonatomic,retain) NSData * originalDirectionsResponseID; 
@property (assign,nonatomic) BOOL hasRouteIndex; 
@property (assign,nonatomic) unsigned routeIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readRouteHandle;
-(void)_readOriginalDirectionsResponseID;
-(NSData *)routeHandle;
-(NSData *)originalDirectionsResponseID;
-(void)setRouteHandle:(NSData *)arg1 ;
-(void)setOriginalDirectionsResponseID:(NSData *)arg1 ;
-(int)originalRoutePurpose;
-(void)setOriginalRoutePurpose:(int)arg1 ;
-(void)setHasOriginalRoutePurpose:(BOOL)arg1 ;
-(BOOL)hasOriginalRoutePurpose;
-(id)originalRoutePurposeAsString:(int)arg1 ;
-(int)StringAsOriginalRoutePurpose:(id)arg1 ;
-(BOOL)hasRouteHandle;
-(BOOL)hasOriginalDirectionsResponseID;
-(unsigned)routeIndex;
-(void)setRouteIndex:(unsigned)arg1 ;
-(void)setHasRouteIndex:(BOOL)arg1 ;
-(BOOL)hasRouteIndex;
@end

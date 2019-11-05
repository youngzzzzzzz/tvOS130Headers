/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOLatLng, NSMutableArray;

@interface GEOPDPlaceCollectionLookupParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	GEOLatLng* _center;
	NSMutableArray* _collectionIds;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_center : 1;
		unsigned read_collectionIds : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_center : 1;
		unsigned wrote_collectionIds : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (nonatomic,retain) NSMutableArray * collectionIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)collectionIdType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOLatLng *)center;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readCenter;
-(BOOL)hasCenter;
-(void)_readCollectionIds;
-(void)_addNoFlagsCollectionId:(id)arg1 ;
-(unsigned long long)collectionIdsCount;
-(void)clearCollectionIds;
-(id)collectionIdAtIndex:(unsigned long long)arg1 ;
-(void)addCollectionId:(id)arg1 ;
-(NSMutableArray *)collectionIds;
-(void)setCollectionIds:(NSMutableArray *)arg1 ;
@end

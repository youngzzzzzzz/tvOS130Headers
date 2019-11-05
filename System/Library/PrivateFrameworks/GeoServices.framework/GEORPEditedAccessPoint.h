/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORoadAccessPoint, GEORPCorrectedString;

@interface GEORPEditedAccessPoint : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	GEORoadAccessPoint* _corrected;
	GEORPCorrectedString* _name;
	GEORoadAccessPoint* _original;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_corrected : 1;
		unsigned read_name : 1;
		unsigned read_original : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_corrected : 1;
		unsigned wrote_name : 1;
		unsigned wrote_original : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasOriginal; 
@property (nonatomic,retain) GEORoadAccessPoint * original; 
@property (nonatomic,readonly) BOOL hasCorrected; 
@property (nonatomic,retain) GEORoadAccessPoint * corrected; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) GEORPCorrectedString * name; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(GEORPCorrectedString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setName:(GEORPCorrectedString *)arg1 ;
-(id)dictionaryRepresentation;
-(GEORoadAccessPoint *)original;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readOriginal;
-(void)_readCorrected;
-(void)_readName;
-(GEORoadAccessPoint *)corrected;
-(void)setOriginal:(GEORoadAccessPoint *)arg1 ;
-(void)setCorrected:(GEORoadAccessPoint *)arg1 ;
-(BOOL)hasOriginal;
-(BOOL)hasCorrected;
@end

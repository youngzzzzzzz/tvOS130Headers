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

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDVendorIDLink : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _reservationTypes;
	NSString* _externalItemId;
	NSString* _vendorId;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_reservationTypes : 1;
		unsigned read_externalItemId : 1;
		unsigned read_vendorId : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_reservationTypes : 1;
		unsigned wrote_externalItemId : 1;
		unsigned wrote_vendorId : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasVendorId; 
@property (nonatomic,retain) NSString * vendorId; 
@property (nonatomic,readonly) BOOL hasExternalItemId; 
@property (nonatomic,retain) NSString * externalItemId; 
@property (nonatomic,readonly) unsigned long long reservationTypesCount; 
@property (nonatomic,readonly) int* reservationTypes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)vendorId;
-(NSString *)externalItemId;
-(unsigned long long)reservationTypesCount;
-(int)reservationTypeAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasExternalItemId;
-(BOOL)hasVendorId;
-(void)_readVendorId;
-(void)_readExternalItemId;
-(void)_readReservationTypes;
-(void)_addNoFlagsReservationType:(int)arg1 ;
-(void)setVendorId:(NSString *)arg1 ;
-(void)setExternalItemId:(NSString *)arg1 ;
-(void)clearReservationTypes;
-(void)addReservationType:(int)arg1 ;
-(int*)reservationTypes;
-(void)setReservationTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)reservationTypesAsString:(int)arg1 ;
-(int)StringAsReservationTypes:(id)arg1 ;
@end


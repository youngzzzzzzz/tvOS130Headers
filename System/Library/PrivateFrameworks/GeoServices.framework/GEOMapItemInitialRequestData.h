/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOPDPlaceRequestParameters;

@interface GEOMapItemInitialRequestData : PBCodable <NSCopying> {

	GEOPDPlaceRequestParameters* _placeRequestParameters;
	int _requestType;
	SCD_Struct_GE95 _flags;

}

@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType; 
@property (nonatomic,readonly) BOOL hasPlaceRequestParameters; 
@property (nonatomic,retain) GEOPDPlaceRequestParameters * placeRequestParameters; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)requestType;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasRequestType;
-(id)requestTypeAsString:(int)arg1 ;
-(int)StringAsRequestType:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(GEOPDPlaceRequestParameters *)placeRequestParameters;
-(void)clearSensitiveFields;
-(BOOL)hasPlaceRequestParameters;
-(void)setPlaceRequestParameters:(GEOPDPlaceRequestParameters *)arg1 ;
@end


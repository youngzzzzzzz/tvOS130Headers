/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOTouristInfo : PBCodable <NSCopying> {

	double _fetchTimestamp;
	BOOL _isTourist;
	SCD_Struct_GE34 _flags;

}

@property (assign,nonatomic) BOOL hasIsTourist; 
@property (assign,nonatomic) BOOL isTourist; 
@property (assign,nonatomic) BOOL hasFetchTimestamp; 
@property (assign,nonatomic) double fetchTimestamp; 
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
-(void)setIsTourist:(BOOL)arg1 ;
-(BOOL)hasIsTourist;
-(BOOL)isTourist;
-(void)setHasIsTourist:(BOOL)arg1 ;
-(void)setFetchTimestamp:(double)arg1 ;
-(double)fetchTimestamp;
-(void)setHasFetchTimestamp:(BOOL)arg1 ;
-(BOOL)hasFetchTimestamp;
@end

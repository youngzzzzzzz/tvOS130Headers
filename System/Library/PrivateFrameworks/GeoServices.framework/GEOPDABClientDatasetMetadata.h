/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDABClientDatasetMetadata : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _bucketId;
	unsigned _datasetId;
	SCD_Struct_GE34 _flags;

}

@property (assign,nonatomic) BOOL hasBucketId; 
@property (assign,nonatomic) unsigned bucketId; 
@property (assign,nonatomic) BOOL hasDatasetId; 
@property (assign,nonatomic) unsigned datasetId; 
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
-(unsigned)datasetId;
-(void)setDatasetId:(unsigned)arg1 ;
-(BOOL)hasDatasetId;
-(unsigned)bucketId;
-(void)setHasDatasetId:(BOOL)arg1 ;
-(void)setBucketId:(unsigned)arg1 ;
-(void)setHasBucketId:(BOOL)arg1 ;
-(BOOL)hasBucketId;
@end


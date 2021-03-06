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

@class PBUnknownFields, NSMutableArray;

@interface GEOPDTransitTripStopTime : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _departureSequences;

}

@property (nonatomic,retain) NSMutableArray * departureSequences; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)departureSequenceType;
+(id)transitTripStopTimeForPlaceData:(id)arg1 ;
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
-(unsigned long long)departureSequencesCount;
-(void)clearDepartureSequences;
-(id)departureSequenceAtIndex:(unsigned long long)arg1 ;
-(void)addDepartureSequence:(id)arg1 ;
-(NSMutableArray *)departureSequences;
-(void)setDepartureSequences:(NSMutableArray *)arg1 ;
@end


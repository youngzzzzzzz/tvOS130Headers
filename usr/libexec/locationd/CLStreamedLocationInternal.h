/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:46 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <locationd/NSCopying.h>

@interface CLStreamedLocationInternal : PBCodable <NSCopying> {

	double _rawCoordinateLatitude;
	double _rawCoordinateLongitude;
	SCD_Struct_AL89 _has;

}

@property (assign,nonatomic) BOOL hasRawCoordinateLatitude; 
@property (assign,nonatomic) double rawCoordinateLatitude;                //@synthesize rawCoordinateLatitude=_rawCoordinateLatitude - In the implementation block
@property (assign,nonatomic) BOOL hasRawCoordinateLongitude; 
@property (assign,nonatomic) double rawCoordinateLongitude;               //@synthesize rawCoordinateLongitude=_rawCoordinateLongitude - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeIntoDaemonLocation:(CLDaemonLocation*)arg1 ;
-(id)initWithDaemonLocation:(const CLDaemonLocation*)arg1 ;
-(void)setRawCoordinateLatitude:(double)arg1 ;
-(void)setHasRawCoordinateLatitude:(BOOL)arg1 ;
-(BOOL)hasRawCoordinateLatitude;
-(void)setRawCoordinateLongitude:(double)arg1 ;
-(void)setHasRawCoordinateLongitude:(BOOL)arg1 ;
-(BOOL)hasRawCoordinateLongitude;
-(double)rawCoordinateLatitude;
-(double)rawCoordinateLongitude;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEOCacheMissLoadError : PBCodable <NSCopying> {

	NSString* _errorDomain;
	unsigned _count;
	int _errorCode;
	SCD_Struct_GE34 _flags;

}

@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain; 
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode; 
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)count;
-(void)setCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)errorCode;
-(NSString *)errorDomain;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(BOOL)hasErrorDomain;
-(void)setErrorCode:(int)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(void)readAll:(BOOL)arg1 ;
@end

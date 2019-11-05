/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOSearchAttribution : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _attributionURLs;
	NSString* _sourceIdentifier;
	unsigned _sourceVersion;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_attributionURLs : 1;
		unsigned read_sourceIdentifier : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_attributionURLs : 1;
		unsigned wrote_sourceIdentifier : 1;
		unsigned wrote_sourceVersion : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * sourceIdentifier; 
@property (assign,nonatomic) unsigned sourceVersion; 
@property (nonatomic,retain) NSMutableArray * attributionURLs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)attributionURLsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sourceIdentifier;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned)sourceVersion;
-(void)setSourceVersion:(unsigned)arg1 ;
-(void)_readSourceIdentifier;
-(void)_readAttributionURLs;
-(void)_addNoFlagsAttributionURLs:(id)arg1 ;
-(NSMutableArray *)attributionURLs;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(unsigned long long)attributionURLsCount;
-(void)clearAttributionURLs;
-(id)attributionURLsAtIndex:(unsigned long long)arg1 ;
-(void)addAttributionURLs:(id)arg1 ;
-(void)setAttributionURLs:(NSMutableArray *)arg1 ;
@end

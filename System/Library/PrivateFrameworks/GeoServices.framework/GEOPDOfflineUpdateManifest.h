/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDOfflineUpdateManifest : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _datas;
	NSMutableArray* _patchs;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_datas : 1;
		unsigned read_patchs : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_datas : 1;
		unsigned wrote_patchs : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * patchs; 
@property (nonatomic,retain) NSMutableArray * datas; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)dataType;
+(Class)patchType;
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDatas:(NSMutableArray *)arg1 ;
-(void)addData:(id)arg1 ;
-(unsigned long long)datasCount;
-(void)clearDatas;
-(NSMutableArray *)datas;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readPatchs;
-(void)_addNoFlagsPatch:(id)arg1 ;
-(void)_readDatas;
-(void)_addNoFlagsData:(id)arg1 ;
-(unsigned long long)patchsCount;
-(void)clearPatchs;
-(id)patchAtIndex:(unsigned long long)arg1 ;
-(void)addPatch:(id)arg1 ;
-(NSMutableArray *)patchs;
-(void)setPatchs:(NSMutableArray *)arg1 ;
@end

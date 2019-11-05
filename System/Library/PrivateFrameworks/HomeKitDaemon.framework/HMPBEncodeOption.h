/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <HomeKitDaemon/NSCopying.h>

@interface HMPBEncodeOption : PBCodable <NSCopying> {

	BOOL _isSPI;
	BOOL _isXPC;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasIsXPC; 
@property (assign,nonatomic) BOOL isXPC;                 //@synthesize isXPC=_isXPC - In the implementation block
@property (assign,nonatomic) BOOL hasIsSPI; 
@property (assign,nonatomic) BOOL isSPI;                 //@synthesize isSPI=_isSPI - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIsXPC:(BOOL)arg1 ;
-(void)setHasIsXPC:(BOOL)arg1 ;
-(BOOL)hasIsXPC;
-(void)setIsSPI:(BOOL)arg1 ;
-(void)setHasIsSPI:(BOOL)arg1 ;
-(BOOL)hasIsSPI;
-(BOOL)isXPC;
-(BOOL)isSPI;
@end

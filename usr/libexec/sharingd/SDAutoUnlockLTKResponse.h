/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <sharingd/NSCopying.h>

@class NSData;

@interface SDAutoUnlockLTKResponse : PBCodable <NSCopying> {

	NSData* _ltkData;
	unsigned _version;
	BOOL _currentlySyncing;
	BOOL _needsUnlock;
	BOOL _viewState;
	SCD_Struct_SD13 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasLtkData; 
@property (nonatomic,retain) NSData * ltkData;                      //@synthesize ltkData=_ltkData - In the implementation block
@property (assign,nonatomic) BOOL hasViewState; 
@property (assign,nonatomic) BOOL viewState;                        //@synthesize viewState=_viewState - In the implementation block
@property (assign,nonatomic) BOOL hasNeedsUnlock; 
@property (assign,nonatomic) BOOL needsUnlock;                      //@synthesize needsUnlock=_needsUnlock - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentlySyncing; 
@property (assign,nonatomic) BOOL currentlySyncing;                 //@synthesize currentlySyncing=_currentlySyncing - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)viewState;
-(void)setViewState:(BOOL)arg1 ;
-(void)setLtkData:(NSData *)arg1 ;
-(BOOL)hasLtkData;
-(void)setHasViewState:(BOOL)arg1 ;
-(BOOL)hasViewState;
-(void)setNeedsUnlock:(BOOL)arg1 ;
-(void)setHasNeedsUnlock:(BOOL)arg1 ;
-(BOOL)hasNeedsUnlock;
-(void)setCurrentlySyncing:(BOOL)arg1 ;
-(void)setHasCurrentlySyncing:(BOOL)arg1 ;
-(BOOL)hasCurrentlySyncing;
-(NSData *)ltkData;
-(BOOL)needsUnlock;
-(BOOL)currentlySyncing;
@end


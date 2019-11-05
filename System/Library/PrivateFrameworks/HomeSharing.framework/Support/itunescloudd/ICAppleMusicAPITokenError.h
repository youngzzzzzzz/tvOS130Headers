/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/itunescloudd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <itunescloudd/NSCopying.h>

@class NSString;

@interface ICAppleMusicAPITokenError : PBCodable <NSCopying> {

	long long _code;
	NSString* _domain;
	NSString* _localizedDescription;
	int _phase;
	SCD_Struct_IC2 _has;

}

@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                            //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasCode; 
@property (assign,nonatomic) long long code;                               //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedDescription; 
@property (nonatomic,retain) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (assign,nonatomic) BOOL hasPhase; 
@property (assign,nonatomic) int phase;                                    //@synthesize phase=_phase - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)domain;
-(long long)code;
-(NSString *)localizedDescription;
-(void)setDomain:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCode:(long long)arg1 ;
-(void)setHasCode:(BOOL)arg1 ;
-(BOOL)hasCode;
-(BOOL)hasDomain;
-(BOOL)hasLocalizedDescription;
-(int)phase;
-(void)setPhase:(int)arg1 ;
-(id)phaseAsString:(int)arg1 ;
-(int)StringAsPhase:(id)arg1 ;
-(BOOL)hasPhase;
-(void)setHasPhase:(BOOL)arg1 ;
-(id)initWithNSError:(id)arg1 ;
@end

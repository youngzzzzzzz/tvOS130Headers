/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <iTunesCloud/NSCopying.h>

@class ICPBDGSFinishDelegationResponse, ICPBDGSStartDelegationResponse;

@interface ICPBDGSResponse : PBCodable <NSCopying> {

	ICPBDGSFinishDelegationResponse* _finishDelegationResponse;
	unsigned _requestUniqueID;
	ICPBDGSStartDelegationResponse* _startDelegationResponse;
	SCD_Struct_IC7 _has;

}

@property (assign,nonatomic) BOOL hasRequestUniqueID; 
@property (assign,nonatomic) unsigned requestUniqueID;                                                //@synthesize requestUniqueID=_requestUniqueID - In the implementation block
@property (nonatomic,readonly) BOOL hasStartDelegationResponse; 
@property (nonatomic,retain) ICPBDGSStartDelegationResponse * startDelegationResponse;                //@synthesize startDelegationResponse=_startDelegationResponse - In the implementation block
@property (nonatomic,readonly) BOOL hasFinishDelegationResponse; 
@property (nonatomic,retain) ICPBDGSFinishDelegationResponse * finishDelegationResponse;              //@synthesize finishDelegationResponse=_finishDelegationResponse - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRequestUniqueID:(unsigned)arg1 ;
-(unsigned)requestUniqueID;
-(void)setStartDelegationResponse:(ICPBDGSStartDelegationResponse *)arg1 ;
-(void)setFinishDelegationResponse:(ICPBDGSFinishDelegationResponse *)arg1 ;
-(void)setHasRequestUniqueID:(BOOL)arg1 ;
-(BOOL)hasRequestUniqueID;
-(BOOL)hasStartDelegationResponse;
-(BOOL)hasFinishDelegationResponse;
-(ICPBDGSStartDelegationResponse *)startDelegationResponse;
-(ICPBDGSFinishDelegationResponse *)finishDelegationResponse;
@end

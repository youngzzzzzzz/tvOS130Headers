/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSMutableArray;

@interface CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata : PBCodable <NSCopying> {

	NSMutableArray* _cryptoSessions;

}

@property (nonatomic,retain) NSMutableArray * cryptoSessions;              //@synthesize cryptoSessions=_cryptoSessions - In the implementation block
+(Class)cryptoSessionsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addCryptoSessions:(id)arg1 ;
-(unsigned long long)cryptoSessionsCount;
-(void)clearCryptoSessions;
-(id)cryptoSessionsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)cryptoSessions;
-(void)setCryptoSessions:(NSMutableArray *)arg1 ;
@end


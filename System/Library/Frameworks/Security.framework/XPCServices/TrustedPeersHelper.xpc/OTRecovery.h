/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Security.framework/XPCServices/TrustedPeersHelper.xpc/TrustedPeersHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeersHelper/TrustedPeersHelper-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <TrustedPeersHelper/NSCopying.h>

@class NSData, NSString;

@interface OTRecovery : PBCodable <NSCopying> {

	NSData* _encryptionSPKI;
	NSString* _peerID;
	NSData* _signingSPKI;

}

@property (nonatomic,readonly) BOOL hasPeerID; 
@property (nonatomic,retain) NSString * peerID;                     //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,readonly) BOOL hasSigningSPKI; 
@property (nonatomic,retain) NSData * signingSPKI;                  //@synthesize signingSPKI=_signingSPKI - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptionSPKI; 
@property (nonatomic,retain) NSData * encryptionSPKI;               //@synthesize encryptionSPKI=_encryptionSPKI - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)peerID;
-(BOOL)hasPeerID;
-(void)setPeerID:(NSString *)arg1 ;
-(NSData *)signingSPKI;
-(NSData *)encryptionSPKI;
-(BOOL)hasSigningSPKI;
-(BOOL)hasEncryptionSPKI;
-(void)setSigningSPKI:(NSData *)arg1 ;
-(void)setEncryptionSPKI:(NSData *)arg1 ;
@end


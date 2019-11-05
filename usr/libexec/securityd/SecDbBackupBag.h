/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/securityd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <securityd/NSCopying.h>

@class SecDbBackupBagIdentity, NSData;

@interface SecDbBackupBag : PBCodable <NSCopying> {

	SecDbBackupBagIdentity* _bagIdentity;
	NSData* _keybag;

}

@property (nonatomic,readonly) BOOL hasBagIdentity; 
@property (nonatomic,retain) SecDbBackupBagIdentity * bagIdentity;              //@synthesize bagIdentity=_bagIdentity - In the implementation block
@property (nonatomic,readonly) BOOL hasKeybag; 
@property (nonatomic,retain) NSData * keybag;                                   //@synthesize keybag=_keybag - In the implementation block
-(BOOL)hasBagIdentity;
-(BOOL)hasKeybag;
-(SecDbBackupBagIdentity *)bagIdentity;
-(void)setBagIdentity:(SecDbBackupBagIdentity *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)keybag;
-(void)setKeybag:(NSData *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MessageProtection/NSCopying.h>

@class NSString;

@interface NGMPBP256Key : PBCodable <NSCopying> {

	NSString* _keychainTag;
	int _keystore;

}

@property (nonatomic,retain) NSString * keychainTag;              //@synthesize keychainTag=_keychainTag - In the implementation block
@property (assign,nonatomic) int keystore;                        //@synthesize keystore=_keystore - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)keychainTag;
-(int)keystore;
-(void)setKeystore:(int)arg1 ;
-(void)setKeychainTag:(NSString *)arg1 ;
-(id)keystoreAsString:(int)arg1 ;
-(int)StringAsKeystore:(id)arg1 ;
@end


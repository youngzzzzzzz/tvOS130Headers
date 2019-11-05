/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <KeychainCircle/NSCopying.h>

@class NSData;

@interface KCInitialMessageData : PBCodable <NSCopying> {

	NSData* _prepareMessage;

}

@property (nonatomic,readonly) BOOL hasPrepareMessage; 
@property (nonatomic,retain) NSData * prepareMessage;               //@synthesize prepareMessage=_prepareMessage - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasPrepareMessage;
-(NSData *)prepareMessage;
-(void)setPrepareMessage:(NSData *)arg1 ;
@end

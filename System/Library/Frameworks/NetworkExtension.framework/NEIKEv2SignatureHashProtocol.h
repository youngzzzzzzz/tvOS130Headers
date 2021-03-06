/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NSCopying.h>

@interface NEIKEv2SignatureHashProtocol : NSObject <NSCopying> {

	unsigned long long _hashType;

}

@property (assign,nonatomic) unsigned long long hashType;              //@synthesize hashType=_hashType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)setHashType:(unsigned long long)arg1 ;
-(unsigned long long)hashType;
-(id)initWithHashType:(unsigned long long)arg1 ;
@end


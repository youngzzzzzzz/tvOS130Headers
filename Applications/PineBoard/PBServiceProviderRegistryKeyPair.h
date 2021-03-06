/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:28 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PineBoard-Structs.h>
#import <PineBoard/NSCopying.h>

@class NSString;

@interface PBServiceProviderRegistryKeyPair : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _providerType;

}

@property (copy) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * providerType;              //@synthesize providerType=_providerType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setProviderType:(NSString *)arg1 ;
-(NSString *)providerType;
@end


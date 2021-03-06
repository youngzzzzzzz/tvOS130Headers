/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class NSString, IDSURI;

@interface IDSKeyTransparencyIndex : NSObject {

	NSString* _serviceIdentifier;
	NSString* _accountIdentifier;
	IDSURI* _URI;

}

@property (nonatomic,readonly) NSString * serviceIdentifier;              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) IDSURI * URI;                              //@synthesize URI=_URI - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)serviceIdentifier;
-(IDSURI *)URI;
-(NSString *)accountIdentifier;
-(id)initWithServiceIdentifier:(id)arg1 accountIdentifier:(id)arg2 URI:(id)arg3 ;
-(BOOL)isEqualToKeyTransparencyIndex:(id)arg1 ;
@end


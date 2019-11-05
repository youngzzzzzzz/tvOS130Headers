/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:50 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SecCDKeychainAccessControlEntity : NSObject {

	long long _entityType;
	NSString* _stringRepresentation;

}

@property (nonatomic,readonly) long long entityType;                         //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) NSString * stringRepresentation;              //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
+(id)accessControlEntityWithType:(long long)arg1 stringRepresentation:(id)arg2 ;
-(id)initWithManagedEntity:(id)arg1 ;
-(id)_initWithEntityType:(long long)arg1 stringRepresentation:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)stringRepresentation;
-(long long)entityType;
@end

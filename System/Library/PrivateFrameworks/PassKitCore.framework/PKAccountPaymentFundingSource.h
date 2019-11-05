/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/NSSecureCoding.h>

@class NSString, PKAccountPaymentFundingDetails;

@interface PKAccountPaymentFundingSource : NSObject <NSSecureCoding> {

	NSString* _identifier;
	long long _type;
	NSString* _accountSuffix;
	PKAccountPaymentFundingDetails* _fundingDetails;

}

@property (nonatomic,copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * accountSuffix;                                     //@synthesize accountSuffix=_accountSuffix - In the implementation block
@property (nonatomic,copy) PKAccountPaymentFundingDetails * fundingDetails;              //@synthesize fundingDetails=_fundingDetails - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)fundingDetailsClassForFundingSourceType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithType:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)jsonDictionaryRepresentation;
-(id)jsonString;
-(id)bankAccountRepresentation;
-(void)setAccountSuffix:(NSString *)arg1 ;
-(PKAccountPaymentFundingDetails *)fundingDetails;
-(id)hashComponentWithCertificatesResponse:(id)arg1 ;
-(id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1 ;
-(NSString *)accountSuffix;
-(id)displayDescription;
-(void)setFundingDetails:(PKAccountPaymentFundingDetails *)arg1 ;
@end

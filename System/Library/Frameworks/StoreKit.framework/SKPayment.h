/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <StoreKit/NSCopying.h>
#import <StoreKit/NSMutableCopying.h>

@class NSString, NSDictionary, NSData, SKPaymentDiscount;

@interface SKPayment : NSObject <NSCopying, NSMutableCopying> {

	id _internal;

}

@property (nonatomic,copy,readonly) NSString * partnerIdentifier; 
@property (nonatomic,copy,readonly) NSString * partnerTransactionIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * requestParameters; 
@property (nonatomic,readonly) BOOL isStoreOriginated; 
@property (nonatomic,copy,readonly) NSString * productIdentifier; 
@property (nonatomic,copy,readonly) NSData * requestData; 
@property (nonatomic,readonly) long long quantity; 
@property (nonatomic,copy,readonly) NSString * applicationUsername; 
@property (nonatomic,readonly) BOOL simulatesAskToBuyInSandbox; 
@property (nonatomic,copy,readonly) SKPaymentDiscount * paymentDiscount; 
+(id)paymentWithProduct:(id)arg1 ;
+(id)paymentFromPurchaseIntentWithProduct:(id)arg1 ;
+(id)paymentWithProductIdentifier:(id)arg1 ;
-(OpaqueJSValueRef)jsCopyObjectWithContext:(OpaqueJSContextRef)arg1 withException:(const OpaqueJSValue*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSData *)requestData;
-(long long)quantity;
-(NSDictionary *)requestParameters;
-(NSString *)productIdentifier;
-(NSString *)partnerIdentifier;
-(NSString *)applicationUsername;
-(BOOL)simulatesAskToBuyInSandbox;
-(SKPaymentDiscount *)paymentDiscount;
-(BOOL)isStoreOriginated;
-(NSString *)partnerTransactionIdentifier;
@end

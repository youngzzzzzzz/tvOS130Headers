/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSArray;

@interface PKInAppPaymentEntitlement : NSObject {

	NSArray* _merchantIdentifiers;
	BOOL _ignoreMerchantIdentifiers;

}

@property (nonatomic,readonly) BOOL ignoreMerchantIdentifiers;              //@synthesize ignoreMerchantIdentifiers=_ignoreMerchantIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantIdentifiers; 
-(id)initWithToken:(SCD_Struct_PK6)arg1 ;
-(void)_probeEntitlementsWithToken:(SCD_Struct_PK6)arg1 ;
-(BOOL)hasMerchantIdentifier:(id)arg1 ;
-(BOOL)hasMerchantIdentifiers;
-(BOOL)ignoreMerchantIdentifiers;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKActivityEvent.h>

@class PKPaymentTransaction;

@interface PKActivityEventTransaction : PKActivityEvent {

	PKPaymentTransaction* _transaction;

}

@property (nonatomic,readonly) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(unsigned long long)hash;
-(PKPaymentTransaction *)transaction;
-(id)eventType;
-(id)initWithTransaction:(id)arg1 unread:(BOOL)arg2 ;
-(BOOL)isEqualToActivityEvent:(id)arg1 ;
@end


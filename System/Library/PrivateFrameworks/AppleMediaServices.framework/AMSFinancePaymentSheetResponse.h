/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class AMSPaymentSheetRequest, AMSFinanceAuthenticateResponse;

@interface AMSFinancePaymentSheetResponse : NSObject {

	AMSPaymentSheetRequest* _paymentSheetRequest;
	AMSFinanceAuthenticateResponse* _authenticateResponse;

}

@property (nonatomic,readonly) AMSPaymentSheetRequest * paymentSheetRequest;                       //@synthesize paymentSheetRequest=_paymentSheetRequest - In the implementation block
@property (nonatomic,readonly) AMSFinanceAuthenticateResponse * authenticateResponse;              //@synthesize authenticateResponse=_authenticateResponse - In the implementation block
+(id)_greyAttributedStringForAttributedString:(id)arg1 range:(NSRange)arg2 ;
+(id)_createRequestFromDictionary:(id)arg1 confirmationOnly:(BOOL)arg2 authenticateResponse:(id)arg3 taskInfo:(id)arg4 ;
+(long long)_payeeForRequestorValue:(id)arg1 ;
+(long long)_payeeInferredFromEnumeratedTitle:(id)arg1 ;
+(long long)_salableIconForString:(id)arg1 ;
+(long long)_confirmationTitleForString:(id)arg1 ;
+(id)_attributedStringForSalableInfoStringArray:(id)arg1 account:(id)arg2 shouldUppercase:(BOOL)arg3 ;
+(id)_attributedStringForStringArray:(id)arg1 useGrey:(BOOL)arg2 account:(id)arg3 shouldUppercase:(BOOL)arg4 ;
-(AMSFinanceAuthenticateResponse *)authenticateResponse;
-(id)performWithTaskInfo:(id)arg1 ;
-(AMSPaymentSheetRequest *)paymentSheetRequest;
-(id)initWithDialogDictionary:(id)arg1 confirmationOnly:(BOOL)arg2 taskInfo:(id)arg3 ;
@end


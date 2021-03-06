/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:29 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <PineBoard/PBTextEntryViewControllerDelegate.h>

@class NSString, NSDictionary;

@interface PBCarMVerificationOperation : ISOperation <PBTextEntryViewControllerDelegate> {

	unsigned long long _submitIndex;
	unsigned long long _sendCodeIndex;
	/*^block*/id _codeHandler;
	/*^block*/id _sendNewCodeBlock;
	NSString* _customerTitle;
	NSString* _customerMessage;
	NSDictionary* _failureClientInfo;

}

@property (nonatomic,copy) id codeHandler;                                  //@synthesize codeHandler=_codeHandler - In the implementation block
@property (nonatomic,copy) id sendNewCodeBlock;                             //@synthesize sendNewCodeBlock=_sendNewCodeBlock - In the implementation block
@property (nonatomic,retain) NSString * customerTitle;                      //@synthesize customerTitle=_customerTitle - In the implementation block
@property (nonatomic,retain) NSString * customerMessage;                    //@synthesize customerMessage=_customerMessage - In the implementation block
@property (nonatomic,retain) NSDictionary * failureClientInfo;              //@synthesize failureClientInfo=_failureClientInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)run;
-(void)setCustomerTitle:(NSString *)arg1 ;
-(void)setCustomerMessage:(NSString *)arg1 ;
-(void)setFailureClientInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)failureClientInfo;
-(id)_copySMSCodeFromUser;
-(BOOL)_verifySMSCode:(id)arg1 error:(id*)arg2 ;
-(NSString *)customerTitle;
-(NSString *)customerMessage;
-(BOOL)_sendNewCodeShowingDialogs:(BOOL)arg1 error:(id*)arg2 ;
-(void)presentCodeEntryAlertWithTitle:(id)arg1 message:(id)arg2 newCodeLabel:(id)arg3 submitLabel:(id)arg4 newCodeRequestHandler:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(id)_copySendCodeResponseWithError:(id*)arg1 ;
-(void)presentFailureAlertWithTitle:(id)arg1 message:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_copyVerifyResponseWithCode:(id)arg1 error:(id*)arg2 ;
-(void)setCodeHandler:(id)arg1 ;
-(void)setSendNewCodeBlock:(id)arg1 ;
-(id)sendNewCodeBlock;
-(id)codeHandler;
-(void)textEntry:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2 ;
-(void)textEntryDidCancel:(id)arg1 ;
@end


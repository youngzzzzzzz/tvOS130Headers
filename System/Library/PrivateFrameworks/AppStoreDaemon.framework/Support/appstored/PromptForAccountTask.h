/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/Task.h>

@class NSString, AMSAuthenticateResult, XPCRequestToken;

@interface PromptForAccountTask : Task {

	NSString* _username;
	AMSAuthenticateResult* _authenticateResult;
	NSString* _logKey;
	XPCRequestToken* _requestToken;

}

@property (readonly) AMSAuthenticateResult * authenticateResult;              //@synthesize authenticateResult=_authenticateResult - In the implementation block
@property (readonly) NSString * logKey;                                       //@synthesize logKey=_logKey - In the implementation block
@property (retain) XPCRequestToken * requestToken;                            //@synthesize requestToken=_requestToken - In the implementation block
-(void)main;
-(XPCRequestToken *)requestToken;
-(void)setRequestToken:(XPCRequestToken *)arg1 ;
-(NSString *)logKey;
-(id)initWithUsername:(id)arg1 logKey:(id)arg2 ;
-(id)_accountFromSystemAlertDialogWithOptions:(id)arg1 error:(id*)arg2 ;
-(AMSAuthenticateResult *)authenticateResult;
@end


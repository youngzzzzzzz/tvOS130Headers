/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/SpringBoardAlertProxyDelegate.h>

@protocol OS_dispatch_semaphore;
@class SSAccount, SpringBoardAlertProxy, NSObject, SSTermsAndConditions, NSString;

@interface AcceptTermsAndConditionsOperation : ISOperation <SpringBoardAlertProxyDelegate> {

	SSAccount* _account;
	SpringBoardAlertProxy* _alertProxy;
	NSObject*<OS_dispatch_semaphore> _alertSemaphore;
	SSTermsAndConditions* _conditions;
	BOOL _result;
	BOOL _userAccepted;

}

@property (getter=isUserAccepted,nonatomic,readonly) BOOL userAccepted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)run;
-(id)initWithAccount:(id)arg1 ;
-(BOOL)isUserAccepted;
-(void)setUserAccepted:(BOOL)arg1 ;
-(void)_checkTermsAndConditionsWithBlock:(/*^block*/id)arg1 ;
-(void)_presentTermsAndConditions;
-(void)_dismissTermsAndConditionsWithAcceptance:(BOOL)arg1 ;
-(id)_newTermsAcceptSrvOperation;
-(id)_newTermsCheckSrvOperation;
-(void)_acceptTermsAndConditionsWithBlock:(/*^block*/id)arg1 ;
-(void)alertProxy:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)alertProxyDidCancel:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentPreference.h>

@class PKPaymentPass, PKCurrencyAmount;

@interface PKPaymentPreferencePeerPaymentAccountPaymentSwitch : PKPaymentPreference {

	BOOL _on;
	BOOL _enabled;
	PKPaymentPass* _peerPaymentPass;
	PKCurrencyAmount* _peerPaymentBalance;

}

@property (nonatomic,retain) PKPaymentPass * peerPaymentPass;                    //@synthesize peerPaymentPass=_peerPaymentPass - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * peerPaymentBalance;              //@synthesize peerPaymentBalance=_peerPaymentBalance - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on;                                //@synthesize on=_on - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isOn;
-(void)setOn:(BOOL)arg1 ;
-(PKCurrencyAmount *)peerPaymentBalance;
-(PKPaymentPass *)peerPaymentPass;
-(void)setPeerPaymentPass:(PKPaymentPass *)arg1 ;
-(void)setPeerPaymentBalance:(PKCurrencyAmount *)arg1 ;
@end

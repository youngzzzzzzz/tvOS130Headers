/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/ISDialogOperationDelegate.h>

@class SSAuthenticationContext, ISBiometricStore, ISDialogButton, NSDictionary, NSArray, SSRedeemCodesResponse, NSString;

@interface RedeemCodesOperation : ISOperation <ISDialogOperationDelegate> {

	SSAuthenticationContext* _authenticationContext;
	ISBiometricStore* _biometricStore;
	BOOL _cameraRecognized;
	ISDialogButton* _dialogButton;
	BOOL _headless;
	NSDictionary* _installedExternalVersionByiTunesIdentifier;
	NSArray* _redeemCodes;
	NSDictionary* _redeemMetadataByCode;
	SSRedeemCodesResponse* _redeemResponse;
	NSString* _userAgent;
	NSString* _logCorrelationKey;
	NSDictionary* _params;

}

@property (readonly) NSArray * redeemCodes; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (assign) BOOL headless;                                              //@synthesize headless=_headless - In the implementation block
@property (assign) BOOL cameraRecognized;                                      //@synthesize cameraRecognized=_cameraRecognized - In the implementation block
@property (copy) NSString * userAgent; 
@property (nonatomic,retain) NSString * logCorrelationKey;                     //@synthesize logCorrelationKey=_logCorrelationKey - In the implementation block
@property (nonatomic,retain) NSDictionary * params;                            //@synthesize params=_params - In the implementation block
@property (readonly) SSRedeemCodesResponse * redeemResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)run;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(NSDictionary *)params;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(NSString *)logCorrelationKey;
-(void)setLogCorrelationKey:(NSString *)arg1 ;
-(NSArray *)redeemCodes;
-(id)initWithRedeemCodes:(id)arg1 ;
-(BOOL)headless;
-(void)setHeadless:(BOOL)arg1 ;
-(BOOL)cameraRecognized;
-(void)setCameraRecognized:(BOOL)arg1 ;
-(void)setParams:(NSDictionary *)arg1 ;
-(void)operation:(id)arg1 selectedButton:(id)arg2 ;
-(SSRedeemCodesResponse *)redeemResponse;
-(void)_runHeadless;
-(void)_runNonHeadless;
-(BOOL)_canPerformExtendedBiometricActions;
-(void)_postNotificationWithResponse:(id)arg1 ;
-(BOOL)_useLegacyRedeem;
-(BOOL)_fetchRedeemCodeMetadataWithError:(id*)arg1 ;
-(id)_newURLRequestPropertiesForCode:(id)arg1 ;
-(BOOL)_processDictionary:(id)arg1 dialog:(id*)arg2 error:(id*)arg3 ;
-(id)_authenticateAppleAccount:(id)arg1 withTitle:(id)arg2 error:(id*)arg3 ;
-(id)_newURLRequestPropertiesForServiceActionButton:(id)arg1 ;
-(id)_installedExternalVersionForRedeemCodeMetadata:(id)arg1 ;
-(BOOL)_didUserCancelWithError:(id)arg1 ;
@end


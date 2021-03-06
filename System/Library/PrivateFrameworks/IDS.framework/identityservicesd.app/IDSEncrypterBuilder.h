/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSPublicKeyStorage, IDSPeerIDManager, IDSDAccountController, IDSRegistrationKeyManager, IDSRateLimiter, IDSOTRController;

@interface IDSEncrypterBuilder : NSObject {

	BOOL _avoidMainQueue;
	BOOL _forceLegacy;
	IDSPublicKeyStorage* _publicKeyStorage;
	IDSPeerIDManager* _peerIDManager;
	IDSDAccountController* _accountController;
	IDSRegistrationKeyManager* _registrationKeyManager;
	IDSRateLimiter* _rateLimiter;
	IDSOTRController* _OTRController;

}

@property (nonatomic,retain) IDSPublicKeyStorage * publicKeyStorage;                          //@synthesize publicKeyStorage=_publicKeyStorage - In the implementation block
@property (nonatomic,retain) IDSPeerIDManager * peerIDManager;                                //@synthesize peerIDManager=_peerIDManager - In the implementation block
@property (nonatomic,retain) IDSDAccountController * accountController;                       //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,retain) IDSRegistrationKeyManager * registrationKeyManager;              //@synthesize registrationKeyManager=_registrationKeyManager - In the implementation block
@property (nonatomic,retain) IDSRateLimiter * rateLimiter;                                    //@synthesize rateLimiter=_rateLimiter - In the implementation block
@property (nonatomic,retain) IDSOTRController * OTRController;                                //@synthesize OTRController=_OTRController - In the implementation block
@property (assign,nonatomic) BOOL avoidMainQueue;                                             //@synthesize avoidMainQueue=_avoidMainQueue - In the implementation block
@property (assign,nonatomic) BOOL forceLegacy;                                                //@synthesize forceLegacy=_forceLegacy - In the implementation block
+(id)builderWithPublicKeyStorage:(id)arg1 peerIDManager:(id)arg2 accountController:(id)arg3 registrationKeyManager:(id)arg4 rateLimiter:(id)arg5 OTRController:(id)arg6 avoidMainQueue:(BOOL)arg7 forceLegacy:(BOOL)arg8 ;
-(IDSRateLimiter *)rateLimiter;
-(void)setRateLimiter:(IDSRateLimiter *)arg1 ;
-(IDSOTRController *)OTRController;
-(void)setAccountController:(IDSDAccountController *)arg1 ;
-(IDSDAccountController *)accountController;
-(IDSPeerIDManager *)peerIDManager;
-(IDSRegistrationKeyManager *)registrationKeyManager;
-(BOOL)avoidMainQueue;
-(BOOL)forceLegacy;
-(void)setForceLegacy:(BOOL)arg1 ;
-(IDSPublicKeyStorage *)publicKeyStorage;
-(id)initWithPublicKeyStorage:(id)arg1 peerIDManager:(id)arg2 accountController:(id)arg3 registrationKeyManager:(id)arg4 rateLimiter:(id)arg5 OTRController:(id)arg6 avoidMainQueue:(BOOL)arg7 forceLegacy:(BOOL)arg8 ;
-(id)_createHashingDeviceIdentityEncrypter;
-(id)encrypterWithLocalURI:(id)arg1 remoteURI:(id)arg2 pushToken:(id)arg3 service:(id)arg4 cert:(id)arg5 ;
-(id)encrypterWithDeviceID:(id)arg1 ;
-(id)encrypterWithEndpoint:(id)arg1 ;
-(id)encrypterWithOTRToken:(id)arg1 ;
-(void)setPublicKeyStorage:(IDSPublicKeyStorage *)arg1 ;
-(void)setPeerIDManager:(IDSPeerIDManager *)arg1 ;
-(void)setRegistrationKeyManager:(IDSRegistrationKeyManager *)arg1 ;
-(void)setOTRController:(IDSOTRController *)arg1 ;
-(void)setAvoidMainQueue:(BOOL)arg1 ;
@end


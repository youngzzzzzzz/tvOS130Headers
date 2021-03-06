/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/IDSDAccountControllerDelegate.h>
#import <identityservicesd/IDSRegistrationControllerListener.h>
#import <identityservicesd/IDSDeviceCertificationRepairDelegate.h>
#import <identityservicesd/IDSCTAdapterListener.h>

@protocol OS_dispatch_queue;
@class IDSUserStore, NSObject, IDSSystemAccountAdapter, IDSCTAdapter, IDSDAccountController, IDSDServiceController, IDSRegistrationController, IDSSIMPhoneUserSynchronizer, IDSSystemAccountUserSynchronizer, IDSUserAccountSynchronizer, IDSHeartbeatCenter, IDSRestrictions, IDSAccountSync, IDSAccountRepair, IDSDeviceCertificationRepair, IDSSIMResponder, NSString;

@interface IDSRegistrationConductor : NSObject <IDSDAccountControllerDelegate, IDSRegistrationControllerListener, IDSDeviceCertificationRepairDelegate, IDSCTAdapterListener> {

	IDSUserStore* _userStore;
	NSObject*<OS_dispatch_queue> _registrationQueue;
	IDSSystemAccountAdapter* _systemAccountAdapter;
	IDSCTAdapter* _CTAdapter;
	IDSDAccountController* _accountController;
	IDSDServiceController* _serviceController;
	IDSRegistrationController* _registrationController;
	IDSSIMPhoneUserSynchronizer* _SIMPhoneUserSynchronizer;
	IDSSystemAccountUserSynchronizer* _systemAccountUserSynchronizer;
	IDSUserAccountSynchronizer* _userAccountSynchronizer;
	IDSHeartbeatCenter* _heartbeatCenter;
	IDSRestrictions* _restrictions;
	IDSAccountSync* _accountSync;
	IDSAccountRepair* _accountRepair;
	IDSDeviceCertificationRepair* _deviceCertificationRepair;
	IDSSIMResponder* _SIMResponder;

}

@property (assign,nonatomic) BOOL shouldSupressRepairLogic; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> registrationQueue;                                                     //@synthesize registrationQueue=_registrationQueue - In the implementation block
@property (nonatomic,retain) IDSSystemAccountAdapter * systemAccountAdapter;                                                     //@synthesize systemAccountAdapter=_systemAccountAdapter - In the implementation block
@property (nonatomic,retain) IDSCTAdapter * CTAdapter;                                                                           //@synthesize CTAdapter=_CTAdapter - In the implementation block
@property (nonatomic,retain) IDSDAccountController * accountController;                                                          //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,retain) IDSDServiceController * serviceController;                                                          //@synthesize serviceController=_serviceController - In the implementation block
@property (nonatomic,retain) IDSRegistrationController * registrationController;                                                 //@synthesize registrationController=_registrationController - In the implementation block
@property (nonatomic,retain) IDSUserStore * userStore;                                                                           //@synthesize userStore=_userStore - In the implementation block
@property (setter=IMPhoneUserSynchronizer,nonatomic,retain) IDSSIMPhoneUserSynchronizer * SIMPhoneUserSynchronizer;              //@synthesize SIMPhoneUserSynchronizer=_SIMPhoneUserSynchronizer - In the implementation block
@property (nonatomic,retain) IDSSystemAccountUserSynchronizer * systemAccountUserSynchronizer;                                   //@synthesize systemAccountUserSynchronizer=_systemAccountUserSynchronizer - In the implementation block
@property (nonatomic,retain) IDSUserAccountSynchronizer * userAccountSynchronizer;                                               //@synthesize userAccountSynchronizer=_userAccountSynchronizer - In the implementation block
@property (nonatomic,retain) IDSHeartbeatCenter * heartbeatCenter;                                                               //@synthesize heartbeatCenter=_heartbeatCenter - In the implementation block
@property (nonatomic,retain) IDSRestrictions * restrictions;                                                                     //@synthesize restrictions=_restrictions - In the implementation block
@property (nonatomic,retain) IDSAccountSync * accountSync;                                                                       //@synthesize accountSync=_accountSync - In the implementation block
@property (nonatomic,retain) IDSAccountRepair * accountRepair;                                                                   //@synthesize accountRepair=_accountRepair - In the implementation block
@property (nonatomic,retain) IDSDeviceCertificationRepair * deviceCertificationRepair;                                           //@synthesize deviceCertificationRepair=_deviceCertificationRepair - In the implementation block
@property (setter=IMResponder,nonatomic,retain) IDSSIMResponder * SIMResponder;                                                  //@synthesize SIMResponder=_SIMResponder - In the implementation block
-(id)init;
-(IDSRestrictions *)restrictions;
-(void)setRestrictions:(IDSRestrictions *)arg1 ;
-(void)setup;
-(void)systemDidLeaveFirstDataProtectionLock;
-(IDSAccountSync *)accountSync;
-(void)SIM:(id)arg1 didUpdateRegistrationState:(BOOL)arg2 ;
-(void)carrierBundleInformationDidChange;
-(IDSCTAdapter *)CTAdapter;
-(void)setCTAdapter:(IDSCTAdapter *)arg1 ;
-(IDSDServiceController *)serviceController;
-(void)setAccountController:(IDSDAccountController *)arg1 ;
-(IDSDAccountController *)accountController;
-(IDSUserStore *)userStore;
-(void)setUserStore:(IDSUserStore *)arg1 ;
-(IDSRegistrationController *)registrationController;
-(void)setServiceController:(IDSDServiceController *)arg1 ;
-(void)setRegistrationController:(IDSRegistrationController *)arg1 ;
-(void)registrationControllerNeedsNewRegistration:(id)arg1 ;
-(void)registrationController:(id)arg1 registrationUpdated:(id)arg2 ;
-(void)registrationController:(id)arg1 registrationWillStart:(id)arg2 ;
-(void)registrationController:(id)arg1 registrationFailed:(id)arg2 error:(long long)arg3 info:(id)arg4 ;
-(void)registrationController:(id)arg1 registrationSucceeded:(id)arg2 ;
-(void)registrationController:(id)arg1 allRegistrationsSucceeded:(id)arg2 ;
-(void)registrationController:(id)arg1 deregistrationWillStart:(id)arg2 ;
-(void)setShouldSupressRepairLogic:(BOOL)arg1 ;
-(BOOL)shouldSupressRepairLogic;
-(void)forceRepairAccounts:(id)arg1 ;
-(IDSSystemAccountAdapter *)systemAccountAdapter;
-(void)setSystemAccountAdapter:(IDSSystemAccountAdapter *)arg1 ;
-(void)kickiCloudRepair;
-(void)accountControllerDidFinishLoadingAccounts:(id)arg1 ;
-(void)preferredAccountChanged:(id)arg1 ;
-(void)bagReloaded:(id)arg1 ;
-(void)serviceRestrictionsChanged:(id)arg1 ;
-(IDSAccountRepair *)accountRepair;
-(IDSDeviceCertificationRepair *)deviceCertificationRepair;
-(IDSSIMPhoneUserSynchronizer *)SIMPhoneUserSynchronizer;
-(NSObject*<OS_dispatch_queue>)registrationQueue;
-(void)setRegistrationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSIMPhoneUserSynchronizer:(IDSSIMPhoneUserSynchronizer *)arg1 ;
-(IDSSystemAccountUserSynchronizer *)systemAccountUserSynchronizer;
-(void)setSystemAccountUserSynchronizer:(IDSSystemAccountUserSynchronizer *)arg1 ;
-(IDSUserAccountSynchronizer *)userAccountSynchronizer;
-(void)setUserAccountSynchronizer:(IDSUserAccountSynchronizer *)arg1 ;
-(IDSHeartbeatCenter *)heartbeatCenter;
-(void)setHeartbeatCenter:(IDSHeartbeatCenter *)arg1 ;
-(void)setAccountSync:(IDSAccountSync *)arg1 ;
-(void)setAccountRepair:(IDSAccountRepair *)arg1 ;
-(void)setDeviceCertificationRepair:(IDSDeviceCertificationRepair *)arg1 ;
-(IDSSIMResponder *)SIMResponder;
-(void)setSIMResponder:(IDSSIMResponder *)arg1 ;
-(void)kickRepair;
-(void)deviceRecertificationCompleted:(id)arg1 ;
@end


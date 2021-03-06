/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/RequestQueue.h>

@protocol OS_dispatch_queue;
@class ISOperationQueue, NSObject, SubscriptionStatusOperation, NSMutableArray;

@interface NetworkRequestQueue : RequestQueue {

	ISOperationQueue* _managedQueue;
	NSObject*<OS_dispatch_queue> _subscriptionStatusOperationAccessQueue;
	SubscriptionStatusOperation* _currentSubsctionStatusOperation;
	NSMutableArray* _pendingSubscriptionStatusOperations;

}
+(void)observeXPCServer:(id)arg1 ;
+(id)sharedNetworkRequestQueue;
+(void)claimAppsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)getMatchStatusWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)disableAutomaticDownloadKindsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)keybagSyncWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)installManagedAppWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)installManagedAppWithMessageAndDetailedResponse:(id)arg1 connection:(id)arg2 ;
+(void)getDownloadQueueWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)importDownloadToIPodLibraryWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)loadURLBagWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)lookupItemsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)lookupWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)sdk_loadStoreFrontIdentifierWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)sdk_getCloudServiceCapabilities:(id)arg1 connection:(id)arg2 ;
+(void)performMigrationWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)repairAppWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)requestURLWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)restoreDemotedApplicationsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)serverAuthenticateWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)authenticationRequestWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)updateMediaContentTasteWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)wishlistAddItemsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)presentRemoteWebViewWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)disableSubscriptionWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)enableSubscriptionWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)getSubscriptionStatusWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)getSubscriptionEntitlements:(id)arg1 connection:(id)arg2 ;
+(void)refreshSubscriptionWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)rentalInformationRequestWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)sdk_requestAPITokenWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)silentEnrollmentWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)silentEnrollmentVerificationWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)_addSubscriptionOperationWithType:(long long)arg1 message:(id)arg2 connection:(id)arg3 ;
+(void)installManagedAppWithMessage:(id)arg1 connection:(id)arg2 provideDetailedResponse:(BOOL)arg3 ;
-(id)init;
-(id)_newClientWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_sendUnentitledMessageToClient:(id)arg1 ;
-(void)_sendMessageWithError:(id)arg1 toClient:(id)arg2 ;
-(void)_sendUnentitledReplyForMessage:(id)arg1 connection:(id)arg2 ;
-(id)_copyAuthenticationContextWithContext:(id)arg1 client:(id)arg2 ;
-(void)_dequeueSubscriptionStatusOperation:(id)arg1 ;
-(void)_enqueueSubscriptionStatusOperation:(id)arg1 forClient:(id)arg2 ;
-(void)_enqueueOperationsForStoreServicesURL:(id)arg1 ;
-(id)_managedQueue;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, ISOperationQueue, AMSPushHandler, NSMutableArray, NSString;

@interface PushNotificationController : NSObject <APSConnectionDelegate> {

	NSMutableDictionary* _connections;
	MGNotificationTokenStructRef _deviceNameChangedToken;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _lastRegisterAttemptTime;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	ISOperationQueue* _operationQueue;
	long long _pushEnabledState;
	AMSPushHandler* _pushHandler;
	NSMutableArray* _registerBlocks;
	NSMutableArray* _tokenOperations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)soundFilesDirectoryPath;
-(id)init;
-(void)dealloc;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(id)_bag;
-(id)_enabledTopics;
-(void)_storeFrontChangedNotification:(id)arg1 ;
-(void)_accountStoreChangedNotification:(id)arg1 ;
-(id)_portNameForEnvironmentName:(id)arg1 ;
-(void)_urlBagDidLoadNotification:(id)arg1 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)observeXPCServer:(id)arg1 ;
-(void)_networkTypeChanged:(id)arg1 ;
-(void)postPushTokens;
-(void)registerTokenForEnvironmentName:(id)arg1 accountIdentifier:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_resetLastRegisterAttemptTime;
-(void)_updatePushEnabledState;
-(void)_loadConnectionsInContext:(id)arg1 ;
-(void)_postTokensIfNecessaryInContext:(id)arg1 ;
-(void)_deviceNameChanged;
-(id)_clientForIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2 inContext:(id)arg3 ;
-(void)_addNotificationWithUserInfo:(id)arg1 client:(id)arg2 context:(id)arg3 ;
-(void)_postTokensInContext:(id)arg1 force:(BOOL)arg2 ;
-(id)_environmentForName:(id)arg1 createIfNeeded:(BOOL)arg2 inContext:(id)arg3 ;
-(BOOL)_shouldAggressivelySendToken;
-(void)_postTokenForEnvironment:(id)arg1 ;
-(void)popRemoteNotificationWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)registerNotificationClientWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)showLocalNotificationWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)unregisterNotificationClientWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_reloadActiveEnvironmentInContext:(id)arg1 ;
-(void)_postNotificationsAvailableForClient:(id)arg1 inContext:(id)arg2 ;
-(id)_environmentNameForConnection:(id)arg1 ;
-(BOOL)_isPushEnabled;
-(void)_reloadPushStateInContext:(id)arg1 ;
-(void)_openConnectionForEnvironment:(id)arg1 ;
-(BOOL)_isValidEnvironment:(id)arg1 ;
-(id)_newAPSConnectionWithEnvironment:(id)arg1 ;
-(void)_setShouldAggressivelySendToken:(BOOL)arg1 ;
-(id)_newPostTokenOperationForEnvironment:(id)arg1 account:(id)arg2 ;
-(void)_updateEnvironmentAfterTokenPost:(id)arg1 ;
-(void)_fireRegisterBlocksAfterOperation:(id)arg1 ;
-(long long)_numberOfClientsInContext:(id)arg1 ;
-(void)_closeEnvironment:(id)arg1 inContext:(id)arg2 ;
-(void)_reloadDaemonClientInContext:(id)arg1 ;
-(void)postClientNotificationWithUserInfo:(id)arg1 ;
@end

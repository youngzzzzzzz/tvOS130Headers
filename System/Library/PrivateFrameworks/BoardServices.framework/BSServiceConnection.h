/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BoardServices/BoardServices-Structs.h>
#import <BoardServices/BSServiceConnectionContext.h>
#import <BoardServices/BSXPCServiceConnectionMessaging.h>
#import <BoardServices/BSInvalidatable.h>

@protocol NSCopying;
@class BSProcessHandle, BSXPCServiceConnection, NSString, _BSServiceConnectionConfiguration, BSAtomicSignal;

@interface BSServiceConnection : NSObject <BSServiceConnectionContext, BSXPCServiceConnectionMessaging, BSInvalidatable> {

	BSXPCServiceConnection* _connection;
	NSString* _service;
	NSString* _instance;
	id<NSCopying> _userInfo;
	os_unfair_lock_s _lock;
	_BSServiceConnectionConfiguration* _lock_config;
	BSAtomicSignal* _lock_activatedSignal;
	BOOL _lock_invalidated;
	BOOL _lock_noAssertInvalidatedOnDealloc;

}

@property (nonatomic,readonly) BSProcessHandle * remoteProcess; 
@property (nonatomic,copy,readonly) NSString * service;                      //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * instance;                     //@synthesize instance=_instance - In the implementation block
@property (nonatomic,readonly) id remoteTarget; 
@property (nonatomic,readonly) id<NSCopying> userInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionWithEndpoint:(id)arg1 ;
+(id)connectionWithEndpoint:(id)arg1 clientContextBuilder:(/*^block*/id)arg2 ;
+(id)currentContext;
+(id)_currentConnection;
+(id)_connectionWithEndpoint:(id)arg1 clientContextBuilder:(/*^block*/id)arg2 ;
+(id)_nameForService:(id)arg1 instance:(id)arg2 host:(BOOL)arg3 ;
+(id)_connectionFromIncomingConnection:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<NSCopying>)userInfo;
-(NSString *)service;
-(id)createMessage;
-(id)remoteTarget;
-(void)configureConnection:(/*^block*/id)arg1 ;
-(void)activate;
-(NSString *)instance;
-(BSProcessHandle *)remoteProcess;
-(void)_configureConnection:(/*^block*/id)arg1 ;
-(id)createMessageWithCompletion:(/*^block*/id)arg1 ;
-(id)_clientContext;
-(id)_initWithConnection:(id)arg1 service:(id)arg2 instance:(id)arg3 clientContext:(id)arg4 ;
@end


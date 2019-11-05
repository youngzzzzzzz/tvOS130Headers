/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>
#import <HomeKitDaemon/HMFLogging.h>

@class HMFMessage, HMDHome, NSString;

@interface HMDHomeAdministratorConfigurationOperation : HMFOperation <HMFLogging> {

	BOOL _shouldSuspendSyncing;
	HMFMessage* _message;
	HMDHome* _home;
	/*^block*/id _sendCompletionBlock;
	/*^block*/id _responseHandler;

}

@property (readonly) HMFMessage * message;                          //@synthesize message=_message - In the implementation block
@property (__weak,readonly) HMDHome * home;                         //@synthesize home=_home - In the implementation block
@property (assign) BOOL shouldSuspendSyncing;                       //@synthesize shouldSuspendSyncing=_shouldSuspendSyncing - In the implementation block
@property (copy) id sendCompletionBlock;                            //@synthesize sendCompletionBlock=_sendCompletionBlock - In the implementation block
@property (copy) id responseHandler;                                //@synthesize responseHandler=_responseHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)timeout;
+(id)logCategory;
-(void)main;
-(HMFMessage *)message;
-(HMDHome *)home;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(id)logIdentifier;
-(id)messageDispatcher;
-(id)sendCompletionBlock;
-(void)setSendCompletionBlock:(id)arg1 ;
-(id)initWithMessage:(id)arg1 home:(id)arg2 ;
-(BOOL)shouldSuspendSyncing;
-(void)setShouldSuspendSyncing:(BOOL)arg1 ;
@end

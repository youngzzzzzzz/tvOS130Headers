/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMFMessageReceiver.h>

@class HMFUnfairLock, _HMContext, _HMCameraProfile, HMService, NSUUID, HMHome, NSString;

@interface _HMCameraControl : NSObject <HMFMessageReceiver> {

	HMFUnfairLock* _lock;
	_HMContext* _context;
	_HMCameraProfile* _cameraProfile;
	HMService* _service;
	NSUUID* _profileUniqueIdentifier;
	HMHome* _home;

}

@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,__weak,readonly) _HMCameraProfile * cameraProfile;                       //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,readonly) HMService * service;                                           //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * profileUniqueIdentifier;                         //@synthesize profileUniqueIdentifier=_profileUniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(HMService *)service;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3 ;
-(NSUUID *)profileUniqueIdentifier;
-(void)_registerNotificationHandlers;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(_HMCameraProfile *)cameraProfile;
@end


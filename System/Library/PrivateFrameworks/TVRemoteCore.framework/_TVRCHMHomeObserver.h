/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/HMAccessoryDelegate.h>
#import <TVRemoteCore/HMHomeDelegate.h>
#import <TVRemoteCore/HMAccessoryDelegatePrivate.h>

@class HMHome, NSMutableDictionary, NSString;

@interface _TVRCHMHomeObserver : NSObject <HMAccessoryDelegate, HMHomeDelegate, HMAccessoryDelegatePrivate> {

	HMHome* _currentHome;
	NSMutableDictionary* _serviceToAccessoryIDMapping;

}

@property (nonatomic,retain) NSMutableDictionary * serviceToAccessoryIDMapping;              //@synthesize serviceToAccessoryIDMapping=_serviceToAccessoryIDMapping - In the implementation block
@property (nonatomic,retain) HMHome * currentHome;                                           //@synthesize currentHome=_currentHome - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)home:(id)arg1 didAddAccessory:(id)arg2 ;
-(void)home:(id)arg1 didRemoveAccessory:(id)arg2 ;
-(void)accessoryDidUpdateReachableTransports:(id)arg1 ;
-(void)accessory:(id)arg1 didUpdateNameForService:(id)arg2 ;
-(void)accessoryDidUpdateServices:(id)arg1 ;
-(void)accessoryDidUpdateReachability:(id)arg1 ;
-(HMHome *)currentHome;
-(void)setCurrentHome:(HMHome *)arg1 ;
-(void)_updateAccessoriesForHome:(id)arg1 ;
-(void)_updateServicesForAccessory:(id)arg1 ;
-(NSMutableDictionary *)serviceToAccessoryIDMapping;
-(void)_checkAccessoryReachabilityAndFetchTVServices:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_readCharacteristic:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_checkErrorForLocallySuspendedAccessory:(id)arg1 ;
-(void)setServiceToAccessoryIDMapping:(NSMutableDictionary *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDObjectLookup.h>
#import <HomeKitDaemon/HMDObjectLookupScanProtocol.h>

@class HMDHome, NSString;

@interface HMDHomeObjectLookup : HMDObjectLookup <HMDObjectLookupScanProtocol> {

	HMDHome* _home;

}

@property (nonatomic,__weak,readonly) HMDHome * home;               //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDHome *)home;
-(id)initWithHome:(id)arg1 ;
-(id)logIdentifier;
-(void)scanObjects;
-(void)lookupAndApplyObjectChange:(id)arg1 previous:(id)arg2 result:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_scanAccessoriesAndServices;
-(void)_scanRooms;
-(void)_scanZones;
-(void)_scanActionSets;
-(void)_scanServiceGroups;
-(void)_scanTriggers;
-(void)_scanResidentDevices;
-(void)_scanMediaSystems;
-(void)_scanUsers;
-(void)_scanSettingGroup:(id)arg1 ;
-(void)_scanSetting:(id)arg1 ;
@end


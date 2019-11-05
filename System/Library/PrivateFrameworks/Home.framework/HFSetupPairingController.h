/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HMSetupAccessoryDescription, HFSetupAccessoryResult, HMHome, NSString, HFDiscoveredAccessory, HMAccessorySetupCompletedInfo;


@protocol HFSetupPairingController <NSObject>
@property (nonatomic,readonly) HMSetupAccessoryDescription * setupAccessoryDescription; 
@property (nonatomic,retain) HFSetupAccessoryResult * setupResult; 
@property (nonatomic,readonly) HMHome * home; 
@property (nonatomic,readonly) unsigned long long phase; 
@property (nonatomic,readonly) NSString * statusTitle; 
@property (nonatomic,readonly) NSString * statusDescription; 
@property (nonatomic,readonly) HFDiscoveredAccessory * discoveredAccessoryToPair; 
@property (nonatomic,readonly) HMAccessorySetupCompletedInfo * completedInfo; 
@required
+(BOOL)supportsSetupPayloadRetry;
-(id)cancel;
-(HMHome *)home;
-(unsigned long long)phase;
-(NSString *)statusDescription;
-(NSString *)statusTitle;
-(HFDiscoveredAccessory *)discoveredAccessoryToPair;
-(HMSetupAccessoryDescription *)setupAccessoryDescription;
-(HFSetupAccessoryResult *)setupResult;
-(void)setSetupResult:(id)arg1;
-(id)pairedAccessories;
-(void)addPairingObserver:(id)arg1;
-(void)removePairingObserver:(id)arg1;
-(void)startWithHome:(id)arg1;
-(HMAccessorySetupCompletedInfo *)completedInfo;

@end

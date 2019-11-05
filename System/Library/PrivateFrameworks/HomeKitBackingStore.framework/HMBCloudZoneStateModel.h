/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBCloudStateModel.h>

@class HMBCloudZone, HMBCloudZoneRebuilderStatus, NSData, HMBCloudZoneID, NSNumber, NSSet;

@interface HMBCloudZoneStateModel : HMBCloudStateModel {

	HMBCloudZone* _cloudZone;
	HMBCloudZoneRebuilderStatus* _rebuilderStatus;

}

@property (nonatomic,retain) NSData * subscriptionsData; 
@property (__weak) HMBCloudZone * cloudZone;                                             //@synthesize cloudZone=_cloudZone - In the implementation block
@property (nonatomic,retain) HMBCloudZoneID * zoneID; 
@property (nonatomic,retain) NSNumber * needsZoneCreation; 
@property (nonatomic,retain) NSSet * subscriptions; 
@property (nonatomic,retain) HMBCloudZoneRebuilderStatus * rebuilderStatus;              //@synthesize rebuilderStatus=_rebuilderStatus - In the implementation block
+(id)hmbProperties;
-(NSSet *)subscriptions;
-(void)setSubscriptions:(NSSet *)arg1 ;
-(id)initWithModelID:(id)arg1 parentModelID:(id)arg2 ;
-(void)setCloudZone:(HMBCloudZone *)arg1 ;
-(HMBCloudZone *)cloudZone;
-(HMBCloudZoneRebuilderStatus *)rebuilderStatus;
-(void)setRebuilderStatus:(HMBCloudZoneRebuilderStatus *)arg1 ;
@end

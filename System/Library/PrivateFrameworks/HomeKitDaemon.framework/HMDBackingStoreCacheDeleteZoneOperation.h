/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheZone;

@interface HMDBackingStoreCacheDeleteZoneOperation : HMDBackingStoreOperation {

	/*^block*/id _creationBlock;
	HMDBackingStoreCacheZone* _zone;

}

@property (nonatomic,copy) id creationBlock;                               //@synthesize creationBlock=_creationBlock - In the implementation block
@property (nonatomic,retain) HMDBackingStoreCacheZone * zone;              //@synthesize zone=_zone - In the implementation block
-(HMDBackingStoreCacheZone *)zone;
-(void)setZone:(HMDBackingStoreCacheZone *)arg1 ;
-(void)setCreationBlock:(id)arg1 ;
-(id)creationBlock;
-(id)mainReturningError;
-(id)initWithZone:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
@end

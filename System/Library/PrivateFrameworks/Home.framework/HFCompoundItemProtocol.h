/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol HFCompoundItemProtocol <HFHomeKitItemProtocol>
@property (nonatomic,readonly) BOOL isCompoundItem; 
@property (nonatomic,readonly) unsigned long long numberOfCompoundItems; 
@property (nonatomic,readonly) id<HFHomeKitObject> primaryHomeKitObject; 
@property (nonatomic,readonly) NSArray * allHomeKitObjects; 
@optional
-(NSArray *)allHomeKitObjects;

@required
-(unsigned long long)numberOfCompoundItems;
-(BOOL)isCompoundItem;
-(id<HFHomeKitObject>)primaryHomeKitObject;

@end


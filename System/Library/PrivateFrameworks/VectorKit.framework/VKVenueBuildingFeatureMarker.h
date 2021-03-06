/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKFeatureMarker.h>

@class NSArray, NSDictionary;

@interface VKVenueBuildingFeatureMarker : VKFeatureMarker {

	BOOL _localize;

}

@property (nonatomic,readonly) unsigned long long buildingId; 
@property (nonatomic,readonly) unsigned long long businessId; 
@property (nonatomic,readonly) NSArray * floorOrdinals; 
@property (nonatomic,readonly) NSDictionary * shortFloorNames; 
@property (nonatomic,readonly) NSDictionary * floorNames; 
-(unsigned long long)buildingId;
-(unsigned long long)businessId;
-(id)initWithVenueBuilding:(const VenueBuilding*)arg1 localize:(BOOL)arg2 ;
-(const shared_ptr<md::VenueBuildingFeatureMarker>*)venueBuildingFeatureMarker;
-(NSArray *)floorOrdinals;
-(NSDictionary *)shortFloorNames;
-(NSDictionary *)floorNames;
-(CGSize)nearestFramingPositionToLocation:(CGSize)arg1 ;
@end


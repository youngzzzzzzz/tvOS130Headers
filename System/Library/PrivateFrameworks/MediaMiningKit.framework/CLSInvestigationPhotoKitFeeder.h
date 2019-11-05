/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class PHFetchResult, NSArray, PHAssetCollection, PHFetchOptions, CLSFeederPrefetchOptions;

@interface CLSInvestigationPhotoKitFeeder : CLSInvestigationFeeder {

	unsigned long long _assetPrefetchOptions;
	PHFetchResult* _fetchResult;
	NSArray* _allItems;
	unsigned long long _numberOfAllPeople;
	PHAssetCollection* _assetCollection;
	PHFetchOptions* _assetFetchOptions;
	CLSFeederPrefetchOptions* _prefetchOptions;

}

@property (nonatomic,readonly) PHAssetCollection * assetCollection;                          //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) BOOL hasPeople; 
@property (nonatomic,readonly) BOOL hasFavoritedAssets; 
@property (nonatomic,readonly) BOOL hasBestScoringAssets; 
@property (nonatomic,readonly) BOOL hasNonJunkAssets; 
@property (nonatomic,readonly) unsigned long long numberOfShinyGemItems; 
@property (nonatomic,readonly) unsigned long long numberOfRegularGemItems; 
@property (nonatomic,readonly) double behavioralScore; 
@property (nonatomic,readonly) unsigned long long numberOfAllPeople; 
@property (nonatomic,copy,readonly) PHFetchOptions * assetFetchOptions;                      //@synthesize assetFetchOptions=_assetFetchOptions - In the implementation block
@property (nonatomic,copy,readonly) CLSFeederPrefetchOptions * prefetchOptions;              //@synthesize prefetchOptions=_prefetchOptions - In the implementation block
+(id)feederForAssetCollection:(id)arg1 options:(id)arg2 feederPrefetchOptions:(id)arg3 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfItems;
-(id)allItems;
-(id)localStartDate;
-(id)localEndDate;
-(id)approximateLocation;
-(double)behavioralScore;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(PHAssetCollection *)assetCollection;
-(id)universalStartDate;
-(id)universalEndDate;
-(id)localStartDateComponents;
-(id)localEndDateComponents;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGImageRef)itemThumbnailAtIndex:(unsigned long long)arg1 withResolution:(unsigned long long)arg2 ;
-(unsigned long long)numberOfShinyGemItems;
-(unsigned long long)numberOfRegularGemItems;
-(id)initWithFeederWithAssetCollection:(id)arg1 assetFetchOptions:(id)arg2 feederPrefetchOptions:(id)arg3 ;
-(BOOL)_shouldPrefetchCurationInformation;
-(BOOL)hasPeople;
-(BOOL)hasFavoritedAssets;
-(BOOL)hasBestScoringAssets;
-(BOOL)hasNonJunkAssets;
-(unsigned long long)numberOfAllPeople;
-(PHFetchOptions *)assetFetchOptions;
-(CLSFeederPrefetchOptions *)prefetchOptions;
@end

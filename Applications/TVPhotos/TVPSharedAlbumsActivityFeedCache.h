/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAssetCollection, NSArray;

@interface TVPSharedAlbumsActivityFeedCache : NSObject {

	PHAssetCollection* _activityFeedCollection;
	NSArray* _activityPhotoBatches;
	NSArray* _sortedMostRecentlyModifiedAssets;

}

@property (nonatomic,retain) PHAssetCollection * activityFeedCollection;              //@synthesize activityFeedCollection=_activityFeedCollection - In the implementation block
@property (nonatomic,copy) NSArray * activityPhotoBatches;                            //@synthesize activityPhotoBatches=_activityPhotoBatches - In the implementation block
@property (nonatomic,copy) NSArray * sortedMostRecentlyModifiedAssets;                //@synthesize sortedMostRecentlyModifiedAssets=_sortedMostRecentlyModifiedAssets - In the implementation block
+(id)sharedInstance;
-(BOOL)hasFeedInfo;
-(PHAssetCollection *)activityFeedCollection;
-(void)setSortedMostRecentlyModifiedAssets:(NSArray *)arg1 ;
-(void)setActivityPhotoBatches:(NSArray *)arg1 ;
-(void)setActivityFeedCollection:(PHAssetCollection *)arg1 ;
-(BOOL)loadCache;
-(NSArray *)activityPhotoBatches;
-(NSArray *)sortedMostRecentlyModifiedAssets;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPhotos/TVPhotos-Structs.h>
#import <TVPhotos/TVPCachingManager.h>

@protocol TVPCollectionViewCachingManagerDataSource;
@class UICollectionView, NSSet;

@interface TVPCollectionViewCachingManager : TVPCachingManager {

	BOOL _allowsHorizontalScrolling;
	UICollectionView* _collectionView;
	id<TVPCollectionViewCachingManagerDataSource> _dataSource;
	NSSet* _previousPreheatIndexPaths;
	CGRect _previousPreheatRect;

}

@property (assign,nonatomic) CGRect previousPreheatRect;                                                   //@synthesize previousPreheatRect=_previousPreheatRect - In the implementation block
@property (nonatomic,retain) NSSet * previousPreheatIndexPaths;                                            //@synthesize previousPreheatIndexPaths=_previousPreheatIndexPaths - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                            //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) BOOL allowsHorizontalScrolling;                                               //@synthesize allowsHorizontalScrolling=_allowsHorizontalScrolling - In the implementation block
@property (assign,nonatomic,__weak) id<TVPCollectionViewCachingManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<TVPCollectionViewCachingManagerDataSource>)dataSource;
-(void)setDataSource:(id<TVPCollectionViewCachingManagerDataSource>)arg1 ;
-(id)requestOptions;
-(CGSize)targetSize;
-(UICollectionView *)collectionView;
-(long long)contentMode;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)_updateCachedAssets;
-(void)stopPrefetchingAssets;
-(void)setPreviousPreheatIndexPaths:(NSSet *)arg1 ;
-(void)setPreviousPreheatRect:(CGRect)arg1 ;
-(BOOL)allowsHorizontalScrolling;
-(void)startPrefetchingAssets;
-(void)setAllowsHorizontalScrolling:(BOOL)arg1 ;
-(CGRect)previousPreheatRect;
-(NSSet *)previousPreheatIndexPaths;
@end


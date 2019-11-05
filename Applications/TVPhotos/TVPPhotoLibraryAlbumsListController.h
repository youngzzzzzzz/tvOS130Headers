/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <TVPhotos/TVPCollectionViewDelegate.h>
#import <TVPhotos/PXPhotoLibraryUIChangeObserver.h>
#import <TVPhotos/TVPCollectionViewCachingManagerDataSource.h>
#import <TVPhotos/TVPCollectionViewDelegateFlowLayout.h>
#import <TVPhotos/TVPPhotoLibraryTabbedViewController.h>

@class TVPCollectionView, UIView, TVPFetchManager, TVPCollectionViewCachingManager, NSArray, PHCollectionList, NSMutableDictionary, NSString;

@interface TVPPhotoLibraryAlbumsListController : UIViewController <UICollectionViewDataSource, TVPCollectionViewDelegate, PXPhotoLibraryUIChangeObserver, TVPCollectionViewCachingManagerDataSource, TVPCollectionViewDelegateFlowLayout, TVPPhotoLibraryTabbedViewController> {

	BOOL _needsReload;
	TVPCollectionView* _albumsListView;
	UIView* _loadingView;
	TVPFetchManager* _fetchManager;
	TVPCollectionViewCachingManager* _cachingManager;
	NSArray* _albumAssetCollections;
	PHCollectionList* _defaultCollectionList;
	NSMutableDictionary* __subCollectionKeyAssetsFetchResults;
	NSMutableDictionary* __folderCountFetchResults;

}

@property (nonatomic,retain) TVPCollectionView * albumsListView;                                       //@synthesize albumsListView=_albumsListView - In the implementation block
@property (nonatomic,retain) UIView * loadingView;                                                     //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) TVPFetchManager * fetchManager;                                           //@synthesize fetchManager=_fetchManager - In the implementation block
@property (nonatomic,retain) TVPCollectionViewCachingManager * cachingManager;                         //@synthesize cachingManager=_cachingManager - In the implementation block
@property (nonatomic,copy) NSArray * albumAssetCollections;                                            //@synthesize albumAssetCollections=_albumAssetCollections - In the implementation block
@property (nonatomic,retain) PHCollectionList * defaultCollectionList;                                 //@synthesize defaultCollectionList=_defaultCollectionList - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _subCollectionKeyAssetsFetchResults;              //@synthesize _subCollectionKeyAssetsFetchResults=__subCollectionKeyAssetsFetchResults - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _folderCountFetchResults;                         //@synthesize _folderCountFetchResults=__folderCountFetchResults - In the implementation block
@property (assign,nonatomic) BOOL needsReload;                                                         //@synthesize needsReload=_needsReload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long tabMode; 
-(id)init;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(BOOL)needsReload;
-(void)setNeedsReload:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)preferredFocusEnvironments;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(id)initWithCollectionList:(id)arg1 ;
-(UIView *)loadingView;
-(void)setLoadingView:(UIView *)arg1 ;
-(id)ppt_albumListCollectionView;
-(id)collectionViewCachingManager:(id)arg1 assetsForIndexPaths:(id)arg2 ;
-(TVPCollectionViewCachingManager *)cachingManager;
-(void)_displayLoadingView;
-(void)_dismissLoadingView;
-(id)_assetAtIndexPath:(id)arg1 ;
-(long long)tabMode;
-(TVPFetchManager *)fetchManager;
-(void)setFetchManager:(TVPFetchManager *)arg1 ;
-(void)setCachingManager:(TVPCollectionViewCachingManager *)arg1 ;
-(TVPCollectionView *)albumsListView;
-(void)_fetchAlbumCollectionsWithCompletion:(/*^block*/id)arg1 ;
-(id)_albumAtIndexPath:(id)arg1 ;
-(id)_overlayImageForAlbum:(id)arg1 ;
-(void)_loadFolderCell:(id)arg1 withFolder:(id)arg2 ;
-(NSMutableDictionary *)_subCollectionKeyAssetsFetchResults;
-(long long)_assetCountForCollection:(id)arg1 ;
-(NSMutableDictionary *)_folderCountFetchResults;
-(unsigned long long)_indexOfFavouriteMemoryAlbumInArray:(id)arg1 ;
-(void)setAlbumsListView:(TVPCollectionView *)arg1 ;
-(NSArray *)albumAssetCollections;
-(void)setAlbumAssetCollections:(NSArray *)arg1 ;
-(PHCollectionList *)defaultCollectionList;
-(void)setDefaultCollectionList:(PHCollectionList *)arg1 ;
@end

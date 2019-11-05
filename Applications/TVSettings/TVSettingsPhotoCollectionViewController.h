/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettings/TVSettings-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol TVSettingsPhotoCollectionViewControllerSelectionDelegate;
@class TVPhotoCollection, TVImageScaleDecorator, UICollectionView, NSArray, NSString;

@interface TVSettingsPhotoCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	TVPhotoCollection* _collection;
	TVImageScaleDecorator* _scaleDecorator;
	id<TVSettingsPhotoCollectionViewControllerSelectionDelegate> _delegate;
	UICollectionView* _gridView;
	NSArray* _photoAssets;

}

@property (nonatomic,retain) UICollectionView * gridView;                                                               //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,copy) NSArray * photoAssets;                                                                       //@synthesize photoAssets=_photoAssets - In the implementation block
@property (nonatomic,retain) TVPhotoCollection * collection;                                                            //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic,__weak) id<TVSettingsPhotoCollectionViewControllerSelectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<TVSettingsPhotoCollectionViewControllerSelectionDelegate>)delegate;
-(void)setDelegate:(id<TVSettingsPhotoCollectionViewControllerSelectionDelegate>)arg1 ;
-(TVPhotoCollection *)collection;
-(void)loadView;
-(void)setCollection:(TVPhotoCollection *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)gridView;
-(void)setGridView:(UICollectionView *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)preferredFocusEnvironments;
-(NSArray *)photoAssets;
-(void)setPhotoAssets:(NSArray *)arg1 ;
@end

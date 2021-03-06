/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPhotos/TVPhotos-Structs.h>
#import <UIKitCore/UIViewController.h>

@class TVPDeckImageView, NSArray, PHAssetCollection;

@interface TVPPhotoCollectionPreviewViewController : UIViewController {

	TVPDeckImageView* _deckImageView;
	NSArray* _assetImageProxies;
	PHAssetCollection* _photoCollection;
	CGRect _imageFrame;

}

@property (nonatomic,retain) PHAssetCollection * photoCollection;              //@synthesize photoCollection=_photoCollection - In the implementation block
@property (assign,nonatomic) CGRect imageFrame;                                //@synthesize imageFrame=_imageFrame - In the implementation block
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(CGRect)imageFrame;
-(void)setImageFrame:(CGRect)arg1 ;
-(void)setPhotoCollection:(PHAssetCollection *)arg1 ;
-(void)_updateViewWithImageProxies:(id)arg1 inCollection:(id)arg2 ;
-(PHAssetCollection *)photoCollection;
@end


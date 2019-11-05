/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFooterViewModel.h>
#import <PhotosUICore/PXCPLServiceUIDelegate.h>
#import <PhotosUICore/PXCloudQuotaControllerDelegate.h>
#import <PhotosUICore/PXAssetsDataSourceManagerObserver.h>

@protocol PXPhotosLibraryFooterViewModelPresentationDelegate;
@class NSArray, PXPhotoKitAssetsDataSourceManager, PXCPLServiceUI, PXCloudQuotaController, NSString;

@interface PXPhotosLibraryFooterViewModel : PXFooterViewModel <PXCPLServiceUIDelegate, PXCloudQuotaControllerDelegate, PXAssetsDataSourceManagerObserver> {

	NSArray* _syncProgressAlbums;
	id<PXPhotosLibraryFooterViewModelPresentationDelegate> _presentingDelegate;
	PXPhotoKitAssetsDataSourceManager* _assetsDataSourceManager;
	PXCPLServiceUI* _cplServiceUI;
	PXCloudQuotaController* _cloudQuotaController;

}

@property (nonatomic,readonly) PXPhotoKitAssetsDataSourceManager * assetsDataSourceManager;                                 //@synthesize assetsDataSourceManager=_assetsDataSourceManager - In the implementation block
@property (nonatomic,readonly) NSArray * syncProgressAlbums;                                                                //@synthesize syncProgressAlbums=_syncProgressAlbums - In the implementation block
@property (nonatomic,retain) PXCPLServiceUI * cplServiceUI;                                                                 //@synthesize cplServiceUI=_cplServiceUI - In the implementation block
@property (nonatomic,retain) PXCloudQuotaController * cloudQuotaController;                                                 //@synthesize cloudQuotaController=_cloudQuotaController - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosLibraryFooterViewModelPresentationDelegate> presentingDelegate;              //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithDataSource:(id)arg1 ;
-(id<PXPhotosLibraryFooterViewModelPresentationDelegate>)presentingDelegate;
-(void)setPresentingDelegate:(id<PXPhotosLibraryFooterViewModelPresentationDelegate>)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXPhotoKitAssetsDataSourceManager *)assetsDataSourceManager;
-(void)cloudQuotaController:(id)arg1 presentInformationBanner:(id)arg2 ;
-(NSObject*)presentingViewControllerForCloudQuotaController:(id)arg1 ;
-(void)serviceUI:(id)arg1 progressDidChange:(float)arg2 ;
-(BOOL)serviceUI:(id)arg1 performAction:(long long)arg2 ;
-(void)serviceUI:(id)arg1 statusDidChange:(id)arg2 ;
-(NSArray *)syncProgressAlbums;
-(void)_updateExposedProperties;
-(PXCPLServiceUI *)cplServiceUI;
-(PXCloudQuotaController *)cloudQuotaController;
-(void)setCplServiceUI:(PXCPLServiceUI *)arg1 ;
-(void)setCloudQuotaController:(PXCloudQuotaController *)arg1 ;
@end

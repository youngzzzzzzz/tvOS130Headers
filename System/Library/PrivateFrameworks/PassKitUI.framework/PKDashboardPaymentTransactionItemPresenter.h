/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardItemPresenter.h>

@class PKPeerPaymentWebService, PKPeerPaymentController, PKPeerPaymentContactResolver, PKPaymentDefaultDataProvider, PKPaymentTransactionCellController, UIFont, UIImage, PKPaymentTransactionDetailsFactory, PKPaymentTransactionCollectionViewCell, NSString;

@interface PKDashboardPaymentTransactionItemPresenter : NSObject <PKDashboardItemPresenter> {

	unsigned long long _context;
	PKPeerPaymentWebService* _peerPaymentWebService;
	PKPeerPaymentController* _peerPaymentController;
	PKPeerPaymentContactResolver* _contactResolver;
	PKPaymentDefaultDataProvider* _dataProvider;
	PKPaymentTransactionCellController* _transactionCellController;
	UIFont* _transactionCellPrimaryLabelFont;
	UIFont* _transactionCellPrimaryLabelPeerPaymentFont;
	UIFont* _transactionCellValueLabelFont;
	UIFont* _transactionCellValueLabelPeerPaymentFont;
	UIFont* _transactionCellSecondaryLabelFont;
	UIFont* _transactionCellSecondaryLabelPeerPaymentFont;
	UIImage* _emptyImage;
	UIImage* _cashbackImage;
	UIImage* _appleCardImage;
	PKPaymentTransactionDetailsFactory* _transactionDetailsFactory;
	PKPaymentTransactionCollectionViewCell* _sampleCell;
	BOOL _useAccessibilityLayout;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContext:(unsigned long long)arg1 ;
-(CGSize)_imageSize;
-(Class)itemClass;
-(id)cashbackImage;
-(id)appleCardImage;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3 ;
-(void)prefetchForItem:(id)arg1 inCollectionView:(id)arg2 ;
-(void)viewControllerForTransaction:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 forcePreventHistory:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_updateAvatarOnTransactionCell:(id)arg1 withTransaction:(id)arg2 contact:(id)arg3 ;
-(void)_updatePrimaryLabelOnTransactionCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3 ;
-(void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 ;
-(id)_contactKeysToFetch;
-(BOOL)_shouldShowIconForPass:(id)arg1 context:(unsigned long long)arg2 ;
@end

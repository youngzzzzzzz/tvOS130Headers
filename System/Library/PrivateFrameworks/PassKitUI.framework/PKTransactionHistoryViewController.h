/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardViewController.h>

@protocol OS_dispatch_source;
@class PKSpendingSummaryFooterView, PKSpendingSummaryFooterContainer, NSObject, PKContinuousButton, PKNavigationController, PKAnimatedNavigationBarTitleView, UIImageView, NSString, PKPaymentTransaction, PKPaymentPass;

@interface PKTransactionHistoryViewController : PKDashboardViewController {

	PKSpendingSummaryFooterView* _footer;
	PKSpendingSummaryFooterContainer* _footerContainer;
	BOOL _loadingMapsViewController;
	NSObject*<OS_dispatch_source> _loadingMapsTimer;
	PKContinuousButton* _detailsButton;
	PKContinuousButton* _phoneButton;
	PKContinuousButton* _messageButton;
	UIEdgeInsets _lastContentInset;
	double _headerHeight;
	PKNavigationController* _navigationController;
	double _merchantHeaderAnimationProgress;
	PKAnimatedNavigationBarTitleView* _titleView;
	UIImageView* _titleIconImageView;
	NSString* _titleText;
	PKPaymentTransaction* _transaction;
	PKPaymentPass* _paymentPass;
	unsigned long long _historyType;

}

@property (nonatomic,readonly) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * paymentPass;                     //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,readonly) unsigned long long historyType;                  //@synthesize historyType=_historyType - In the implementation block
-(void)dealloc;
-(PKPaymentTransaction *)transaction;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(unsigned long long)historyType;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(PKPaymentPass *)paymentPass;
-(id)initWithTransactionGroup:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 transactionHistory:(id)arg4 ;
-(id)initWithFetcher:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 featuredTransaction:(id)arg4 selectedTransactions:(id)arg5 transactionHistory:(id)arg6 ;
-(void)contentIsLoaded;
-(SCD_Struct_PK27)pkui_navigationStatusBarStyleDescriptor;
-(id)_barButtonItems;
-(void)_updateNavigationBarIconForNavigationBarAppeared:(BOOL)arg1 ;
-(void)_updateNavigationBarIconWithLogoURL:(id)arg1 ;
-(void)_handleInfoButtonTapped:(id)arg1 ;
-(void)_handlePhoneButtonTapped:(id)arg1 ;
-(void)_handleMessageButtonTapped:(id)arg1 ;
-(void)_showMapsDetailsViewController;
-(void)_showContactDetailsViewController;
@end


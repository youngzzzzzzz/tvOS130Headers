/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKSectionTableViewController.h>
#import <PassKitUI/PKPaymentDataProviderDelegate.h>
#import <PassKitUI/PKPerformActionViewControllerDelegate.h>
#import <PassKitUI/PKAccessibleLayoutObserverDelegate.h>

@protocol PKPaymentDataProvider;
@class PKTransitBalanceModel, PKPaymentPass, NSString;

@interface PKPassProductsViewController : PKSectionTableViewController <PKPaymentDataProviderDelegate, PKPerformActionViewControllerDelegate, PKAccessibleLayoutObserverDelegate> {

	PKTransitBalanceModel* _balanceModel;
	long long _accessibleLayout;
	id<PKPaymentDataProvider> _paymentDataProvider;
	PKPaymentPass* _pass;

}

@property (assign,nonatomic) PKPaymentPass * pass;                  //@synthesize pass=_pass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(PKPaymentPass *)pass;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)initWithPaymentPass:(id)arg1 ;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)_reloadContent;
-(void)_reloadBalance;
-(void)performActionViewControllerDidCancel:(id)arg1 ;
-(void)performActionViewControllerDidPerformAction:(id)arg1 ;
-(void)accessibleLayoutForView:(id)arg1 changedFrom:(long long)arg2 to:(long long)arg3 ;
@end


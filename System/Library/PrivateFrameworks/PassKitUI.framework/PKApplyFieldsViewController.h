/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupFieldsViewController.h>
#import <PassKitUI/PKPaymentSetupPresentationProtocol.h>
#import <PassKitUI/PKApplyFlowControllerProtocol.h>

@class PKApplyController, UIBarButtonItem, PKApplyRequiredFieldsPage, NSString;

@interface PKApplyFieldsViewController : PKPaymentSetupFieldsViewController <PKPaymentSetupPresentationProtocol, PKApplyFlowControllerProtocol> {

	PKApplyController* _controller;
	UIBarButtonItem* _cancelButton;
	PKApplyRequiredFieldsPage* _applyPage;
	BOOL _isLoading;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)currentPage;
-(void)_terminateFlow;
-(void)_handleNextStep;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(void)handleNextButtonTapped:(id)arg1 ;
-(id)onPresentationRemoveViewControllersAfterMarker;
-(void)_cancelPressed;
-(void)_featureApplicationUpdated;
-(void)_showSubmissionSpinner:(BOOL)arg1 ;
-(void)_handleNextViewController:(id)arg1 displayableError:(id)arg2 terminationHandler:(/*^block*/id)arg3 ;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 applyPage:(id)arg3 ;
-(void)_withdrawApplicationTapped;
-(void)_completeInWalletLater;
-(BOOL)shouldAppearWithFirstEmptyFieldAsFirstResponder;
@end


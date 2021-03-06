/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentDocumentSubmissionControllerDelegate, PKPaymentSetupViewControllerDelegate;
@class PKDocumentRequest, UIImage;

@interface PKPaymentDocumentSubmissionController : NSObject {

	long long _state;
	long long _side;
	id<PKPaymentDocumentSubmissionControllerDelegate> _delegate;
	PKDocumentRequest* _selectedDocument;
	UIImage* _frontID;
	UIImage* _backID;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	long long _context;
	unsigned long long _featureIdentifier;

}

@property (nonatomic,retain) id<PKPaymentSetupViewControllerDelegate> setupDelegate;                         //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (assign,nonatomic) long long context;                                                              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned long long featureIdentifier;                                           //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (assign,nonatomic) long long state;                                                                //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long side;                                                                 //@synthesize side=_side - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentDocumentSubmissionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKDocumentRequest * selectedDocument;                                           //@synthesize selectedDocument=_selectedDocument - In the implementation block
@property (nonatomic,retain) UIImage * frontID;                                                              //@synthesize frontID=_frontID - In the implementation block
@property (nonatomic,retain) UIImage * backID;                                                               //@synthesize backID=_backID - In the implementation block
-(id<PKPaymentDocumentSubmissionControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentDocumentSubmissionControllerDelegate>)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(unsigned long long)featureIdentifier;
-(void)stateChanged;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(id)nextViewController;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(id)initWithSetupDelegate:(id)arg1 context:(long long)arg2 acceptableDocuments:(id)arg3 featureIdentifier:(unsigned long long)arg4 ;
-(UIImage *)frontID;
-(UIImage *)backID;
-(PKDocumentRequest *)selectedDocument;
-(void)uploadID;
-(void)contactApplePressed;
-(long long)side;
-(void)userWantsToCancelFromViewController:(id)arg1 ;
-(void)terminateSetupFlowFromViewController:(id)arg1 ;
-(void)capturedImage:(id)arg1 ;
-(void)captureFailedWithError:(id)arg1 ;
-(void)setSide:(long long)arg1 ;
-(void)userWantsToContinue;
-(void)userApprovedCapturedID;
-(void)tryUploadAgain;
-(void)scanAgain;
-(void)userRejectedCapturedID;
-(void)setFrontID:(UIImage *)arg1 ;
-(void)setBackID:(UIImage *)arg1 ;
-(void)userWantsToWithdraw;
-(void)setSelectedDocument:(PKDocumentRequest *)arg1 ;
@end


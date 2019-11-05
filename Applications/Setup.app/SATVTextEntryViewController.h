/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol SATVTextEntryViewControllerDelegate;
@class NSString, SATVTextEntryView, UISystemInputViewController;

@interface SATVTextEntryViewController : UIViewController {

	BOOL _continueButtonEnabled;
	BOOL _secureTextEntry;
	NSString* _textFieldTitle;
	NSString* _textFieldSubtitle;
	NSString* _continueButtonText;
	long long _keyboardType;
	id<SATVTextEntryViewControllerDelegate> _delegate;
	SATVTextEntryView* _textEntryView;
	UISystemInputViewController* _systemInputViewController;

}

@property (nonatomic,retain) SATVTextEntryView * textEntryView;                                      //@synthesize textEntryView=_textEntryView - In the implementation block
@property (nonatomic,retain) UISystemInputViewController * systemInputViewController;                //@synthesize systemInputViewController=_systemInputViewController - In the implementation block
@property (nonatomic,copy) NSString * textFieldTitle;                                                //@synthesize textFieldTitle=_textFieldTitle - In the implementation block
@property (nonatomic,copy) NSString * textFieldSubtitle;                                             //@synthesize textFieldSubtitle=_textFieldSubtitle - In the implementation block
@property (nonatomic,copy) NSString * continueButtonText;                                            //@synthesize continueButtonText=_continueButtonText - In the implementation block
@property (assign,getter=isContinueButtonEnabled,nonatomic) BOOL continueButtonEnabled;              //@synthesize continueButtonEnabled=_continueButtonEnabled - In the implementation block
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry;                          //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (assign,nonatomic) long long keyboardType;                                                 //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic,__weak) id<SATVTextEntryViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(id<SATVTextEntryViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SATVTextEntryViewControllerDelegate>)arg1 ;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(BOOL)isSecureTextEntry;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(SATVTextEntryView *)textEntryView;
-(id)preferredFocusEnvironments;
-(void)_doneButtonPressed:(id)arg1 ;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_enableAutomaticKeyboardPressDone;
-(UISystemInputViewController *)systemInputViewController;
-(void)setTextEntryView:(SATVTextEntryView *)arg1 ;
-(void)_handleMenuButton:(id)arg1 ;
-(void)_submitButtonAction:(id)arg1 ;
-(void)_textChanged;
-(void)setTextFieldTitle:(NSString *)arg1 ;
-(void)setTextFieldSubtitle:(NSString *)arg1 ;
-(void)setContinueButtonText:(NSString *)arg1 ;
-(void)setContinueButtonEnabled:(BOOL)arg1 ;
-(NSString *)textFieldTitle;
-(NSString *)textFieldSubtitle;
-(NSString *)continueButtonText;
-(BOOL)isContinueButtonEnabled;
-(void)setSystemInputViewController:(UISystemInputViewController *)arg1 ;
@end

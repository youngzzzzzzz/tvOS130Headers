/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:23 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol TVSettingsBetaTermsViewControllerDelegate;
@class NSArray, UIViewController, UITapGestureRecognizer, NSString;

@interface TVSettingsBetaTermsViewController : UIViewController <UIViewControllerTransitioningDelegate> {

	BOOL _termTextVisible;
	id<TVSettingsBetaTermsViewControllerDelegate> _delegate;
	NSArray* _terms;
	UIViewController* _currentChildViewController;
	UITapGestureRecognizer* _menuRecognizer;
	unsigned long long _currentTermIndex;

}

@property (nonatomic,copy) NSArray * terms;                                                              //@synthesize terms=_terms - In the implementation block
@property (nonatomic,retain) UIViewController * currentChildViewController;                              //@synthesize currentChildViewController=_currentChildViewController - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * menuRecognizer;                                    //@synthesize menuRecognizer=_menuRecognizer - In the implementation block
@property (assign,nonatomic) unsigned long long currentTermIndex;                                        //@synthesize currentTermIndex=_currentTermIndex - In the implementation block
@property (assign,nonatomic) BOOL termTextVisible;                                                       //@synthesize termTextVisible=_termTextVisible - In the implementation block
@property (assign,nonatomic,__weak) id<TVSettingsBetaTermsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TVSettingsBetaTermsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TVSettingsBetaTermsViewControllerDelegate>)arg1 ;
-(void)_completeWithResult:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSArray *)terms;
-(void)setTerms:(NSArray *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)preferredFocusEnvironments;
-(UITapGestureRecognizer *)menuRecognizer;
-(void)setMenuRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)initWithTerms:(id)arg1 ;
-(void)setCurrentChildViewController:(UIViewController *)arg1 ;
-(UIViewController *)currentChildViewController;
-(void)_handleMenuButton:(id)arg1 ;
-(void)_showButtons;
-(BOOL)termTextVisible;
-(void)setCurrentTermIndex:(unsigned long long)arg1 ;
-(void)_showTermText;
-(void)_transitionToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setTermTextVisible:(BOOL)arg1 ;
-(unsigned long long)currentTermIndex;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:30 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class NSString;

@interface PBTVButtonChangeViewController : UIViewController <UIViewControllerTransitioningDelegate> {

	/*^block*/id _dismissalCompletion;

}

@property (nonatomic,copy) id dismissalCompletion;                  //@synthesize dismissalCompletion=_dismissalCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)_handleMenuButton:(id)arg1 ;
-(void)_handleHomeButton:(id)arg1 ;
-(id)dismissalCompletion;
-(void)_dismissViewControllerWithValue:(BOOL)arg1 ;
-(void)setDismissalCompletion:(id)arg1 ;
-(void)_handleOK;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <TVSettings/TVSettingsIPEntryViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString, TVSEthernetInterface, TVSettingsIPEntryViewController;

@interface TVSettingsNetworkConfigureIPWizardViewController : UIViewController <TVSettingsIPEntryViewControllerDelegate, UIGestureRecognizerDelegate> {

	NSString* _ipAddress;
	NSString* _subnetMask;
	NSString* _routerAddress;
	NSString* _primaryDNSAddress;
	TVSEthernetInterface* _interface;
	long long _currentState;
	TVSettingsIPEntryViewController* _currentViewController;

}

@property (assign,nonatomic) long long currentState;                                               //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain) TVSettingsIPEntryViewController * currentViewController;              //@synthesize currentViewController=_currentViewController - In the implementation block
@property (nonatomic,readonly) TVSEthernetInterface * interface;                                   //@synthesize interface=_interface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TVSEthernetInterface *)interface;
-(id)initWithInterface:(id)arg1 ;
-(long long)currentState;
-(void)setCurrentState:(long long)arg1 ;
-(BOOL)becomeFirstResponder;
-(long long)_initialState;
-(void)viewDidLoad;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)_menuPressed:(id)arg1 ;
-(TVSettingsIPEntryViewController *)currentViewController;
-(void)setCurrentViewController:(TVSettingsIPEntryViewController *)arg1 ;
-(void)ipEntryViewControllerDidFinish:(id)arg1 ;
-(id)_viewControllerForState:(long long)arg1 ;
-(void)_setAutomaticConfigurationEnabled:(BOOL)arg1 ;
-(void)_transitionFrom:(id)arg1 to:(id)arg2 ;
-(id)_configureIPAddressVC;
-(id)_configureSubnetMaskVC;
-(id)_configureRouterAddressVC;
-(id)_configureDNSAddressVC;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/SATVTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SATVNetworkConfigurationWizardDelegate;
@class TVSEthernetInterface, NSString;

@interface SATVNetworkConfigurationWizardViewController : SATVTableViewController <UITableViewDataSource, UITableViewDelegate> {

	id<SATVNetworkConfigurationWizardDelegate> _wizardDelegate;
	TVSEthernetInterface* _interface;
	unsigned long long _mode;

}

@property (nonatomic,retain) TVSEthernetInterface * interface;                                              //@synthesize interface=_interface - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                       //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic,__weak) id<SATVNetworkConfigurationWizardDelegate> wizardDelegate;              //@synthesize wizardDelegate=_wizardDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMode:(unsigned long long)arg1 ;
-(TVSEthernetInterface *)interface;
-(void)setInterface:(TVSEthernetInterface *)arg1 ;
-(unsigned long long)mode;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)_didSelectMenu;
-(id)initWithInitialMode:(unsigned long long)arg1 networkInterface:(id)arg2 ;
-(void)setWizardDelegate:(id<SATVNetworkConfigurationWizardDelegate>)arg1 ;
-(void)_updateHeaderForMode;
-(void)_enableDHCP;
-(void)_wizardComplete;
-(void)_beginWizardFlowFromCurrentMode;
-(void)_disableDNS;
-(void)_wizardCanceled;
-(id<SATVNetworkConfigurationWizardDelegate>)wizardDelegate;
-(void)_disableDHCP;
-(void)_beginWizardFlowForOption:(unsigned long long)arg1 ;
@end


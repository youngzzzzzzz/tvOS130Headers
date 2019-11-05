/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <Setup/SATVTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Setup/SATVNetworkConfigurationWizardDelegate.h>
#import <Setup/SATVIPEntryViewControllerDelegate.h>

@protocol SATVNetworkConfigurationDelegate;
@class TVSEthernetInterface, SATVButton, SATVNavigationController, NSString;

@interface SATVNetworkConfigurationViewController : SATVTableViewController <UITableViewDataSource, UITableViewDelegate, SATVNetworkConfigurationWizardDelegate, SATVIPEntryViewControllerDelegate> {

	id<SATVNetworkConfigurationDelegate> _configurationDelegate;
	TVSEthernetInterface* _activeInterface;
	SATVButton* _doneButton;
	/*^block*/id _ipEntryCompletionBlock;
	unsigned long long _currentlyEditedConfigurationOption;

}

@property (nonatomic,retain) TVSEthernetInterface * activeInterface;                                         //@synthesize activeInterface=_activeInterface - In the implementation block
@property (nonatomic,retain) SATVButton * doneButton;                                                        //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,copy) id ipEntryCompletionBlock;                                                        //@synthesize ipEntryCompletionBlock=_ipEntryCompletionBlock - In the implementation block
@property (assign,nonatomic) unsigned long long currentlyEditedConfigurationOption;                          //@synthesize currentlyEditedConfigurationOption=_currentlyEditedConfigurationOption - In the implementation block
@property (nonatomic,readonly) SATVNavigationController * navigationController; 
@property (assign,nonatomic,__weak) id<SATVNetworkConfigurationDelegate> configurationDelegate;              //@synthesize configurationDelegate=_configurationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id<SATVNetworkConfigurationDelegate>)configurationDelegate;
-(void)setConfigurationDelegate:(id<SATVNetworkConfigurationDelegate>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)preferredFocusEnvironments;
-(void)_didSelectMenu;
-(SATVButton *)doneButton;
-(void)setDoneButton:(SATVButton *)arg1 ;
-(void)ipEntryViewControllerDidFinish:(id)arg1 ;
-(void)_setupObserversForInterface:(id)arg1 ;
-(TVSEthernetInterface *)activeInterface;
-(void)_teardownObserversForInterface:(id)arg1 ;
-(void)_handleInactiveInterfaceIfNeeded;
-(id)_titleForActiveInterface;
-(void)_doneButtonSelected:(id)arg1 ;
-(long long)_cellAccessoryTypeForConfigurationOption:(unsigned long long)arg1 ;
-(id)_titleForConfigurationOption:(unsigned long long)arg1 ;
-(id)_detailTextForConfigurationOption:(unsigned long long)arg1 ;
-(BOOL)_isCellEnabledForConfigurationOption:(unsigned long long)arg1 ;
-(void)didCompleteNetworkConfigurationWizard:(id)arg1 ;
-(void)didRequestEntryForOption:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCurrentlyEditedConfigurationOption:(unsigned long long)arg1 ;
-(void)setIpEntryCompletionBlock:(id)arg1 ;
-(id)_ipValueForConfigurationOption:(unsigned long long)arg1 ;
-(id)ipEntryCompletionBlock;
-(unsigned long long)currentlyEditedConfigurationOption;
-(void)_setIPValue:(id)arg1 forNetworkConfigurationOption:(unsigned long long)arg2 ;
-(void)_updateTableCellForKeyPath:(id)arg1 ;
-(id)_keyPathForConfigurationOption:(unsigned long long)arg1 ;
-(void)didCancelNetworkConfigurationWizard:(id)arg1 ;
-(void)interfaceDidBecomeInactiveForConfigurationWizard:(id)arg1 ;
-(void)setActiveInterface:(TVSEthernetInterface *)arg1 ;
@end

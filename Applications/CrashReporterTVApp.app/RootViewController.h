/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:08 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/CrashReporterTVApp.app/CrashReporterTVApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CrashReporterTVApp/TableViewController.h>

@class NSArray, NSDateFormatter, UIView;

@interface RootViewController : TableViewController {

	BOOL hasAppeared_;
	BOOL hasShownSafeModeMessage_;
	BOOL hasShownReportCrashMessage_;
	NSArray* availableSocialServices_;
	NSDateFormatter* dateFormatter_;
	UIView* menuContainerView_;
	UIView* menuTintView_;
	UIView* menuView_;

}

@property (nonatomic,readonly) UIView * menuContainerView; 
@property (nonatomic,readonly) UIView * menuTintView; 
@property (nonatomic,readonly) UIView * menuView; 
+(Class)cellClass;
-(void)menuButtonTapped;
-(void)trashButtonTapped;
-(void)layoutMenuContainerView;
-(UIView *)menuTintView;
-(UIView *)menuContainerView;
-(void)shareViaSocialNetwork:(id)arg1 ;
-(id)arrayForSection:(long long)arg1 ;
-(void)collaborateButtonTapped;
-(void)contributeButtonTapped;
-(void)socialButtonTapped;
-(id)titleForEmptyCell;
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)handleTap:(id)arg1 ;
-(UIView *)menuView;
-(id)titleForHeaderInSection:(long long)arg1 ;
-(void)refresh:(id)arg1 ;
@end

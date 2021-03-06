/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:23 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKViewController.h>

@class TSKBundleLoader, TVSettingsFollowUpFacade;

@interface TVSettingsMainViewController : TSKViewController {

	TSKBundleLoader* _developerBundleLoader;
	TVSettingsFollowUpFacade* _followUpFacade;

}

@property (nonatomic,retain) TSKBundleLoader * developerBundleLoader;                //@synthesize developerBundleLoader=_developerBundleLoader - In the implementation block
@property (nonatomic,retain) TVSettingsFollowUpFacade * followUpFacade;              //@synthesize followUpFacade=_followUpFacade - In the implementation block
-(void)dealloc;
-(id)title;
-(id)initWithStyle:(long long)arg1 ;
-(id)loadSettingGroups;
-(TVSettingsFollowUpFacade *)followUpFacade;
-(void)setFollowUpFacade:(TVSettingsFollowUpFacade *)arg1 ;
-(void)_updateDeveloperBundleLoader;
-(id)_supervisionDescription;
-(id)_airPlayViewController;
-(TSKBundleLoader *)developerBundleLoader;
-(void)_sleepNow:(id)arg1 ;
-(void)setDeveloperBundleLoader:(TSKBundleLoader *)arg1 ;
@end


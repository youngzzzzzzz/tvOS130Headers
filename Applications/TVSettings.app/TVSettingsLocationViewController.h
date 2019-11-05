/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKViewController.h>

@class NSArray;

@interface TVSettingsLocationViewController : TSKViewController {

	NSArray* _filteredSectionIndexTitles;

}

@property (nonatomic,copy) NSArray * filteredSectionIndexTitles;              //@synthesize filteredSectionIndexTitles=_filteredSectionIndexTitles - In the implementation block
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)setLocation:(id)arg1 ;
-(id)loadSettingGroups;
-(NSArray *)filteredSectionIndexTitles;
-(void)setFilteredSectionIndexTitles:(NSArray *)arg1 ;
@end

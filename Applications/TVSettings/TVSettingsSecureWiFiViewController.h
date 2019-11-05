/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKViewController.h>

@class TSKSettingItem;

@interface TVSettingsSecureWiFiViewController : TSKViewController {

	TSKSettingItem* _secureWiFiItem;

}

@property (nonatomic,retain) TSKSettingItem * secureWiFiItem;              //@synthesize secureWiFiItem=_secureWiFiItem - In the implementation block
-(void)_updateStatus;
-(id)loadSettingGroups;
-(TSKSettingItem *)secureWiFiItem;
-(void)setSecureWiFiItem:(TSKSettingItem *)arg1 ;
-(void)_loadSecureWiFiProfile:(id)arg1 ;
-(BOOL)_isSecureWiFiProfileLoaded;
-(void)_secureWiFiProfileLoaded:(id)arg1 error:(id)arg2 ;
@end

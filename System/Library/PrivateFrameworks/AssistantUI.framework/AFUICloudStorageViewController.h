/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class AFSettingsConnection;

@interface AFUICloudStorageViewController : PSListController {

	AFSettingsConnection* _settings;

}
-(void)viewDidLoad;
-(id)specifiers;
-(void)didReceiveMemoryWarning;
-(void)handleDisableAndDeleteButtonPress;
-(void)confirmDisableForMultiUserVoiceIdentification;
-(void)confirmDisable;
-(void)_disableAndDeleteCloudSync;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HMSettingGroup;


@protocol HMSettingsOwner
@property (__weak) id<HMSettingsDelegate> delegate; 
@property (readonly) HMSettingGroup * rootGroup; 
@required
-(id<HMSettingsDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(HMSettingGroup *)rootGroup;

@end

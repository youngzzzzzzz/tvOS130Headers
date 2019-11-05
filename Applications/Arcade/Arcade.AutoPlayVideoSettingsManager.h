/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:52:41 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Arcade.app/Arcade
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface Arcade.AutoPlayVideoSettingsManager : NSObject {

	 defaultAutoPlayVideoSetting;
	 reduceMotionSetLastAutoPlayVideoValueKey;
	 lastReduceMotionValueKey;
	 lowPowerModeSetLastAutoPlayVideoValueKey;
	 lastLowPowerModeValueKey;
	 autoPlayVideoSettingKey;
	 userSetAutoPlayVideoSettingKey;
	 lastUserSetAutoPlayVideoValueKey;
	 autoPlayUserSetting;
	 networkInquiry;
	 networkObservation;
	 networkMayUseCellular;
	 fullScreenAudioSettingsTimeoutMinutes;

}
-(id)init;
-(void)dealloc;
-(void)updateAutoPlayVideoSettings;
-(void)restoreFullScreenAudioSettings;
-(void)saveFullScreenAudioSettings;
@end

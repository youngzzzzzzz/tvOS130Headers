/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMSetting.h>
#import <HomeKit/_HMAccesorySettingDelegate.h>
#import <HomeKit/HMFLogging.h>

@class _HMAccessorySetting, HMAccessorySettingGroup, NSString;

@interface HMAccessorySetting : HMSetting <_HMAccesorySettingDelegate, HMFLogging> {

	_HMAccessorySetting* _internal;
	HMAccessorySettingGroup* _group;

}

@property (readonly) _HMAccessorySetting * internal;                 //@synthesize internal=_internal - In the implementation block
@property (__weak) HMAccessorySettingGroup * group;                  //@synthesize group=_group - In the implementation block
@property (copy,readonly) NSString * keyPath; 
@property (readonly) Class valueClass; 
@property (getter=isReflected,readonly) BOOL reflected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)logCategory;
+(id)settingForInternal:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)setGroup:(HMAccessorySettingGroup *)arg1 ;
-(HMAccessorySettingGroup *)group;
-(id)value;
-(NSString *)keyPath;
-(_HMAccessorySetting *)internal;
-(id)initWithInternal:(id)arg1 ;
-(Class)valueClass;
-(BOOL)isWritable;
-(id)logIdentifier;
-(void)updateValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isReflected;
-(void)_settingWillUpdateReflected:(id)arg1 ;
-(void)_settingDidUpdateReflected:(id)arg1 ;
-(void)_settingWillUpdateValue:(id)arg1 ;
-(void)_settingDidUpdateValue:(id)arg1 ;
-(id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 ;
@end

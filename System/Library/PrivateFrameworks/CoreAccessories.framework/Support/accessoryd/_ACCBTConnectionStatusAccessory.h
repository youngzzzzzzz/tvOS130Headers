/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, ACCPlatformBluetoothStatusAccessory;

@interface _ACCBTConnectionStatusAccessory : NSObject {

	NSString* _accessoryUID;
	NSMutableDictionary* _components;
	ACCPlatformBluetoothStatusAccessory* _pluginAccessory;

}

@property (nonatomic,retain) NSString * accessoryUID;                                            //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * components;                                 //@synthesize components=_components - In the implementation block
@property (nonatomic,retain) ACCPlatformBluetoothStatusAccessory * pluginAccessory;              //@synthesize pluginAccessory=_pluginAccessory - In the implementation block
+(id)accessoryList;
-(void)dealloc;
-(NSMutableDictionary *)components;
-(id)initWithUID:(id)arg1 ;
-(NSString *)accessoryUID;
-(void)setAccessoryUID:(NSString *)arg1 ;
-(void)componentUpdate:(id)arg1 ;
-(ACCPlatformBluetoothStatusAccessory *)pluginAccessory;
-(void)setPluginAccessory:(ACCPlatformBluetoothStatusAccessory *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EAWiFiUnconfiguredAccessory : NSObject {

	NSString* _name;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _ssid;
	NSString* _macAddress;
	unsigned long long _properties;

}

@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * manufacturer;               //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy,readonly) NSString * model;                      //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSString * ssid;                       //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,copy,readonly) NSString * macAddress;                 //@synthesize macAddress=_macAddress - In the implementation block
@property (nonatomic,readonly) unsigned long long properties;              //@synthesize properties=_properties - In the implementation block
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)properties;
-(NSString *)model;
-(NSString *)ssid;
-(NSString *)manufacturer;
-(NSString *)macAddress;
-(id)initWithAirPortAssistantWACDevice:(id)arg1 ;
@end

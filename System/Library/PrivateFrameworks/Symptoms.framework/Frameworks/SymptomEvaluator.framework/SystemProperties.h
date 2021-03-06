/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSString, NSNumber;

@interface SystemProperties : NSObject {

	int _dualSIMCapability;
	BOOL _internalBuild;
	BOOL _seedBuild;
	BOOL _carrierBuild;
	BOOL _dualSIMCapable;
	BOOL _dualSIMEnabled;
	BOOL _basebandCapability;
	BOOL _internalBuildDisabledByOverride;
	int _deviceClass;
	NSString* _buildVariant;
	NSString* _productType;
	NSString* _productName;
	NSString* _productVersion;
	NSString* _buildVersion;
	NSString* _buildVersionPrefix;
	NSString* _buildPlatform;
	NSString* _basebandChipset;
	NSNumber* _carrierSeedBuildOverride;
	NSNumber* _seedBuildOverride;

}

@property (nonatomic,readonly) NSString * productType;                          //@synthesize productType=_productType - In the implementation block
@property (nonatomic,readonly) int deviceClass;                                 //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) NSString * deviceClassString; 
@property (nonatomic,readonly) BOOL basebandCapability;                         //@synthesize basebandCapability=_basebandCapability - In the implementation block
@property (nonatomic,readonly) BOOL dualSIMCapable;                             //@synthesize dualSIMCapable=_dualSIMCapable - In the implementation block
@property (nonatomic,readonly) BOOL dualSIMEnabled;                             //@synthesize dualSIMEnabled=_dualSIMEnabled - In the implementation block
@property (nonatomic,readonly) BOOL internalBuild;                              //@synthesize internalBuild=_internalBuild - In the implementation block
@property (nonatomic,readonly) BOOL seedBuild;                                  //@synthesize seedBuild=_seedBuild - In the implementation block
@property (nonatomic,readonly) BOOL carrierBuild;                               //@synthesize carrierBuild=_carrierBuild - In the implementation block
@property (nonatomic,readonly) BOOL customerSeedBuild; 
@property (nonatomic,readonly) BOOL carrierSeedBuild; 
@property (nonatomic,readonly) NSString * productName;                          //@synthesize productName=_productName - In the implementation block
@property (nonatomic,readonly) NSString * productVersion;                       //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,readonly) NSString * buildVersion;                         //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,readonly) NSString * buildVersionPrefix;                   //@synthesize buildVersionPrefix=_buildVersionPrefix - In the implementation block
@property (nonatomic,readonly) NSString * buildPlatform;                        //@synthesize buildPlatform=_buildPlatform - In the implementation block
@property (nonatomic,readonly) NSString * buildVariant;                         //@synthesize buildVariant=_buildVariant - In the implementation block
@property (nonatomic,readonly) NSString * basebandChipset;                      //@synthesize basebandChipset=_basebandChipset - In the implementation block
@property (assign,nonatomic) BOOL internalBuildDisabledByOverride;              //@synthesize internalBuildDisabledByOverride=_internalBuildDisabledByOverride - In the implementation block
@property (nonatomic,retain) NSNumber * carrierSeedBuildOverride;               //@synthesize carrierSeedBuildOverride=_carrierSeedBuildOverride - In the implementation block
@property (nonatomic,retain) NSNumber * seedBuildOverride;                      //@synthesize seedBuildOverride=_seedBuildOverride - In the implementation block
+(id)sharedInstance;
+(int)systemPropertiesDeviceClassFromMGQDeviceClass:(int)arg1 ;
+(void)saveDeviceConfigType:(unsigned long long)arg1 forKey:(CFStringRef)arg2 ;
+(unsigned long long)retrieveDeviceConfigTypeForKey:(CFStringRef)arg1 ;
-(id)description;
-(id)init;
-(NSString *)productName;
-(NSString *)productVersion;
-(NSString *)productType;
-(int)deviceClass;
-(BOOL)internalBuild;
-(BOOL)carrierBuild;
-(NSString *)buildVersion;
-(BOOL)dualSIMEnabled;
-(BOOL)seedBuild;
-(NSNumber *)carrierSeedBuildOverride;
-(void)setCarrierSeedBuildOverride:(NSNumber *)arg1 ;
-(void)setInternalBuildDisabledByOverride:(BOOL)arg1 ;
-(NSNumber *)seedBuildOverride;
-(void)setSeedBuildOverride:(NSNumber *)arg1 ;
-(NSString *)deviceClassString;
-(NSString *)buildVariant;
-(BOOL)carrierSeedBuild;
-(BOOL)customerSeedBuild;
-(BOOL)dualSIMCapable;
-(void)getDualSIMCapability;
-(BOOL)basebandCapability;
-(NSString *)buildVersionPrefix;
-(NSString *)buildPlatform;
-(NSString *)basebandChipset;
-(BOOL)internalBuildDisabledByOverride;
@end


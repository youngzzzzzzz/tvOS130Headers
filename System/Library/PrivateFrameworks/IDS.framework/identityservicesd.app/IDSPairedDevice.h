/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSNumber, NSString, NSUUID, NSData;

@interface IDSPairedDevice : NSObject {

	NSDictionary* _properties;
	NSNumber* _pairingProtocolVersion;
	NSNumber* _minCompatibilityVersion;
	NSNumber* _maxCompatibilityVersion;
	NSNumber* _serviceMinCompatibilityVersion;

}

@property (nonatomic,readonly) NSString * cbuuid; 
@property (nonatomic,readonly) NSUUID * cbuuidUUID; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) NSData * publicClassAKey; 
@property (nonatomic,readonly) NSData * publicClassCKey; 
@property (nonatomic,readonly) NSData * publicClassDKey; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (nonatomic,readonly) NSDictionary * privateData; 
@property (nonatomic,readonly) NSString * buildVersion; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) unsigned pairingProtocolVersion; 
@property (nonatomic,readonly) unsigned minCompatibilityVersion; 
@property (nonatomic,readonly) unsigned maxCompatibilityVersion; 
@property (nonatomic,readonly) unsigned serviceMinCompatibilityVersion; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL supportIPsec; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) BOOL hasAllPublicKeys; 
@property (nonatomic,readonly) BOOL isPairing; 
+(id)iCloudIdentitiesFromIdentities:(id)arg1 ;
+(id)localIdentitiesFromIdentities:(id)arg1 ;
-(id)description;
-(id)initWithProperties:(id)arg1 ;
-(BOOL)isActive;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)uniqueID;
-(id)identities;
-(NSString *)productName;
-(NSString *)productVersion;
-(NSData *)pushToken;
-(NSString *)buildVersion;
-(NSString *)cbuuid;
-(unsigned)pairingProtocolVersion;
-(unsigned)minCompatibilityVersion;
-(unsigned)maxCompatibilityVersion;
-(unsigned)serviceMinCompatibilityVersion;
-(NSDictionary *)privateData;
-(BOOL)isPairing;
-(id)persistedProperties;
-(id)initWithPairedDevice:(id)arg1 isActive:(BOOL)arg2 ;
-(NSData *)publicClassDKey;
-(NSData *)publicClassAKey;
-(NSData *)publicClassCKey;
-(BOOL)supportIPsec;
-(NSUUID *)cbuuidUUID;
-(BOOL)hasAllPublicKeys;
-(id)initWithProperties:(id)arg1 pairingProtocolVersion:(id)arg2 minCompatibilityVersion:(id)arg3 maxCompatibilityVersion:(id)arg4 serviceMinCompatibilityVersion:(id)arg5 ;
-(id)iCloudIdentities;
-(id)initWithCBUUID:(id)arg1 ;
-(id)initWithPairedDevice:(id)arg1 deviceUniqueID:(id)arg2 pairingProtocolVersion:(unsigned)arg3 minCompatibilityVersion:(unsigned)arg4 maxCompatibilityVersion:(unsigned)arg5 serviceMinCompatibilityVersion:(unsigned short)arg6 privateData:(id)arg7 ;
-(id)initWithPairedDevice:(id)arg1 capabilityFlags:(unsigned long long)arg2 ;
-(id)initWithPairedDevice:(id)arg1 deviceInfoPayload:(id)arg2 ;
-(id)initWithPairedDevice:(id)arg1 supportIPsec:(BOOL)arg2 ;
-(id)initWithPairedDevice:(id)arg1 iCloudURIs:(id)arg2 pushToken:(id)arg3 ;
-(id)pairedDeviceWithoutSecuredEncryptionKeys;
-(id)localIdentities;
-(id)iCloudURIs;
@end


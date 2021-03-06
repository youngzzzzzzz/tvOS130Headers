/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelConfigurationBase.h>
#import <RemoteManagementModel/RMModelRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface RMModelDeviceNameDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {

	NSString* _payloadName;
	NSNumber* _payloadAllowDeviceNameModification;

}

@property (nonatomic,copy) NSString * payloadName;                                     //@synthesize payloadName=_payloadName - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowDeviceNameModification;              //@synthesize payloadAllowDeviceNameModification=_payloadAllowDeviceNameModification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 name:(id)arg2 allowDeviceNameModification:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 name:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)assetReferences;
-(void)setPayloadName:(NSString *)arg1 ;
-(NSString *)payloadName;
-(void)setPayloadAllowDeviceNameModification:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowDeviceNameModification;
-(BOOL)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMCommandBase.h>
#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol.h>

@class NSArray, NSString;

@interface CEMManagementRefreshStatusCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {

	NSArray* _payloadIdentifiers;

}

@property (nonatomic,copy) NSArray * payloadIdentifiers;              //@synthesize payloadIdentifiers=_payloadIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg1 withIdentifiers:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)payloadIdentifiers;
-(void)setPayloadIdentifiers:(NSArray *)arg1 ;
-(BOOL)mustBeSupervised;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(int)executionLevel;
@end

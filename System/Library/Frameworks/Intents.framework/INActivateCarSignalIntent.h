/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <Intents/INActivateCarSignalIntentExport.h>

@class INSpeakableString, NSString;

@interface INActivateCarSignalIntent : INIntent <INActivateCarSignalIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * carName; 
@property (nonatomic,readonly) unsigned long long signals; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(id)_metadata;
-(void)_setMetadata:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INSpeakableString *)carName;
-(void)setCarName:(INSpeakableString *)arg1 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(unsigned long long)signals;
-(void)setSignals:(unsigned long long)arg1 ;
-(id)initWithCarName:(id)arg1 signals:(unsigned long long)arg2 ;
@end

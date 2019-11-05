/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INInteractionExport.h>
#import <Intents/INImageProxyInjecting.h>
#import <Intents/INKeyImageProducing.h>
#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class INIntent, INIntentResponse, NSDateInterval, INImage, SAUISnippet, NSUUID, NSString, NSDate, CSSearchableItem;

@interface INInteraction : NSObject <INInteractionExport, INImageProxyInjecting, INKeyImageProducing, NSSecureCoding, NSCopying> {

	INIntent* _intent;
	INIntentResponse* _intentResponse;
	BOOL _donatedBySiri;
	SAUISnippet* _snippet;
	NSUUID* _contextExtensionUUID;
	long long _intentHandlingStatus;
	long long _direction;
	NSDateInterval* _dateInterval;
	NSString* _identifier;
	NSString* _groupIdentifier;

}

@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) NSString * domainIdentifier; 
@property (assign,nonatomic) long long intentHandlingStatus;                                             //@synthesize intentHandlingStatus=_intentHandlingStatus - In the implementation block
@property (setter=_setSnippet:,nonatomic,retain) SAUISnippet * _snippet;                                 //@synthesize snippet=_snippet - In the implementation block
@property (assign,setter=_setDonatedBySiri:,nonatomic) BOOL _donatedBySiri;                              //@synthesize donatedBySiri=_donatedBySiri - In the implementation block
@property (setter=_setIntent:,nonatomic,copy) INIntent * intent;                                         //@synthesize intent=_intent - In the implementation block
@property (setter=_setIntentResponse:,nonatomic,copy) INIntentResponse * intentResponse;                 //@synthesize intentResponse=_intentResponse - In the implementation block
@property (copy,readonly) CSSearchableItem * _searchableItem; 
@property (readonly) unsigned long long _indexingHash; 
@property (setter=_setContextExtensionUUID:,nonatomic,copy) NSUUID * _contextExtensionUUID;              //@synthesize contextExtensionUUID=_contextExtensionUUID - In the implementation block
@property (assign,nonatomic) long long direction;                                                        //@synthesize direction=_direction - In the implementation block
@property (nonatomic,copy) NSDateInterval * dateInterval;                                                //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * groupIdentifier;                                                   //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) INImage * _keyImage; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)deleteAllInteractionsWithCompletion:(/*^block*/id)arg1 ;
+(void)deleteInteractionsWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)deleteInteractionsWithGroupIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
+(unsigned long long)_searchableItemVersion;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(NSString *)domainIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)_init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(double)duration;
-(void)setDate:(NSDate *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(SAUISnippet *)_snippet;
-(NSDateInterval *)dateInterval;
-(void)_commonInit;
-(id)_dictionaryRepresentation;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(INIntent *)intent;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(INImage *)_keyImage;
-(BOOL)_donatedBySiri;
-(NSUUID *)_contextExtensionUUID;
-(INIntentResponse *)intentResponse;
-(id)initWithIntent:(id)arg1 response:(id)arg2 ;
-(void)_setDonatedBySiri:(BOOL)arg1 ;
-(void)donateInteractionWithCompletion:(/*^block*/id)arg1 ;
-(void)_donateInteractionWithBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(CSSearchableItem *)_searchableItem;
-(id)_searchableItemIncludingData:(BOOL)arg1 ;
-(unsigned long long)_indexingHash;
-(id)parameterValueForParameter:(id)arg1 ;
-(void)_setSnippet:(id)arg1 ;
-(void)_setContextExtensionUUID:(id)arg1 ;
-(void)_setIntent:(id)arg1 ;
-(void)_setIntentResponse:(id)arg1 ;
-(long long)intentHandlingStatus;
-(void)setIntentHandlingStatus:(long long)arg1 ;
@end

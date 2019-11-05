/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBVoiceCommandStepInfo.h>
@class NSString;


@protocol _INPBVoiceCommandStepInfo <NSObject>
@property (nonatomic,copy) NSString * applicationIdentifier; 
@property (nonatomic,readonly) BOOL hasApplicationIdentifier; 
@property (assign,nonatomic) int category; 
@property (assign,nonatomic) BOOL hasCategory; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) BOOL hasName; 
@required
-(NSString *)name;
-(void)setName:(id)arg1;
-(int)category;
-(void)setCategory:(int)arg1;
-(NSString *)applicationIdentifier;
-(BOOL)hasName;
-(void)setHasCategory:(BOOL)arg1;
-(BOOL)hasCategory;
-(id)categoryAsString:(int)arg1;
-(int)StringAsCategory:(id)arg1;
-(void)setApplicationIdentifier:(id)arg1;
-(BOOL)hasApplicationIdentifier;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSString;

@interface _INPBVoiceCommandStepInfo : PBCodable <_INPBVoiceCommandStepInfo, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL __encodeLegacyGloryData;
	int _category;
	NSString* _applicationIdentifier;
	NSString* _name;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * applicationIdentifier;                                             //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationIdentifier; 
@property (assign,nonatomic) int category;                                                               //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL hasCategory; 
@property (nonatomic,copy) NSString * name;                                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(int)category;
-(void)setCategory:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)applicationIdentifier;
-(BOOL)hasName;
-(void)setHasCategory:(BOOL)arg1 ;
-(BOOL)hasCategory;
-(id)categoryAsString:(int)arg1 ;
-(int)StringAsCategory:(id)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(BOOL)hasApplicationIdentifier;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
@end

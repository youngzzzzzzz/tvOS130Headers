/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBContactValue.h>
@class NSArray, _INPBContactHandle, NSString, _INPBImageValue, _INPBValueMetadata;


@protocol _INPBContactValue <NSObject>
@property (nonatomic,copy) NSArray * aliases; 
@property (nonatomic,readonly) unsigned long long aliasesCount; 
@property (nonatomic,retain) _INPBContactHandle * contactHandle; 
@property (nonatomic,readonly) BOOL hasContactHandle; 
@property (nonatomic,copy) NSString * customIdentifier; 
@property (nonatomic,readonly) BOOL hasCustomIdentifier; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,readonly) BOOL hasFirstName; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,readonly) BOOL hasFullName; 
@property (nonatomic,copy) NSString * handle; 
@property (nonatomic,readonly) BOOL hasHandle; 
@property (nonatomic,retain) _INPBImageValue * image; 
@property (nonatomic,readonly) BOOL hasImage; 
@property (assign,nonatomic) BOOL isMe; 
@property (assign,nonatomic) BOOL hasIsMe; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,readonly) BOOL hasLastName; 
@property (nonatomic,copy) NSString * middleName; 
@property (nonatomic,readonly) BOOL hasMiddleName; 
@property (nonatomic,copy) NSString * namePrefix; 
@property (nonatomic,readonly) BOOL hasNamePrefix; 
@property (nonatomic,copy) NSString * nameSuffix; 
@property (nonatomic,readonly) BOOL hasNameSuffix; 
@property (nonatomic,copy) NSString * nickName; 
@property (nonatomic,readonly) BOOL hasNickName; 
@property (nonatomic,copy) NSString * phoneticFirstName; 
@property (nonatomic,readonly) BOOL hasPhoneticFirstName; 
@property (nonatomic,copy) NSString * phoneticLastName; 
@property (nonatomic,readonly) BOOL hasPhoneticLastName; 
@property (nonatomic,copy) NSString * phoneticMiddleName; 
@property (nonatomic,readonly) BOOL hasPhoneticMiddleName; 
@property (nonatomic,copy) NSString * phoneticNamePrefix; 
@property (nonatomic,readonly) BOOL hasPhoneticNamePrefix; 
@property (nonatomic,copy) NSString * phoneticNameSuffix; 
@property (nonatomic,readonly) BOOL hasPhoneticNameSuffix; 
@property (nonatomic,copy) NSString * relationship; 
@property (nonatomic,readonly) BOOL hasRelationship; 
@property (assign,nonatomic) int suggestionType; 
@property (assign,nonatomic) BOOL hasSuggestionType; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata; 
@property (nonatomic,readonly) BOOL hasValueMetadata; 
@required
+(Class)aliasesType;
-(NSString *)handle;
-(NSString *)middleName;
-(void)setMiddleName:(id)arg1;
-(NSString *)namePrefix;
-(void)setNamePrefix:(id)arg1;
-(NSString *)nameSuffix;
-(void)setNameSuffix:(id)arg1;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)relationship;
-(_INPBImageValue *)image;
-(void)setImage:(id)arg1;
-(void)setHandle:(id)arg1;
-(void)setFullName:(id)arg1;
-(BOOL)hasFullName;
-(NSString *)fullName;
-(BOOL)isMe;
-(void)setIsMe:(BOOL)arg1;
-(void)setHasIsMe:(BOOL)arg1;
-(BOOL)hasIsMe;
-(BOOL)hasImage;
-(int)suggestionType;
-(void)setSuggestionType:(int)arg1;
-(void)setHasSuggestionType:(BOOL)arg1;
-(BOOL)hasSuggestionType;
-(id)suggestionTypeAsString:(int)arg1;
-(int)StringAsSuggestionType:(id)arg1;
-(void)setFirstName:(id)arg1;
-(void)setLastName:(id)arg1;
-(_INPBValueMetadata *)valueMetadata;
-(void)setValueMetadata:(id)arg1;
-(BOOL)hasValueMetadata;
-(void)clearAliases;
-(void)addAliases:(id)arg1;
-(id)aliasesAtIndex:(unsigned long long)arg1;
-(NSArray *)aliases;
-(void)setAliases:(id)arg1;
-(unsigned long long)aliasesCount;
-(_INPBContactHandle *)contactHandle;
-(void)setContactHandle:(id)arg1;
-(BOOL)hasContactHandle;
-(NSString *)customIdentifier;
-(void)setCustomIdentifier:(id)arg1;
-(BOOL)hasCustomIdentifier;
-(BOOL)hasFirstName;
-(BOOL)hasHandle;
-(BOOL)hasLastName;
-(BOOL)hasMiddleName;
-(BOOL)hasNamePrefix;
-(BOOL)hasNameSuffix;
-(NSString *)nickName;
-(void)setNickName:(id)arg1;
-(BOOL)hasNickName;
-(NSString *)phoneticFirstName;
-(void)setPhoneticFirstName:(id)arg1;
-(BOOL)hasPhoneticFirstName;
-(NSString *)phoneticLastName;
-(void)setPhoneticLastName:(id)arg1;
-(BOOL)hasPhoneticLastName;
-(NSString *)phoneticMiddleName;
-(void)setPhoneticMiddleName:(id)arg1;
-(BOOL)hasPhoneticMiddleName;
-(NSString *)phoneticNamePrefix;
-(void)setPhoneticNamePrefix:(id)arg1;
-(BOOL)hasPhoneticNamePrefix;
-(NSString *)phoneticNameSuffix;
-(void)setPhoneticNameSuffix:(id)arg1;
-(BOOL)hasPhoneticNameSuffix;
-(void)setRelationship:(id)arg1;
-(BOOL)hasRelationship;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSArray, _INPBContactHandle, NSString, _INPBImageValue, _INPBValueMetadata;

@interface _INPBContactValue : PBCodable <_INPBContactValue, NSSecureCoding, NSCopying> {

	SCD_Struct_IN1 _has;
	BOOL _isMe;
	BOOL __encodeLegacyGloryData;
	int _suggestionType;
	NSArray* _aliases;
	_INPBContactHandle* _contactHandle;
	NSString* _customIdentifier;
	NSString* _firstName;
	NSString* _fullName;
	NSString* _handle;
	_INPBImageValue* _image;
	NSString* _lastName;
	NSString* _middleName;
	NSString* _namePrefix;
	NSString* _nameSuffix;
	NSString* _nickName;
	NSString* _phoneticFirstName;
	NSString* _phoneticLastName;
	NSString* _phoneticMiddleName;
	NSString* _phoneticNamePrefix;
	NSString* _phoneticNameSuffix;
	NSString* _relationship;
	_INPBValueMetadata* _valueMetadata;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * aliases;                                                            //@synthesize aliases=_aliases - In the implementation block
@property (nonatomic,readonly) unsigned long long aliasesCount; 
@property (nonatomic,retain) _INPBContactHandle * contactHandle;                                         //@synthesize contactHandle=_contactHandle - In the implementation block
@property (nonatomic,readonly) BOOL hasContactHandle; 
@property (nonatomic,copy) NSString * customIdentifier;                                                  //@synthesize customIdentifier=_customIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomIdentifier; 
@property (nonatomic,copy) NSString * firstName;                                                         //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstName; 
@property (nonatomic,copy) NSString * fullName;                                                          //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) BOOL hasFullName; 
@property (nonatomic,copy) NSString * handle;                                                            //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) BOOL hasHandle; 
@property (nonatomic,retain) _INPBImageValue * image;                                                    //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) BOOL hasImage; 
@property (assign,nonatomic) BOOL isMe;                                                                  //@synthesize isMe=_isMe - In the implementation block
@property (assign,nonatomic) BOOL hasIsMe; 
@property (nonatomic,copy) NSString * lastName;                                                          //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) BOOL hasLastName; 
@property (nonatomic,copy) NSString * middleName;                                                        //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) BOOL hasMiddleName; 
@property (nonatomic,copy) NSString * namePrefix;                                                        //@synthesize namePrefix=_namePrefix - In the implementation block
@property (nonatomic,readonly) BOOL hasNamePrefix; 
@property (nonatomic,copy) NSString * nameSuffix;                                                        //@synthesize nameSuffix=_nameSuffix - In the implementation block
@property (nonatomic,readonly) BOOL hasNameSuffix; 
@property (nonatomic,copy) NSString * nickName;                                                          //@synthesize nickName=_nickName - In the implementation block
@property (nonatomic,readonly) BOOL hasNickName; 
@property (nonatomic,copy) NSString * phoneticFirstName;                                                 //@synthesize phoneticFirstName=_phoneticFirstName - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticFirstName; 
@property (nonatomic,copy) NSString * phoneticLastName;                                                  //@synthesize phoneticLastName=_phoneticLastName - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticLastName; 
@property (nonatomic,copy) NSString * phoneticMiddleName;                                                //@synthesize phoneticMiddleName=_phoneticMiddleName - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticMiddleName; 
@property (nonatomic,copy) NSString * phoneticNamePrefix;                                                //@synthesize phoneticNamePrefix=_phoneticNamePrefix - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticNamePrefix; 
@property (nonatomic,copy) NSString * phoneticNameSuffix;                                                //@synthesize phoneticNameSuffix=_phoneticNameSuffix - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticNameSuffix; 
@property (nonatomic,copy) NSString * relationship;                                                      //@synthesize relationship=_relationship - In the implementation block
@property (nonatomic,readonly) BOOL hasRelationship; 
@property (assign,nonatomic) int suggestionType;                                                         //@synthesize suggestionType=_suggestionType - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionType; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata;                                         //@synthesize valueMetadata=_valueMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasValueMetadata; 
+(BOOL)supportsSecureCoding;
+(Class)aliasesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)handle;
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)namePrefix;
-(void)setNamePrefix:(NSString *)arg1 ;
-(NSString *)nameSuffix;
-(void)setNameSuffix:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)relationship;
-(_INPBImageValue *)image;
-(void)setImage:(_INPBImageValue *)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(BOOL)hasFullName;
-(NSString *)fullName;
-(BOOL)isMe;
-(void)setIsMe:(BOOL)arg1 ;
-(void)setHasIsMe:(BOOL)arg1 ;
-(BOOL)hasIsMe;
-(BOOL)hasImage;
-(int)suggestionType;
-(void)setSuggestionType:(int)arg1 ;
-(void)setHasSuggestionType:(BOOL)arg1 ;
-(BOOL)hasSuggestionType;
-(id)suggestionTypeAsString:(int)arg1 ;
-(int)StringAsSuggestionType:(id)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(_INPBValueMetadata *)valueMetadata;
-(void)setValueMetadata:(_INPBValueMetadata *)arg1 ;
-(BOOL)hasValueMetadata;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(void)clearAliases;
-(void)addAliases:(id)arg1 ;
-(id)aliasesAtIndex:(unsigned long long)arg1 ;
-(NSArray *)aliases;
-(void)setAliases:(NSArray *)arg1 ;
-(unsigned long long)aliasesCount;
-(_INPBContactHandle *)contactHandle;
-(void)setContactHandle:(_INPBContactHandle *)arg1 ;
-(BOOL)hasContactHandle;
-(NSString *)customIdentifier;
-(void)setCustomIdentifier:(NSString *)arg1 ;
-(BOOL)hasCustomIdentifier;
-(BOOL)hasFirstName;
-(BOOL)hasHandle;
-(BOOL)hasLastName;
-(BOOL)hasMiddleName;
-(BOOL)hasNamePrefix;
-(BOOL)hasNameSuffix;
-(NSString *)nickName;
-(void)setNickName:(NSString *)arg1 ;
-(BOOL)hasNickName;
-(NSString *)phoneticFirstName;
-(void)setPhoneticFirstName:(NSString *)arg1 ;
-(BOOL)hasPhoneticFirstName;
-(NSString *)phoneticLastName;
-(void)setPhoneticLastName:(NSString *)arg1 ;
-(BOOL)hasPhoneticLastName;
-(NSString *)phoneticMiddleName;
-(void)setPhoneticMiddleName:(NSString *)arg1 ;
-(BOOL)hasPhoneticMiddleName;
-(NSString *)phoneticNamePrefix;
-(void)setPhoneticNamePrefix:(NSString *)arg1 ;
-(BOOL)hasPhoneticNamePrefix;
-(NSString *)phoneticNameSuffix;
-(void)setPhoneticNameSuffix:(NSString *)arg1 ;
-(BOOL)hasPhoneticNameSuffix;
-(void)setRelationship:(NSString *)arg1 ;
-(BOOL)hasRelationship;
@end


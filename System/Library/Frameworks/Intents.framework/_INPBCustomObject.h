/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBCustomObject.h>
@class NSArray, NSString;


@protocol _INPBCustomObject <NSObject>
@property (nonatomic,copy) NSArray * alternatives; 
@property (nonatomic,readonly) unsigned long long alternativesCount; 
@property (nonatomic,copy) NSString * displayString; 
@property (nonatomic,readonly) BOOL hasDisplayString; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,copy) NSString * pronunciationHint; 
@property (nonatomic,readonly) BOOL hasPronunciationHint; 
@required
+(Class)alternativeType;
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(BOOL)hasIdentifier;
-(NSString *)displayString;
-(void)setDisplayString:(id)arg1;
-(BOOL)hasDisplayString;
-(NSArray *)alternatives;
-(id)alternativeAtIndex:(unsigned long long)arg1;
-(void)clearAlternatives;
-(void)addAlternative:(id)arg1;
-(void)setAlternatives:(id)arg1;
-(unsigned long long)alternativesCount;
-(NSString *)pronunciationHint;
-(void)setPronunciationHint:(id)arg1;
-(BOOL)hasPronunciationHint;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSArray, NSString;

@interface _INPBCustomObject : PBCodable <_INPBCustomObject, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSArray* _alternatives;
	NSString* _displayString;
	NSString* _identifier;
	NSString* _pronunciationHint;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * alternatives;                                                       //@synthesize alternatives=_alternatives - In the implementation block
@property (nonatomic,readonly) unsigned long long alternativesCount; 
@property (nonatomic,copy) NSString * displayString;                                                     //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayString; 
@property (nonatomic,copy) NSString * identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,copy) NSString * pronunciationHint;                                                 //@synthesize pronunciationHint=_pronunciationHint - In the implementation block
@property (nonatomic,readonly) BOOL hasPronunciationHint; 
+(BOOL)supportsSecureCoding;
+(Class)alternativeType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasIdentifier;
-(NSString *)displayString;
-(void)setDisplayString:(NSString *)arg1 ;
-(BOOL)hasDisplayString;
-(NSArray *)alternatives;
-(id)alternativeAtIndex:(unsigned long long)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(void)clearAlternatives;
-(void)addAlternative:(id)arg1 ;
-(void)setAlternatives:(NSArray *)arg1 ;
-(unsigned long long)alternativesCount;
-(NSString *)pronunciationHint;
-(void)setPronunciationHint:(NSString *)arg1 ;
-(BOOL)hasPronunciationHint;
@end


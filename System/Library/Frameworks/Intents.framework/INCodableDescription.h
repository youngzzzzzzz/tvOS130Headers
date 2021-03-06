/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/NSSecureCoding.h>
#import <Intents/INCodableCoding.h>

@class NSMutableDictionary, INCodableLocalizationTable, INSchema, NSString, NSDictionary, NSOrderedSet, NSArray;

@interface INCodableDescription : NSObject <NSSecureCoding, INCodableCoding> {

	NSMutableDictionary* _attributesByName;
	INCodableLocalizationTable* _localizationTable;
	INCodableLocalizationTable* _customLocalizationTable;
	INSchema* _schema;
	NSString* _intentDefinitionNamespace;
	NSString* _className;
	NSString* _typeName;
	NSDictionary* _attributes;
	NSOrderedSet* _displayOrderedAttributes;

}

@property (setter=_setLocalizationTable:,nonatomic,copy) INCodableLocalizationTable * _localizationTable;                          //@synthesize localizationTable=_localizationTable - In the implementation block
@property (setter=_setCustomLocalizationTable:,nonatomic,copy) INCodableLocalizationTable * _customLocalizationTable;              //@synthesize customLocalizationTable=_customLocalizationTable - In the implementation block
@property (assign,nonatomic,__weak) INSchema * schema;                                                                             //@synthesize schema=_schema - In the implementation block
@property (nonatomic,copy) NSString * intentDefinitionNamespace;                                                                   //@synthesize intentDefinitionNamespace=_intentDefinitionNamespace - In the implementation block
@property (nonatomic,copy) NSString * className;                                                                                   //@synthesize className=_className - In the implementation block
@property (nonatomic,copy) NSString * typeName;                                                                                    //@synthesize typeName=_typeName - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;                                                                              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSOrderedSet * displayOrderedAttributes;                                                                //@synthesize displayOrderedAttributes=_displayOrderedAttributes - In the implementation block
@property (nonatomic,readonly) NSArray * referencedCodableEnums; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)attributes;
-(id)dictionaryRepresentation;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(INSchema *)schema;
-(NSString *)className;
-(NSString *)typeName;
-(INCodableLocalizationTable *)_localizationTable;
-(void)setClassName:(NSString *)arg1 ;
-(id)keyPrefix;
-(id)dictionaryKeyForKeyPath:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationForLanguage:(id)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INCodableLocalizationTable *)_customLocalizationTable;
-(id)_ignoredAttributeTags;
-(id)_attributeKeyPrefix;
-(id)_attributesKeyPrefix;
-(id)attributeByKeyPath:(id)arg1 ;
-(id)attributeByName:(id)arg1 ;
-(unsigned long long)highestAttributeTag;
-(NSArray *)referencedCodableEnums;
-(void)_setLocalizationTable:(id)arg1 ;
-(void)_setCustomLocalizationTable:(id)arg1 ;
-(void)setSchema:(INSchema *)arg1 ;
-(NSString *)intentDefinitionNamespace;
-(void)setIntentDefinitionNamespace:(NSString *)arg1 ;
-(void)setTypeName:(NSString *)arg1 ;
-(NSOrderedSet *)displayOrderedAttributes;
-(void)setDisplayOrderedAttributes:(NSOrderedSet *)arg1 ;
@end


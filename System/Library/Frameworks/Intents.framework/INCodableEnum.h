/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>
#import <Intents/INCodableCoding.h>

@class INCodableLocalizationTable, NSString, NSArray;

@interface INCodableEnum : NSObject <NSSecureCoding, NSCopying, INCodableCoding> {

	INCodableLocalizationTable* _localizationTable;
	NSString* _name;
	NSString* _displayName;
	NSString* _displayNameID;
	NSString* _enumNamespace;
	long long _type;
	NSArray* _values;

}

@property (setter=_setLocalizationTable:,nonatomic,copy) INCodableLocalizationTable * _localizationTable;              //@synthesize localizationTable=_localizationTable - In the implementation block
@property (setter=_setEnumNamespace:,nonatomic,copy) NSString * enumNamespace;                                         //@synthesize enumNamespace=_enumNamespace - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                                                            //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayNameID;                                                          //@synthesize displayNameID=_displayNameID - In the implementation block
@property (nonatomic,readonly) long long type;                                                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * values;                                                                  //@synthesize values=_values - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)values;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(NSString *)localizedDisplayName;
-(INCodableLocalizationTable *)_localizationTable;
-(id)keyPrefix;
-(id)dictionaryKeyForKeyPath:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationForLanguage:(id)arg1 ;
-(void)_setLocalizationTable:(id)arg1 ;
-(id)localizedDisplayNameForLanguage:(id)arg1 ;
-(NSString *)enumNamespace;
-(NSString *)displayNameID;
-(id)initWithName:(id)arg1 displayName:(id)arg2 displayNameID:(id)arg3 enumNamespace:(id)arg4 type:(long long)arg5 values:(id)arg6 localizationTable:(id)arg7 ;
-(void)_setEnumNamespace:(id)arg1 ;
@end

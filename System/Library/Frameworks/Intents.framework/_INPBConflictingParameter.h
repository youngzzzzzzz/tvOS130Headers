/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBConflictingParameter.h>
@class NSArray, NSString;


@protocol _INPBConflictingParameter <NSObject>
@property (nonatomic,copy) NSArray * alternateItems; 
@property (nonatomic,readonly) unsigned long long alternateItemsCount; 
@property (nonatomic,copy) NSString * keyPath; 
@property (nonatomic,readonly) BOOL hasKeyPath; 
@required
+(Class)alternateItemsType;
-(NSString *)keyPath;
-(void)setKeyPath:(id)arg1;
-(void)clearAlternateItems;
-(void)addAlternateItems:(id)arg1;
-(id)alternateItemsAtIndex:(unsigned long long)arg1;
-(NSArray *)alternateItems;
-(void)setAlternateItems:(id)arg1;
-(unsigned long long)alternateItemsCount;
-(BOOL)hasKeyPath;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSArray, NSString;

@interface _INPBConflictingParameter : PBCodable <_INPBConflictingParameter, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSArray* _alternateItems;
	NSString* _keyPath;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * alternateItems;                                                     //@synthesize alternateItems=_alternateItems - In the implementation block
@property (nonatomic,readonly) unsigned long long alternateItemsCount; 
@property (nonatomic,copy) NSString * keyPath;                                                           //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyPath; 
+(BOOL)supportsSecureCoding;
+(Class)alternateItemsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyPath;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(void)clearAlternateItems;
-(void)addAlternateItems:(id)arg1 ;
-(id)alternateItemsAtIndex:(unsigned long long)arg1 ;
-(NSArray *)alternateItems;
-(void)setAlternateItems:(NSArray *)arg1 ;
-(unsigned long long)alternateItemsCount;
-(BOOL)hasKeyPath;
@end

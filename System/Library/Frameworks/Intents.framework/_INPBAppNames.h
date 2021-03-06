/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBAppNames.h>
@class NSString;


@protocol _INPBAppNames <NSObject>
@property (nonatomic,copy) NSString * appName; 
@property (nonatomic,readonly) BOOL hasAppName; 
@property (nonatomic,copy) NSString * axSpokenName; 
@property (nonatomic,readonly) BOOL hasAxSpokenName; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,copy) NSString * spotlightName; 
@property (nonatomic,readonly) BOOL hasSpotlightName; 
@required
-(NSString *)displayName;
-(void)setDisplayName:(id)arg1;
-(BOOL)hasDisplayName;
-(NSString *)appName;
-(void)setAppName:(id)arg1;
-(BOOL)hasAppName;
-(NSString *)axSpokenName;
-(void)setAxSpokenName:(id)arg1;
-(BOOL)hasAxSpokenName;
-(NSString *)spotlightName;
-(void)setSpotlightName:(id)arg1;
-(BOOL)hasSpotlightName;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSString;

@interface _INPBAppNames : PBCodable <_INPBAppNames, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSString* _appName;
	NSString* _axSpokenName;
	NSString* _displayName;
	NSString* _spotlightName;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * appName;                                                           //@synthesize appName=_appName - In the implementation block
@property (nonatomic,readonly) BOOL hasAppName; 
@property (nonatomic,copy) NSString * axSpokenName;                                                      //@synthesize axSpokenName=_axSpokenName - In the implementation block
@property (nonatomic,readonly) BOOL hasAxSpokenName; 
@property (nonatomic,copy) NSString * displayName;                                                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,copy) NSString * spotlightName;                                                     //@synthesize spotlightName=_spotlightName - In the implementation block
@property (nonatomic,readonly) BOOL hasSpotlightName; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)hasDisplayName;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(BOOL)hasAppName;
-(NSString *)axSpokenName;
-(void)setAxSpokenName:(NSString *)arg1 ;
-(BOOL)hasAxSpokenName;
-(NSString *)spotlightName;
-(void)setSpotlightName:(NSString *)arg1 ;
-(BOOL)hasSpotlightName;
@end


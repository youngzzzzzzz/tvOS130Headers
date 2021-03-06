/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBSetRadioStationIntent.h>
@class _INPBString, _INPBDouble, _INPBIntentMetadata, _INPBInteger;


@protocol _INPBSetRadioStationIntent <NSObject>
@property (nonatomic,retain) _INPBString * channel; 
@property (nonatomic,readonly) BOOL hasChannel; 
@property (nonatomic,retain) _INPBDouble * frequency; 
@property (nonatomic,readonly) BOOL hasFrequency; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBInteger * presetNumber; 
@property (nonatomic,readonly) BOOL hasPresetNumber; 
@property (assign,nonatomic) int radioType; 
@property (assign,nonatomic) BOOL hasRadioType; 
@property (nonatomic,retain) _INPBString * stationName; 
@property (nonatomic,readonly) BOOL hasStationName; 
@required
-(_INPBString *)channel;
-(void)setChannel:(id)arg1;
-(BOOL)hasChannel;
-(void)setFrequency:(id)arg1;
-(_INPBDouble *)frequency;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(int)radioType;
-(void)setRadioType:(int)arg1;
-(_INPBString *)stationName;
-(void)setStationName:(id)arg1;
-(_INPBInteger *)presetNumber;
-(void)setPresetNumber:(id)arg1;
-(BOOL)hasFrequency;
-(id)radioTypeAsString:(int)arg1;
-(int)StringAsRadioType:(id)arg1;
-(BOOL)hasPresetNumber;
-(BOOL)hasRadioType;
-(void)setHasRadioType:(BOOL)arg1;
-(BOOL)hasStationName;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBString, _INPBDouble, _INPBIntentMetadata, _INPBInteger, NSString;

@interface _INPBSetRadioStationIntent : PBCodable <_INPBSetRadioStationIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL __encodeLegacyGloryData;
	int _radioType;
	_INPBString* _channel;
	_INPBDouble* _frequency;
	_INPBIntentMetadata* _intentMetadata;
	_INPBInteger* _presetNumber;
	_INPBString* _stationName;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBString * channel;                                                      //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) BOOL hasChannel; 
@property (nonatomic,retain) _INPBDouble * frequency;                                                    //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,readonly) BOOL hasFrequency; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBInteger * presetNumber;                                                //@synthesize presetNumber=_presetNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasPresetNumber; 
@property (assign,nonatomic) int radioType;                                                              //@synthesize radioType=_radioType - In the implementation block
@property (assign,nonatomic) BOOL hasRadioType; 
@property (nonatomic,retain) _INPBString * stationName;                                                  //@synthesize stationName=_stationName - In the implementation block
@property (nonatomic,readonly) BOOL hasStationName; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(_INPBString *)channel;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setChannel:(_INPBString *)arg1 ;
-(BOOL)hasChannel;
-(void)setFrequency:(_INPBDouble *)arg1 ;
-(_INPBDouble *)frequency;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(int)radioType;
-(void)setRadioType:(int)arg1 ;
-(_INPBString *)stationName;
-(void)setStationName:(_INPBString *)arg1 ;
-(_INPBInteger *)presetNumber;
-(void)setPresetNumber:(_INPBInteger *)arg1 ;
-(BOOL)hasFrequency;
-(id)radioTypeAsString:(int)arg1 ;
-(int)StringAsRadioType:(id)arg1 ;
-(BOOL)hasPresetNumber;
-(BOOL)hasRadioType;
-(void)setHasRadioType:(BOOL)arg1 ;
-(BOOL)hasStationName;
@end


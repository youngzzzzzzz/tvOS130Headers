/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <SiriInstrumentation/SISchemaClientEventMetadata.h>
@class NSData, NSString;


@protocol SISchemaClientEventMetadata <NSObject>
@property (nonatomic,copy) NSData * turnID; 
@property (nonatomic,copy) NSData * siriDeviceID; 
@property (nonatomic,copy) NSString * eventGeneratedTimestampRefId; 
@property (assign,nonatomic) long long eventGeneratedRelativeToBootTimeTimestampNs; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(NSData *)turnID;
-(void)setTurnID:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)setSiriDeviceID:(id)arg1;
-(void)setEventGeneratedTimestampRefId:(id)arg1;
-(void)setEventGeneratedRelativeToBootTimeTimestampNs:(long long)arg1;
-(NSData *)siriDeviceID;
-(NSString *)eventGeneratedTimestampRefId;
-(long long)eventGeneratedRelativeToBootTimeTimestampNs;

@end

#import <SiriInstrumentation/NSSecureCoding.h>

@class NSData, NSString;

@interface SISchemaClientEventMetadata : PBCodable <SISchemaClientEventMetadata, NSSecureCoding> {

	NSData* _turnID;
	NSData* _siriDeviceID;
	NSString* _eventGeneratedTimestampRefId;
	long long _eventGeneratedRelativeToBootTimeTimestampNs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSData * turnID;                                                      //@synthesize turnID=_turnID - In the implementation block
@property (nonatomic,copy) NSData * siriDeviceID;                                                //@synthesize siriDeviceID=_siriDeviceID - In the implementation block
@property (nonatomic,copy) NSString * eventGeneratedTimestampRefId;                              //@synthesize eventGeneratedTimestampRefId=_eventGeneratedTimestampRefId - In the implementation block
@property (assign,nonatomic) long long eventGeneratedRelativeToBootTimeTimestampNs;              //@synthesize eventGeneratedRelativeToBootTimeTimestampNs=_eventGeneratedRelativeToBootTimeTimestampNs - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)jsonData;
-(NSData *)turnID;
-(void)setTurnID:(NSData *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setSiriDeviceID:(NSData *)arg1 ;
-(void)setEventGeneratedTimestampRefId:(NSString *)arg1 ;
-(void)setEventGeneratedRelativeToBootTimeTimestampNs:(long long)arg1 ;
-(NSData *)siriDeviceID;
-(NSString *)eventGeneratedTimestampRefId;
-(long long)eventGeneratedRelativeToBootTimeTimestampNs;
@end

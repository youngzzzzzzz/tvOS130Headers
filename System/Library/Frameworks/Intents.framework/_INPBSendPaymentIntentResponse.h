/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBSendPaymentIntentResponse.h>
@class _INPBPaymentRecord;


@protocol _INPBSendPaymentIntentResponse <NSObject>
@property (nonatomic,retain) _INPBPaymentRecord * paymentRecord; 
@property (nonatomic,readonly) BOOL hasPaymentRecord; 
@required
-(_INPBPaymentRecord *)paymentRecord;
-(void)setPaymentRecord:(id)arg1;
-(BOOL)hasPaymentRecord;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBPaymentRecord, NSString;

@interface _INPBSendPaymentIntentResponse : PBCodable <_INPBSendPaymentIntentResponse, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	_INPBPaymentRecord* _paymentRecord;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBPaymentRecord * paymentRecord;                                         //@synthesize paymentRecord=_paymentRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasPaymentRecord; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBPaymentRecord *)paymentRecord;
-(void)setPaymentRecord:(_INPBPaymentRecord *)arg1 ;
-(BOOL)hasPaymentRecord;
@end

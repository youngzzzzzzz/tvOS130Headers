/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <CoreWiFi/NSCopying.h>
#import <CoreWiFi/NSSecureCoding.h>

@class NSDate;

@interface CWFLinkQualityMetric : NSObject <NSCopying, NSSecureCoding> {

	float _CCA;
	NSDate* _updatedAt;
	long long _RSSI;
	double _txRate;

}

@property (nonatomic,copy) NSDate * updatedAt;              //@synthesize updatedAt=_updatedAt - In the implementation block
@property (assign,nonatomic) long long RSSI;                //@synthesize RSSI=_RSSI - In the implementation block
@property (assign,nonatomic) double txRate;                 //@synthesize txRate=_txRate - In the implementation block
@property (assign,nonatomic) float CCA;                     //@synthesize CCA=_CCA - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRSSI:(long long)arg1 ;
-(long long)RSSI;
-(double)txRate;
-(void)setTxRate:(double)arg1 ;
-(NSDate *)updatedAt;
-(void)setUpdatedAt:(NSDate *)arg1 ;
-(float)CCA;
-(void)setCCA:(float)arg1 ;
-(BOOL)isEqualToLinkQualityMetric:(id)arg1 ;
@end


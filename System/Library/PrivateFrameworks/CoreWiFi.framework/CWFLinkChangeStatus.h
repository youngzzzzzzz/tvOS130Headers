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

@class NSDate, NSString;

@interface CWFLinkChangeStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _linkDown;
	BOOL _involuntaryLinkDown;
	int _reason;
	float _CCA;
	NSDate* _timestamp;
	NSString* _interfaceName;
	long long _subreason;
	long long _RSSI;
	long long _noise;

}

@property (nonatomic,copy) NSDate * timestamp;                                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                                             //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,getter=isLinkDown,nonatomic) BOOL linkDown;                                    //@synthesize linkDown=_linkDown - In the implementation block
@property (assign,getter=isInvoluntaryLinkDown,nonatomic) BOOL involuntaryLinkDown;              //@synthesize involuntaryLinkDown=_involuntaryLinkDown - In the implementation block
@property (assign,nonatomic) int reason;                                                         //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) long long subreason;                                                //@synthesize subreason=_subreason - In the implementation block
@property (assign,nonatomic) long long RSSI;                                                     //@synthesize RSSI=_RSSI - In the implementation block
@property (assign,nonatomic) long long noise;                                                    //@synthesize noise=_noise - In the implementation block
@property (assign,nonatomic) float CCA;                                                          //@synthesize CCA=_CCA - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)reason;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSDate *)timestamp;
-(void)setReason:(int)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setSubreason:(long long)arg1 ;
-(long long)subreason;
-(void)setNoise:(long long)arg1 ;
-(long long)noise;
-(void)setRSSI:(long long)arg1 ;
-(long long)RSSI;
-(BOOL)isLinkDown;
-(BOOL)isInvoluntaryLinkDown;
-(float)CCA;
-(BOOL)isEqualToLinkChangeStatus:(id)arg1 ;
-(void)setLinkDown:(BOOL)arg1 ;
-(void)setInvoluntaryLinkDown:(BOOL)arg1 ;
-(void)setCCA:(float)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/NSCopying.h>

@class NSString, NSNumber;

@interface GEOUserSessionEntity : NSObject <NSCopying> {

	GEOSessionID _sessionID;
	unsigned _sequenceNumber;
	double _sessionCreationTime;
	double _sessionRelativeTimestamp;

}

@property (nonatomic,readonly) GEOSessionID sessionID;                       //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) unsigned sequenceNumber;                      //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) double sessionCreationTime;                     //@synthesize sessionCreationTime=_sessionCreationTime - In the implementation block
@property (nonatomic,readonly) double sessionRelativeTimestamp;              //@synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp - In the implementation block
@property (nonatomic,readonly) NSString * sessionEntityString; 
@property (nonatomic,readonly) NSString * sessionIDString; 
@property (nonatomic,readonly) NSString * sessionUUIDString; 
@property (nonatomic,readonly) NSNumber * sessionIDLow; 
@property (nonatomic,readonly) NSNumber * sessionIDHigh; 
@property (nonatomic,readonly) NSString * sessionIDLowString; 
@property (nonatomic,readonly) NSString * sessionIDHighString; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(GEOSessionID)sessionID;
-(unsigned)sequenceNumber;
-(double)sessionRelativeTimestamp;
-(void)updateWithSessionEntityString:(id)arg1 ;
-(double)sessionCreationTime;
-(id)initWithSessionID:(GEOSessionID)arg1 sessionCreationTime:(double)arg2 sequenceNumber:(unsigned)arg3 ;
-(id)initWithSessionEntityString:(id)arg1 ;
-(double)sessionRelativeTimestampForEventTime:(double)arg1 ;
-(NSString *)sessionIDString;
-(NSString *)sessionIDHighString;
-(NSString *)sessionIDLowString;
-(BOOL)_isValidSessionIDHighOrLowString:(id)arg1 ;
-(NSString *)sessionEntityString;
-(NSString *)sessionUUIDString;
-(NSNumber *)sessionIDLow;
-(NSNumber *)sessionIDHigh;
-(void)updateSessionIDFromUUIDString:(id)arg1 ;
-(void)setSessionCreationTime:(double)arg1 ;
@end


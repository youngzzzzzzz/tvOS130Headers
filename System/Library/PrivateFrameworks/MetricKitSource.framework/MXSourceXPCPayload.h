/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetricKitSource.framework/MetricKitSource
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricKitSource/NSSecureCoding.h>

@class NSDate, NSDictionary;

@interface MXSourceXPCPayload : NSObject <NSSecureCoding> {

	long long _sourceID;
	NSDate* _datestamp;
	NSDictionary* _metrics;

}

@property (assign) long long sourceID;                  //@synthesize sourceID=_sourceID - In the implementation block
@property (retain) NSDate * datestamp;                  //@synthesize datestamp=_datestamp - In the implementation block
@property (retain) NSDictionary * metrics;              //@synthesize metrics=_metrics - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)metrics;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(long long)sourceID;
-(void)setSourceID:(long long)arg1 ;
-(NSDate *)datestamp;
-(id)initWithSourceID:(long long)arg1 withDateStamp:(id)arg2 andMetrics:(id)arg3 ;
-(void)setDatestamp:(NSDate *)arg1 ;
@end

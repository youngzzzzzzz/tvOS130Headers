/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreParsec/PARRequest.h>
#import <CoreParsec/NSSecureCoding.h>

@class NSDate, NSString;

@interface PARFlightSearchRequest : PARRequest <NSSecureCoding> {

	NSDate* _date;
	NSString* _flightQuery;
	NSString* _appBundleId;

}

@property (nonatomic,copy) NSDate * date;                       //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * flightQuery;              //@synthesize flightQuery=_flightQuery - In the implementation block
@property (nonatomic,copy) NSString * appBundleId;              //@synthesize appBundleId=_appBundleId - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(Class)responseClass;
-(unsigned)nwActivityLabel;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(void)setFlightQuery:(NSString *)arg1 ;
-(NSString *)flightQuery;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTraffic/ATMessage.h>
#import <AirTraffic/NSSecureCoding.h>

@class NSError;

@interface ATResponse : ATMessage <NSSecureCoding> {

	BOOL _partial;
	NSError* _error;

}

@property (assign,getter=isPartial,nonatomic) BOOL partial;              //@synthesize partial=_partial - In the implementation block
@property (nonatomic,retain) NSError * error;                            //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithATPMessage:(id)arg1 ;
-(id)ATPMessage;
-(id)ATPMessageWithPayloadData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isPartial;
-(void)setPartial:(BOOL)arg1 ;
-(id)additionalDescription;
@end

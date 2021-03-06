/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Proximity/Proximity-Structs.h>
#import <Proximity/NSCopying.h>
#import <Proximity/NSSecureCoding.h>

@interface PRAngleMeasurement : NSObject <NSCopying, NSSecureCoding> {

	double _measurement;
	double _uncertainty;

}

@property (nonatomic,readonly) double measurement;              //@synthesize measurement=_measurement - In the implementation block
@property (nonatomic,readonly) double uncertainty;              //@synthesize uncertainty=_uncertainty - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)measurementWithAngle:(double)arg1 uncertainty:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)measurement;
-(double)uncertainty;
-(id)initWithAngle:(double)arg1 uncertainty:(double)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface HMNumberRange : NSObject {

	NSNumber* _minValue;
	NSNumber* _maxValue;

}

@property (nonatomic,readonly) NSNumber * minValue;              //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maxValue;              //@synthesize maxValue=_maxValue - In the implementation block
+(id)numberRangeWithMaxValue:(id)arg1 ;
+(id)numberRangeWithMinValue:(id)arg1 ;
+(id)numberRangeWithMinValue:(id)arg1 maxValue:(id)arg2 ;
-(id)description;
-(NSNumber *)maxValue;
-(NSNumber *)minValue;
-(id)initWithMinValue:(id)arg1 maxValue:(id)arg2 ;
@end


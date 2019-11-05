/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSDate;

@interface MovingAverageEntry : HMFObject {

	NSNumber* _value;
	NSDate* _date;

}

@property (readonly) NSNumber * value;              //@synthesize value=_value - In the implementation block
@property (readonly) NSDate * date;                 //@synthesize date=_date - In the implementation block
-(NSDate *)date;
-(NSNumber *)value;
-(id)initWithValue:(id)arg1 ;
@end

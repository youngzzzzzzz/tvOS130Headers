/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STAlarm;

@interface AFSearchAlarmsRequest : AFSiriRequest {

	long long _options;
	STAlarm* _criteria;

}

@property (assign,nonatomic) long long options;               //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) STAlarm * criteria;              //@synthesize criteria=_criteria - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(id)createResponse;
-(STAlarm *)criteria;
-(void)setCriteria:(STAlarm *)arg1 ;
@end


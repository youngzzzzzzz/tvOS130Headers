/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:25 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettings/TVSettings-Structs.h>
#import <UIKit/UITimingCurveProvider.h>
#import <TVSettings/NSCopying.h>
#import <TVSettings/NSCoding.h>

@class UICubicTimingParameters, UISpringTimingParameters;

@interface TVSWirelessAudioSyncTimingCurveProvider : NSObject <UITimingCurveProvider, NSCopying, NSCoding> {

	long long timingCurveType;
	UICubicTimingParameters* cubicTimingParameters;
	UISpringTimingParameters* springTimingParameters;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long timingCurveType; 
@property (nonatomic,readonly) UICubicTimingParameters * cubicTimingParameters; 
@property (nonatomic,readonly) UISpringTimingParameters * springTimingParameters; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UICubicTimingParameters *)cubicTimingParameters;
-(UISpringTimingParameters *)springTimingParameters;
-(long long)timingCurveType;
-(id)initWithTimingCurveProviderType:(unsigned long long)arg1 ;
@end


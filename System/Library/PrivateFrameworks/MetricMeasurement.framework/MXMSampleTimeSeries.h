/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MXMSampleSet.h>

@interface MXMSampleTimeSeries : MXMSampleSet {

	MXMSampleTimeSeries* _time;

}

@property (nonatomic,retain,readonly) MXMSampleTimeSeries * timeIndex; 
-(id)init;
-(MXMSampleTimeSeries *)timeIndex;
-(void)_appendAbsoluteTime:(unsigned long long)arg1 ;
-(id)initWithAbsoluteTimeSeries:(unsigned long long*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithTimeSeries:(double*)arg1 unit:(id)arg2 length:(unsigned long long)arg3 ;
-(id)initWithContinuousTimeSeries:(unsigned long long*)arg1 length:(unsigned long long)arg2 ;
@end

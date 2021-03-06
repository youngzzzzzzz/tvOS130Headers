/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MROrigamiAnimationPath : NSObject {

	id* _curves;
	double* _keyTimes;
	double* _values;
	long long _length;
	float _timeFirstAtRestValue;

}

@property (nonatomic,readonly) float timeFirstAtRestValue;              //@synthesize timeFirstAtRestValue=_timeFirstAtRestValue - In the implementation block
-(void)dealloc;
-(id)initWithSwingType:(int)arg1 ;
-(float)valueAtTime:(float)arg1 ;
-(float)timeFirstAtRestValue;
-(id)initWithControlPoints:(double*)arg1 keyTimes:(double*)arg2 values:(double*)arg3 length:(long long)arg4 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@class SCRCGestureFinger;

@interface SCRCGestureEvent : NSObject {

	unsigned long long _deviceIdentifier;
	SCRCGestureFinger* _finger[8];
	unsigned long long _fingerCount;
	CGPoint _averageLocation;
	double _time;

}

@property (assign,nonatomic) double time;              //@synthesize time=_time - In the implementation block
-(id)description;
-(void)dealloc;
-(double)time;
-(void)setTime:(double)arg1 ;
-(unsigned long long)deviceIdentifier;
-(id)initWithDeviceIdentifier:(unsigned long long)arg1 ;
-(CGRect)fingerFrame;
-(void)addFingerWithIdentifier:(unsigned long long)arg1 location:(CGPoint)arg2 pressure:(double)arg3 ;
-(void)addStylusWithIdentifier:(unsigned long long)arg1 location:(CGPoint)arg2 pressure:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5 ;
-(void)removeFingerWithIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)fingerCount;
-(id)fingerAtIndex:(unsigned long long)arg1 ;
-(id)fingerWithIdentifier:(unsigned long long)arg1 ;
-(id)fingerWithoutIdentifier:(unsigned long long)arg1 ;
-(id)fingers;
-(CGPoint)averageLocation;
-(CGPoint)balancedLocation;
-(BOOL)isCancelEvent;
-(CGPoint)magneticLocation;
@end

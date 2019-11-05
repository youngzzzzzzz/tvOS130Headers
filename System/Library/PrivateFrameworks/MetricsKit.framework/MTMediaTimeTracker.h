/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface MTMediaTimeTracker : NSObject {

	float _playbackRate;
	NSDate* _date;
	long long _position;

}

@property (nonatomic,retain) NSDate * date;                   //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) long long position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) float playbackRate;              //@synthesize playbackRate=_playbackRate - In the implementation block
-(NSDate *)date;
-(long long)position;
-(void)setDate:(NSDate *)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(void)updatePosition:(unsigned long long)arg1 playbackRate:(float)arg2 ;
-(id)initWithPosition:(unsigned long long)arg1 playbackRate:(float)arg2 ;
-(id)estimatedTimeAtPosition:(unsigned long long)arg1 ;
@end

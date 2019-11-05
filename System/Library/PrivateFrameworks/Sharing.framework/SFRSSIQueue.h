/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Sharing/Sharing-Structs.h>
@interface SFRSSIQueue : NSObject {

	NSMutableArray* _rssiValues;
	NSMutableArray* _tickValues;

}

@property (nonatomic,readonly) double velocity; 
@property (nonatomic,readonly) double velocitySmoothed; 
-(double)velocity;
-(double)velocityFromA:(unsigned long long)arg1 toB:(unsigned long long)arg2 ;
-(void)addSample:(double)arg1 atTicks:(unsigned long long)arg2 ;
-(double)velocitySmoothed;
@end

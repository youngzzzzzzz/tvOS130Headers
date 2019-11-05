/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKPlayerEventMarshaling.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface IKPlayerStateChangeEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	NSMutableDictionary* _mutableProperties;
	long long _state;
	long long _oldState;

}

@property (nonatomic,readonly) long long state;                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long oldState;                     //@synthesize oldState=_oldState - In the implementation block
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double elapsedTime; 
@property (assign,nonatomic) double rate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties; 
+(id)stateNameForState:(long long)arg1 ;
+(long long)stateForStateName:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(long long)state;
-(NSDictionary *)properties;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(void)setElapsedTime:(double)arg1 ;
-(double)elapsedTime;
-(id)initWithState:(long long)arg1 ;
-(id)initWithState:(long long)arg1 oldState:(long long)arg2 ;
-(long long)oldState;
@end

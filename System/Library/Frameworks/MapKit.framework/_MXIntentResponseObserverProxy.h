/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/INIntentResponseObserver.h>

@protocol _MXIntentResponseObserver;
@class NSString;

@interface _MXIntentResponseObserverProxy : NSObject <INIntentResponseObserver> {

	id<_MXIntentResponseObserver> _observer;

}

@property (assign,nonatomic,__weak) id<_MXIntentResponseObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_MXIntentResponseObserver>)observer;
-(void)stopObserving;
-(void)setObserver:(id<_MXIntentResponseObserver>)arg1 ;
-(id)initWithObserver:(id)arg1 ;
-(void)intentResponseDidUpdate:(id)arg1 ;
-(void)intentResponseDidUpdate:(id)arg1 withSerializedCacheItems:(id)arg2 ;
-(void)didReceiveError:(id)arg1 ;
@end


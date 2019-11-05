/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVObservable.h>

@class NSMutableDictionary, NSMapTable, NSString;

@interface TVObservableEventController : NSObject <TVObservable> {

	NSMutableDictionary* _observerRecords;
	NSMapTable* _eventsByObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 forEvent:(id)arg2 ;
-(void)removeObserver:(id)arg1 forEvent:(id)arg2 ;
-(void)dispatchEvent:(id)arg1 sender:(id)arg2 withUserInfo:(id)arg3 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIKeyboardActivityObserving.h>

@class NSArray, NSDate, NSString;

@interface TILaunchServicesLookup : NSObject <TIKeyboardActivityObserving> {

	NSArray* _cache;
	NSDate* _lastCacheUpdate;

}

@property (nonatomic,retain) NSArray * cache;                       //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSDate * lastCacheUpdate;              //@synthesize lastCacheUpdate=_lastCacheUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)lookupAppNames;
+(void)enumerateInstalledApplicationNames:(/*^block*/id)arg1 ;
+(id)genreIDsForApplicationIdentifier:(id)arg1 ;
+(void)disableForTesting:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(NSArray *)cache;
-(id)appNames;
-(void)setCache:(NSArray *)arg1 ;
-(void)resetCache;
-(void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2 ;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(id)tryCache;
-(void)cacheNames:(id)arg1 ;
-(void)enumerateAppNames:(/*^block*/id)arg1 ;
-(NSDate *)lastCacheUpdate;
-(void)setLastCacheUpdate:(NSDate *)arg1 ;
@end

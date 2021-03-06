/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSNotificationCenter : NSObject {

	void* _impl;
	void* _callback;
	void** _pad[11];

}
+(id)defaultCenter;
+(id)_defaultCenterWithoutCreating;
-(void)safari_addObserver:(id)arg1 selector:(SEL)arg2 forUserDefaultKey:(id)arg3 ;
-(void)safari_removeObserver:(id)arg1 forUserDefaultKey:(id)arg2 ;
-(id)safari_addObserverForUserDefaultKey:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)postNotificationName:(id)arg1 ;
-(void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2 ;
-(void)__mainThreadPostNotification:(id)arg1 ;
-(void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)dealloc;
-(BOOL)isEmpty;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)postNotification:(id)arg1 ;
-(id)_initWithCFNotificationCenter:(CFNotificationCenterRef)arg1 ;
-(unsigned long long)_addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 options:(unsigned long long)arg5 ;
-(void)_removeObserver:(unsigned long long)arg1 ;
-(id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
@end


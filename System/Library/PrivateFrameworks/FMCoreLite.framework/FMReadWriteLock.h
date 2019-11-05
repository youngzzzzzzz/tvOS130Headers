/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FMCoreLite/FMCoreLite-Structs.h>
@class NSString;

@interface FMReadWriteLock : NSObject {

	NSString* _lockName;
	opaque_pthread_rwlock_t _lock;

}

@property (nonatomic,retain) NSString * lockName;                       //@synthesize lockName=_lockName - In the implementation block
@property (assign,nonatomic) opaque_pthread_rwlock_t lock;              //@synthesize lock=_lock - In the implementation block
-(id)init;
-(opaque_pthread_rwlock_t)lock;
-(void)setLock:(opaque_pthread_rwlock_t)arg1 ;
-(void)performWithReadLock:(/*^block*/id)arg1 ;
-(void)performWithWriteLock:(/*^block*/id)arg1 ;
-(id)initWithLockName:(id)arg1 ;
-(NSString *)lockName;
-(void)setLockName:(NSString *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/ACAccountStore.h>

@protocol OS_dispatch_queue;
@class NSObject, ACAccount;

@interface PLAccountStore : ACAccountStore {

	NSObject*<OS_dispatch_queue> _queue;
	ACAccount* _cachedPrimaryAppleAccount;

}

@property (__weak,readonly) ACAccount * cachedPrimaryAppleAccount; 
+(id)pl_sharedAccountStore;
-(id)init;
-(void)dealloc;
-(void)accountDidChange:(id)arg1 ;
-(ACAccount *)cachedPrimaryAppleAccount;
-(void)clearCachedProperties;
@end

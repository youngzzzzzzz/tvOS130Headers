/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ICMusicSubscriptionStatusCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _persistenceQueue;
	NSMutableDictionary* _dsidToSubscriptionStatusResponse;

}
+(id)sharedCache;
-(void)dealloc;
-(id)_init;
-(void)_handleSubscriptionStatusChangedDistributedNotification:(id)arg1 ;
-(void)_loadPersistedCacheWithCompletion:(/*^block*/id)arg1 ;
-(void)_getUserIdentityCacheKeyForRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_persistCachePostingGlobalNotification:(BOOL)arg1 ;
-(id)_statusChangeUserInfoForUserIdentity:(id)arg1 oldStatus:(id)arg2 newStatus:(id)arg3 ;
-(void)_postLocalChangeNotificationWithUserInfo:(id)arg1 ;
-(void)getCachedSubscriptionStatusResponseForRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCachedSubscriptionStatusResponse:(id)arg1 forRequestContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCachedSubscriptionStatusResponseNeedsReloadForAllRequestContextsWithCompletion:(/*^block*/id)arg1 ;
-(void)setCachedSubscriptionStatusResponseNeedsReloadForRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

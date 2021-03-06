/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSArray;

@interface RMConfigurationSubscription : NSObject {

	NSObject* _notifyTokenLock;
	BOOL _hasResumed;
	int _notifyToken;
	NSString* _darwinNotificationName;
	NSArray* _types;
	/*^block*/id _notificationHandler;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL hasResumed;                                       //@synthesize hasResumed=_hasResumed - In the implementation block
@property (assign,nonatomic) int notifyToken;                                       //@synthesize notifyToken=_notifyToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * darwinNotificationName;              //@synthesize darwinNotificationName=_darwinNotificationName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * types;                                //@synthesize types=_types - In the implementation block
@property (nonatomic,readonly) id notificationHandler;                              //@synthesize notificationHandler=_notificationHandler - In the implementation block
+(unsigned)_registerForDarwinNotificationWithName:(id)arg1 notifyToken:(int*)arg2 queue:(id)arg3 notificationHandler:(/*^block*/id)arg4 ;
-(id)debugDescription;
-(id)description;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)notifyToken;
-(void)resume;
-(NSArray *)types;
-(void)setNotifyToken:(int)arg1 ;
-(NSString *)darwinNotificationName;
-(id)notificationHandler;
-(id)initWithDarwinNotificationName:(id)arg1 types:(id)arg2 notificationHandler:(/*^block*/id)arg3 ;
-(BOOL)hasResumed;
-(void)setHasResumed:(BOOL)arg1 ;
@end


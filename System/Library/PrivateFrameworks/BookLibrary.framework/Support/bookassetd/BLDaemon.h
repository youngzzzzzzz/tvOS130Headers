/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:43:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/Support/bookassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <bookassetd/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class BLService, NSObject, NSXPCListener, NSString;

@interface BLDaemon : NSObject <NSXPCListenerDelegate> {

	BLService* _libraryService;
	NSObject*<OS_dispatch_queue> _listenersReadyQueue;
	NSObject*<OS_dispatch_queue> _startupQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSXPCListener* _libraryServiceListener;

}

@property (nonatomic,retain) BLService * libraryService;                                    //@synthesize libraryService=_libraryService - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> listenersReadyQueue;              //@synthesize listenersReadyQueue=_listenersReadyQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> startupQueue;                     //@synthesize startupQueue=_startupQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                    //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSXPCListener * libraryServiceListener;                        //@synthesize libraryServiceListener=_libraryServiceListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)daemon;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)startupQueue;
-(void)setStartupQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_setupForNotifications;
-(NSObject*<OS_dispatch_queue>)listenersReadyQueue;
-(void)lrq_setupCacheDelete;
-(void)lrq_setupListeners;
-(void)sq_finishedStartingUp;
-(void)lrq_setupBeforeListenersWithCompletion:(/*^block*/id)arg1 ;
-(BLService *)libraryService;
-(void)setLibraryService:(BLService *)arg1 ;
-(NSXPCListener *)libraryServiceListener;
-(void)setLibraryServiceListener:(NSXPCListener *)arg1 ;
-(void)setListenersReadyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:33 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/NSXPCListenerDelegate.h>
#import <backboardd/NSXPCConnectionDelegate.h>
#import <backboardd/BKSTouchDeliveryPolicyServerInterface.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListener, NSMutableSet, BKSTouchDeliveryPolicy, NSString;

@interface BKTouchDeliveryPolicyServer : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate, BKSTouchDeliveryPolicyServerInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	NSMutableSet* _assertionConnections;
	BKSTouchDeliveryPolicy* _policy;

}

@property (setter=_queue_setPolicy:,retain) BKSTouchDeliveryPolicy * _policy;              //@synthesize policy=_policy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(id)init;
-(void)dealloc;
-(void)run;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BKSTouchDeliveryPolicy *)_policy;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)ipc_addPolicy:(id)arg1 ;
-(id)shouldDeliverTouchesToContextIds:(unsigned*)arg1 count:(long long)arg2 ;
-(BOOL)shouldCancelTouchesDeliveredToContextId:(unsigned)arg1 withInitialTouchTimestamp:(double)arg2 ;
-(void)_queue_setPolicy:(id)arg1 ;
@end

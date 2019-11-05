/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/IOSurface.framework/IOSurface
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
#import <IOSurface/IOSurface-Structs.h>
@class NSMapTable, NSObject;

@interface IOSurfaceRemoteRemoteClient : NSObject {

	int _pid;
	NSMapTable* _ioSurfaceClients;
	NSObject*<OS_xpc_object> _remoteConnection;
	NSObject*<OS_dispatch_queue> _disconnectedQueue;
	/*^block*/id _disconnectedHandler;

}

@property (assign,nonatomic) int pid;                                                     //@synthesize pid=_pid - In the implementation block
@property (nonatomic,retain) NSMapTable * ioSurfaceClients;                               //@synthesize ioSurfaceClients=_ioSurfaceClients - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> remoteConnection;                   //@synthesize remoteConnection=_remoteConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> disconnectedQueue;              //@synthesize disconnectedQueue=_disconnectedQueue - In the implementation block
@property (nonatomic,copy) id disconnectedHandler;                                        //@synthesize disconnectedHandler=_disconnectedHandler - In the implementation block
-(id)description;
-(void)dealloc;
-(id)initWithRemoteConnection:(id)arg1 disconnectedQueue:(id)arg2 disconnectedHandler:(/*^block*/id)arg3 ;
-(int)pid;
-(void)setIoSurfaceClients:(NSMapTable *)arg1 ;
-(void)setDisconnectedQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDisconnectedHandler:(id)arg1 ;
-(void)setRemoteConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setPid:(int)arg1 ;
-(void)_handleError:(id)arg1 ;
-(void)_handleMessage:(id)arg1 ;
-(NSObject*<OS_xpc_object>)remoteConnection;
-(NSMapTable *)ioSurfaceClients;
-(NSObject*<OS_dispatch_queue>)disconnectedQueue;
-(id)disconnectedHandler;
-(BOOL)_removeClient:(unsigned)arg1 ;
-(IOSurfaceClientRef)_getClient:(unsigned)arg1 inboundExtradata:(id)arg2 outboundExtraData:(id*)arg3 ;
-(void)_addClient:(IOSurfaceClientRef)arg1 extraData:(id)arg2 ;
@end

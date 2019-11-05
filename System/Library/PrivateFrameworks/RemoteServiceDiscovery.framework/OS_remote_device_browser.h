/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteServiceDiscovery.framework/RemoteServiceDiscovery
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface OS_remote_device_browser : NSObject {

	BOOL _canceled;
	unsigned _device_type;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _cbq;
	/*^block*/id _callback;

}

@property (assign,nonatomic) unsigned device_type;                             //@synthesize device_type=_device_type - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cbq;                 //@synthesize cbq=_cbq - In the implementation block
@property (assign,nonatomic) BOOL canceled;                                    //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,copy) id callback;                                        //@synthesize callback=_callback - In the implementation block
-(void)dealloc;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(unsigned)device_type;
-(void)setDevice_type:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue>)cbq;
-(void)setCbq:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

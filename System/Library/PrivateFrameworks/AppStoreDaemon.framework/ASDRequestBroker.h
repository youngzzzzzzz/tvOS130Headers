/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSXPCConnection;

@interface ASDRequestBroker : NSObject {

	NSMutableDictionary* _activeRequests;
	NSXPCConnection* _connection;

}

@property (readonly) NSMutableDictionary * activeRequests;              //@synthesize activeRequests=_activeRequests - In the implementation block
@property (retain) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
+(id)interface;
-(id)description;
-(id)init;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(void)markRequestAsComplete:(id)arg1 ;
-(void)markRequestAsActive:(id)arg1 ;
-(void)cancelAllRequestsWithErrorHandler:(/*^block*/id)arg1 ;
-(void)submitRequest:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)_startConnection;
-(NSMutableDictionary *)activeRequests;
@end

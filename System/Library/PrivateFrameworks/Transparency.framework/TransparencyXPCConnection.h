/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface TransparencyXPCConnection : NSObject {

	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)instance;
+(void)invokeXPCWithBlock:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
+(void)removeInstance;
+(void)invokeXPCAsynchronousCallWithBlock:(/*^block*/id)arg1 ;
+(void)invokeXPCSynchronousCallWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(void)createConnection;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:58 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSString;

@interface TXSContext : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_xpc_object> _request;
	NSObject*<OS_xpc_object> _reply;
	NSString* _internalClientDescription;

}

@property (retain) NSObject*<OS_xpc_object> connection;               //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject*<OS_xpc_object> request;                  //@synthesize request=_request - In the implementation block
@property (retain) NSObject*<OS_xpc_object> reply;                    //@synthesize reply=_reply - In the implementation block
@property (retain) NSString * internalClientDescription;              //@synthesize internalClientDescription=_internalClientDescription - In the implementation block
-(NSObject*<OS_xpc_object>)request;
-(void)setRequest:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(NSObject*<OS_xpc_object>)reply;
-(void)setReply:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithRequest:(id)arg1 onConnection:(id)arg2 ;
-(id)copyClientDescription;
-(NSString *)internalClientDescription;
-(void)setInternalClientDescription:(NSString *)arg1 ;
@end


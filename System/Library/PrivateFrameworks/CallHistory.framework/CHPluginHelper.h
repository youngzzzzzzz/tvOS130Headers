/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSXPCInterface;

@interface CHPluginHelper : NSObject {

	NSXPCConnection* _connection;
	NSXPCInterface* _interface;

}
-(id)init;
-(unsigned long long)unreadCallCount;
-(id)recentCallsWithLimitingTypes:(unsigned)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <accessoryd/ACCCommunicationsXPCServerProtocol.h>

@class NSXPCConnection, NSString;

@interface ACCCommunicationsServerRemote : NSObject <ACCCommunicationsXPCServerProtocol> {

	NSXPCConnection* _XPCConnection;

}

@property (nonatomic,readonly) NSXPCConnection * XPCConnection;              //@synthesize XPCConnection=_XPCConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCConnection *)XPCConnection;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)initConnection:(/*^block*/id)arg1 ;
-(void)callStateDidChange:(id)arg1 ;
-(void)commStatusDidChange:(id)arg1 ;
-(void)listUpdate:(id)arg1 forType:(int)arg2 coalesced:(BOOL)arg3 ;
@end


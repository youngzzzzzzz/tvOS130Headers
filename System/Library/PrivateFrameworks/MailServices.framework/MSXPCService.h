/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSXPCInterface, NSXPCConnection;

@interface MSXPCService : NSObject {

	NSLock* _lock;
	NSXPCInterface* _remoteObjectInterface;
	NSXPCConnection* _connection;
	BOOL _shouldLaunchMobileMail;

}

@property (assign,nonatomic) BOOL shouldLaunchMobileMail;              //@synthesize shouldLaunchMobileMail=_shouldLaunchMobileMail - In the implementation block
+(id)remoteProxyForXPCInterface:(id)arg1 shouldLaunchMobileMail:(BOOL)arg2 connectionErrorHandler:(/*^block*/id)arg3 ;
+(id)remoteProxyForXPCInterface:(id)arg1 connectionErrorHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(id)connection;
-(id)initWithRemoteObjectInterface:(id)arg1 ;
-(id)newConnectionForInterface:(id)arg1 ;
-(BOOL)shouldLaunchMobileMail;
-(void)setShouldLaunchMobileMail:(BOOL)arg1 ;
@end

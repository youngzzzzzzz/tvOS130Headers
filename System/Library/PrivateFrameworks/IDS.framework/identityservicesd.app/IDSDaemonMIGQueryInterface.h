/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSXPCConnectionProtocol;
@interface IDSDaemonMIGQueryInterface : NSObject {

	id<IDSXPCConnectionProtocol> _server;
	id _delegate;
	BOOL _shuttingDown;

}

@property (__weak) id<IDSDaemonMIGQueryInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id<IDSDaemonMIGQueryInterfaceDelegate>)delegate;
-(void)setDelegate:(id<IDSDaemonMIGQueryInterfaceDelegate>)arg1 ;
-(void)acceptIncomingGrantRequests;
-(void)denyIncomingGrantRequests;
-(void)__setupServer;
@end

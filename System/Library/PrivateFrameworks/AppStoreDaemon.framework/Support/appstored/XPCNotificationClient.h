/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol XPCNotificationClient <NSObject>
@optional
-(BOOL)hasConnection;

@required
-(void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(/*^block*/id)arg2;
-(void)deliverDialogRequest:(id)arg1 withResultHandler:(/*^block*/id)arg2;
-(void)deliverNotifications:(id)arg1 withBarrierBlock:(/*^block*/id)arg2;
-(void)deliverProgress:(id)arg1 withBarrierBlock:(/*^block*/id)arg2;

@end

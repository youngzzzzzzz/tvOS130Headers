/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:58 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NRLinkDelegate <NSObject>
@optional
-(void)linkPeerIsAsleep:(id)arg1 isAsleep:(BOOL)arg2;

@required
-(void)linkIsAvailable:(id)arg1;
-(void)linkIsReady:(id)arg1;
-(void)linkIsSuspended:(id)arg1;
-(void)linkIsUnavailable:(id)arg1;
-(void)linkDidReceiveData:(id)arg1 data:(id)arg2;

@end

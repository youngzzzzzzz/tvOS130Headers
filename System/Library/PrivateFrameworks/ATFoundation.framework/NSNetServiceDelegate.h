/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSNetServiceDelegate <NSObject>
@optional
-(void)netServiceWillResolve:(id)arg1;
-(void)netService:(id)arg1 didNotResolve:(id)arg2;
-(void)netService:(id)arg1 didNotPublish:(id)arg2;
-(void)netServiceDidStop:(id)arg1;
-(void)netServiceDidResolveAddress:(id)arg1;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
-(void)netServiceWillPublish:(id)arg1;
-(void)netServiceDidPublish:(id)arg1;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;

@end

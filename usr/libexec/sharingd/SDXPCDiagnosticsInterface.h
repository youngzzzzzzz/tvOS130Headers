/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SDXPCDiagnosticsInterface
@required
-(void)bluetoothUserInteraction;
-(void)diagnosticBLEModeWithCompletion:(/*^block*/id)arg1;
-(void)diagnosticControl:(id)arg1 completion:(/*^block*/id)arg2;
-(void)diagnosticMock:(id)arg1 device:(id)arg2 completion:(/*^block*/id)arg3;
-(void)diagnosticMockStart:(/*^block*/id)arg1;
-(void)diagnosticMockStop:(/*^block*/id)arg1;
-(void)diagnosticLogControl:(id)arg1 completion:(/*^block*/id)arg2;
-(void)diagnosticShow:(id)arg1 completion:(/*^block*/id)arg2;
-(void)diagnosticUnlockTestClientWithDevice:(id)arg1;
-(void)diagnosticUnlockTestServer;

@end

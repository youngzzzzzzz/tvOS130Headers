/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:54 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WPAWDLDelegate <NSObject>
@optional
-(void)awdlStartedAdvertising:(id)arg1;
-(void)awdlStoppedAdvertising:(id)arg1;
-(void)awdlAdvertisingPending:(id)arg1;
-(void)awdl:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
-(void)awdlStartedScanning:(id)arg1;
-(void)awdlStoppedScanning:(id)arg1;
-(void)awdl:(id)arg1 failedToStartScanningWithError:(id)arg2;
-(BOOL)awdl:(id)arg1 foundDevice:(id)arg2;
-(void)awdl:(id)arg1 foundDevice:(id)arg2 rssi:(id)arg3;

@required
-(void)awdlDidUpdateState:(id)arg1;

@end


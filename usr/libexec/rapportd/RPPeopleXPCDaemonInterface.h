/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:49 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/rapportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RPPeopleXPCDaemonInterface
@required
-(void)xpcPeopleDiscoveryActivate:(id)arg1 completion:(/*^block*/id)arg2;
-(void)xpcPeopleAddAppleID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)xpcPeopleRemoveAppleID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)xpcPeopleDiscoveryUpdate:(id)arg1;

@end


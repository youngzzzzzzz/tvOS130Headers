/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:49 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/rapportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RPDaemonXPCServerInterface
@required
-(void)getIdentitiesWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2;
-(void)activateAssertionWithIdentifier:(id)arg1;
-(void)diagnosticLogControl:(id)arg1 completion:(/*^block*/id)arg2;
-(void)primaryAccountSignedInWithCompletion:(/*^block*/id)arg1;
-(void)primaryAccountSignedOutWithCompletion:(/*^block*/id)arg1;
-(void)addOrUpdateIdentity:(id)arg1 completion:(/*^block*/id)arg2;
-(void)diagnosticCommand:(id)arg1 params:(id)arg2 completion:(/*^block*/id)arg3;
-(void)diagnosticShow:(id)arg1 level:(int)arg2 completion:(/*^block*/id)arg3;

@end

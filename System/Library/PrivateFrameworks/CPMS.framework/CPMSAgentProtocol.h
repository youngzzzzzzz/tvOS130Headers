/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CPMS.framework/CPMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPMSAgentProtocol <NSObject>
@required
+(BOOL)isCPMSSupported;
+(id)sharedCPMSAgent;
+(id)createCPMSAgentSharedInstance;
-(BOOL)acknowledgePowerBudget:(id)arg1 forClientId:(long long)arg2 error:(id*)arg3;
-(BOOL)registerClientWithDescription:(id)arg1 error:(id*)arg2;
-(id)requestPowerBudget:(id)arg1 forClient:(long long)arg2 error:(id*)arg3;

@end


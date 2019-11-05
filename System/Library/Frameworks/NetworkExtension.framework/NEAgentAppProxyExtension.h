/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEAgentTunnelExtension.h>
#import <NetworkExtension/NEExtensionAppProxyProviderHostDelegate.h>
#import <NetworkExtension/NEFlowDivertPluginDriver.h>

@class NSString;

@interface NEAgentAppProxyExtension : NEAgentTunnelExtension <NEExtensionAppProxyProviderHostDelegate, NEFlowDivertPluginDriver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegateInterface:(unsigned)arg1 ;
-(void)extension:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)connectWithParameters:(id)arg1 ;
-(id)driverInterface;
-(int)requiredEntitlement;
-(id)managerInterface;
@end

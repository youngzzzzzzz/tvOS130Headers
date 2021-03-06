/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDNetworkRouterWANRule.h>
#import <HomeKitDaemon/NSCopying.h>
#import <HomeKitDaemon/HMDTLVProtocol.h>

@class NSString, HMDNetworkRouterIPAddress, HMDNetworkRouterICMPTypeList;

@interface HMDNetworkRouterWANICMPRule : NSObject <HMDNetworkRouterWANRule, NSCopying, HMDTLVProtocol> {

	NSString* _hostDNSName;
	HMDNetworkRouterIPAddress* _hostIPStart;
	HMDNetworkRouterIPAddress* _hostIPEnd;
	HMDNetworkRouterICMPTypeList* _icmpTypes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * hostDNSName;                                //@synthesize hostDNSName=_hostDNSName - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterIPAddress * hostIPStart;               //@synthesize hostIPStart=_hostIPStart - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterIPAddress * hostIPEnd;                 //@synthesize hostIPEnd=_hostIPEnd - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterICMPTypeList * icmpTypes;              //@synthesize icmpTypes=_icmpTypes - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
+(id)ruleFromFirewallRuleWan:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)addTo:(id)arg1 ;
-(HMDNetworkRouterICMPTypeList *)icmpTypes;
-(id)initWithHostDNSName:(id)arg1 hostIPStart:(id)arg2 hostIPEnd:(id)arg3 icmpTypes:(id)arg4 ;
-(void)setHostDNSName:(NSString *)arg1 ;
-(void)setHostIPStart:(HMDNetworkRouterIPAddress *)arg1 ;
-(void)setHostIPEnd:(HMDNetworkRouterIPAddress *)arg1 ;
-(void)setIcmpTypes:(HMDNetworkRouterICMPTypeList *)arg1 ;
-(NSString *)hostDNSName;
-(HMDNetworkRouterIPAddress *)hostIPStart;
-(HMDNetworkRouterIPAddress *)hostIPEnd;
@end


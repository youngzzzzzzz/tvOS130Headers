/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_nexus;
#import <identityservicesd/identityservicesd-Structs.h>
@class NSObject, IDSTransportLevelAgent, NWNetworkAgentRegistration, NSMutableDictionary;

@interface IDSSessionMultiplexer : NSObject {

	NSObject*<OS_nw_nexus> _nexus;
	NEVirtualInterface_sRef _vifRef;
	IDSTransportLevelAgent* _agent;
	NWNetworkAgentRegistration* _registration;
	nexus_controllerRef _osNexusController;
	unsigned char _osNexusName[64];
	unsigned char _osNexusUUID[16];
	NSMutableDictionary* _clientUUIDs;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)removeClient:(id)arg1 ;
-(BOOL)addClient:(id)arg1 ;
-(BOOL)registerClientConnectionTransport:(id)arg1 ;
-(BOOL)unregisterClientConnectionTransport:(id)arg1 ;
@end


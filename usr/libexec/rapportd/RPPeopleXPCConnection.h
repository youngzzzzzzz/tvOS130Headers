/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:49 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/rapportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <rapportd/rapportd-Structs.h>
#import <rapportd/RPPeopleXPCDaemonInterface.h>

@protocol OS_dispatch_queue;
@class RPPeopleDiscovery, RPPeopleDaemon, NSObject, NSXPCConnection;

@interface RPPeopleXPCConnection : NSObject <RPPeopleXPCDaemonInterface> {

	NSMutableDictionary* _discoveredDevices;
	NSMutableDictionary* _discoveredPeople;
	unsigned _discoveryDeviceFlags;
	BOOL _entitled;
	RPPeopleDiscovery* _activatedDiscovery;
	RPPeopleDaemon* _daemon;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSXPCConnection* _xpcCnx;

}

@property (nonatomic,readonly) RPPeopleDiscovery * activatedDiscovery;                //@synthesize activatedDiscovery=_activatedDiscovery - In the implementation block
@property (nonatomic,readonly) RPPeopleDaemon * daemon;                               //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,readonly) BOOL entitled;                                         //@synthesize entitled=_entitled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * xpcCnx;                              //@synthesize xpcCnx=_xpcCnx - In the implementation block
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(RPPeopleDaemon *)daemon;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)connectionInvalidated;
-(NSXPCConnection *)xpcCnx;
-(id)initWithDaemon:(id)arg1 xpcCnx:(id)arg2 ;
-(BOOL)_entitledAndReturnError:(id*)arg1 ;
-(BOOL)entitled;
-(void)xpcPeopleDiscoveryActivate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcPeopleAddAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcPeopleRemoveAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcPeopleDiscoveryUpdate:(id)arg1 ;
-(RPPeopleDiscovery *)activatedDiscovery;
-(void)clientDeviceFound:(id)arg1 report:(BOOL)arg2 ;
-(void)clientDeviceLost:(id)arg1 ;
-(void)clientDeviceChanged:(id)arg1 changes:(unsigned)arg2 ;
-(void)clientPeopleStatusChanged:(unsigned)arg1 ;
@end


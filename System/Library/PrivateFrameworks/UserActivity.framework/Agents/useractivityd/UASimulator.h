/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UACornerActionManagerHandler.h>
#import <useractivityd/UAActivityNotifierProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, UASimulatorController, SFPeerDevice, UASimulatorAdvertiser, UASimulatorReceiver, UASimulatorAdvertisementCreator, NSObject, NSString, NSSet;

@interface UASimulator : UACornerActionManagerHandler <UAActivityNotifierProtocol> {

	unsigned _pairedClientPort;
	int _notifyToken;
	NSMutableSet* _notifiedItems;
	BOOL _activitiesShouldCrossover;
	unsigned _commandPort;
	UASimulatorController* _controller;
	SFPeerDevice* _ourDevice;
	SFPeerDevice* _peeredDevice;
	UASimulatorAdvertiser* _advertiser;
	UASimulatorReceiver* _receiver;
	UASimulatorAdvertisementCreator* _creator;
	NSObject*<OS_dispatch_queue> _dispatchQ;
	NSString* _bootstrapName;

}

@property (retain,readonly) NSObject*<OS_dispatch_queue> dispatchQ;                 //@synthesize dispatchQ=_dispatchQ - In the implementation block
@property (copy,readonly) NSString * bootstrapName;                                 //@synthesize bootstrapName=_bootstrapName - In the implementation block
@property (retain,readonly) UASimulatorController * controller;                     //@synthesize controller=_controller - In the implementation block
@property (retain) SFPeerDevice * ourDevice;                                        //@synthesize ourDevice=_ourDevice - In the implementation block
@property (retain) SFPeerDevice * peeredDevice;                                     //@synthesize peeredDevice=_peeredDevice - In the implementation block
@property (retain,readonly) UASimulatorAdvertiser * advertiser;                     //@synthesize advertiser=_advertiser - In the implementation block
@property (retain,readonly) UASimulatorReceiver * receiver;                         //@synthesize receiver=_receiver - In the implementation block
@property (retain,readonly) UASimulatorAdvertisementCreator * creator;              //@synthesize creator=_creator - In the implementation block
@property (readonly) BOOL activitiesShouldCrossover;                                //@synthesize activitiesShouldCrossover=_activitiesShouldCrossover - In the implementation block
@property (readonly) unsigned commandPort;                                          //@synthesize commandPort=_commandPort - In the implementation block
@property (readonly) unsigned pairedClientPort; 
@property (copy) NSSet * notifiedItems; 
+(id)simulatorWithController:(id)arg1 pairedPort:(unsigned)arg2 childSimPid:(int)arg3 childVersion:(unsigned long long)arg4 ;
+(id)simulatorWithController:(id)arg1 parentSimulatorPortName:(id)arg2 ;
-(void)dealloc;
-(BOOL)resume;
-(BOOL)suspend;
-(BOOL)terminate;
-(id)statusString;
-(BOOL)active;
-(UASimulatorAdvertisementCreator *)creator;
-(UASimulatorController *)controller;
-(id)initWithController:(id)arg1 ;
-(UASimulatorReceiver *)receiver;
-(UASimulatorAdvertiser *)advertiser;
-(NSObject*<OS_dispatch_queue>)dispatchQ;
-(unsigned)pairedClientPort;
-(BOOL)activitiesShouldCrossover;
-(NSSet *)notifiedItems;
-(SFPeerDevice *)peeredDevice;
-(void)setNotifiedItems:(NSSet *)arg1 ;
-(void)setPeeredDevice:(SFPeerDevice *)arg1 ;
-(unsigned)commandPort;
-(NSString *)bootstrapName;
-(BOOL)reconnectToParentSimulator;
-(SFPeerDevice *)ourDevice;
-(void)setSimulatorInFront:(BOOL)arg1 ;
-(void)setOurDevice:(SFPeerDevice *)arg1 ;
@end

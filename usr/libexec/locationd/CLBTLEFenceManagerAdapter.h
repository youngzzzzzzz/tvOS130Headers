/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:47 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <CoreMotion/CLNotifierServiceAdapter.h>
#import <locationd/CLBTLEFenceManagerProtocol.h>

@class NSString;

@interface CLBTLEFenceManagerAdapter : CLNotifierServiceAdapter <CLBTLEFenceManagerProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(BOOL)isSupported;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(void)beginService;
-(void)endService;
-(void)doAsync:(/*^block*/id)arg1 ;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2 ;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1 ;
-(CLBTLEFenceManager*)adaptee;
-(void)simulateBeaconWithProximityUUID:(id)arg1 major:(long long)arg2 minor:(long long)arg3 eventType:(unsigned char)arg4 ;
-(BOOL)syncgetHasMonitoredRegions:(id)arg1 ;
-(void)requestRegionState:(/*^block*/id)arg1 ;
-(void)queryBundleIdentifiersWithEnteredRegionsWithReply:(/*^block*/id)arg1 ;
-(void)addMonitoredRegion:(/*^block*/id)arg1 ;
-(void)removeMonitoredRegion:(/*^block*/id)arg1 ;
-(BOOL)syncgetMonitoredRegions:(list<CLBTLEBeaconRegion_Type::MonitoredRegion, std::__1::allocator<CLBTLEBeaconRegion_Type::MonitoredRegion> >*)arg1 forClient:(id)arg2 ;
@end


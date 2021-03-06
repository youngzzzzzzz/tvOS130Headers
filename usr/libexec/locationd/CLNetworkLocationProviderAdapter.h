/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:44 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <CoreMotion/CLNotifierServiceAdapter.h>
#import <locationd/CLNetworkLocationProviderProtocol.h>

@class NSString;

@interface CLNetworkLocationProviderAdapter : CLNotifierServiceAdapter <CLNetworkLocationProviderProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(void)beginService;
-(void)endService;
-(void)doAsync:(/*^block*/id)arg1 ;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2 ;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1 ;
-(CLNetworkLocationProvider*)adaptee;
-(void)setPrivateMode:(BOOL)arg1 ;
-(BOOL)syncgetMetric:(LocationNetworkQueries*)arg1 ;
-(BOOL)syncgetLocation_GSM:(CLDaemonLocation*)arg1 forCell:(Cell*)arg2 ;
-(BOOL)syncgetLocation_SCDMA:(CLDaemonLocation*)arg1 forCell:(ScdmaCell*)arg2 ;
-(BOOL)syncgetLocation_CDMA:(CLDaemonLocation*)arg1 forCell:(CdmaCell*)arg2 ;
-(BOOL)syncgetLocation_LTE:(CLDaemonLocation*)arg1 forCell:(LteCell*)arg2 ;
-(BOOL)syncgetLocation_CELL:(CLDaemonLocation*)arg1 forCell:(CLCell*)arg2 ;
-(void)setLocation_GSM:(id)arg1 forCell:(/*^block*/id)arg2 ;
-(void)setLocation_SCDMA:(id)arg1 forCell:(/*^block*/id)arg2 ;
-(void)setLocation_CDMA:(id)arg1 forCell:(/*^block*/id)arg2 ;
-(void)setLocation_LTE:(id)arg1 forCell:(/*^block*/id)arg2 ;
-(BOOL)syncgetIsBroadConnection;
-(int)syncgetQueryNearbys:(const CLDaemonLocation*)arg1 forFenceKeys:(const vector<int, std::__1::allocator<int> >*)arg2 ;
-(void)addResponseListener:(CLNetworkLocationServerResponseListener*)arg1 ;
-(void)removeResponseListener:(CLNetworkLocationServerResponseListener*)arg1 ;
-(void)resetRetryCounters:(id)arg1 ;
-(int)syncgetBestMatchLocation:(CLDaemonLocation*)arg1 forCell:(const CLCell*)arg2 ;
-(int)syncgetQueryLocationsForCells:(const vector<CLCell, std::__1::allocator<CLCell> >Ref)arg1 useCache:(BOOL)arg2 ;
-(int)syncgetQueryLocationsForWifis:(const vector<CLMacAddress, std::__1::allocator<CLMacAddress> >*)arg1 useCache:(BOOL)arg2 piggyback:(BOOL)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Proximity/Proximity-Structs.h>
#import <Proximity/PRProximityDeviceProtocol.h>

@protocol OS_os_log;
@class NSUUID, NSObject, NSString;

@interface PRProximitySingleThresholdDevice : NSObject <PRProximityDeviceProtocol> {

	NSObject*<OS_os_log> _logger;
	NSString* _model;
	deque<BtProxData, std::__1::allocator<BtProxData> >* _samples;
	long long _proximity;
	unique_ptr<SingleThresholdProx::Estimator, std::__1::default_delete<SingleThresholdProx::Estimator> >* _estimator;
	long long _sampleCount;
	double _mostRecentSampleTime;
	NSUUID* _peer;

}

@property (readonly) NSUUID * peer;              //@synthesize peer=_peer - In the implementation block
-(id)init;
-(NSUUID *)peer;
-(void)addSample:(BtProxData)arg1 ;
-(id)initWithPeer:(id)arg1 andPeerModel:(id)arg2 withError:(id*)arg3 ;
-(BOOL)proxReady;
-(long long)deviceProximity;
@end

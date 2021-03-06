/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/CoreTelephonyClientDelegate.h>
#import <appstored/CoreTelephonyClientDataDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NWPathEvaluator, CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSString;

@interface NetworkMonitor : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientDataDelegate> {

	int _defaultsToken;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NWPathEvaluator* _pathEvaluator;
	CTXPCServiceSubscriptionContext* _subscriptionContext;
	CoreTelephonyClient* _telephonyClient;
	BOOL _connected;
	BOOL _constrained;
	BOOL _expensive;
	BOOL _roaming;
	long long _interfaceType;

}

@property (getter=isConnected,readonly) BOOL connected;                  //@synthesize connected=_connected - In the implementation block
@property (getter=isConstrained,readonly) BOOL constrained;              //@synthesize constrained=_constrained - In the implementation block
@property (getter=isExpensive,readonly) BOOL expensive;                  //@synthesize expensive=_expensive - In the implementation block
@property (readonly) long long interfaceType;                            //@synthesize interfaceType=_interfaceType - In the implementation block
@property (getter=isRoaming,readonly) BOOL roaming;                      //@synthesize roaming=_roaming - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultMonitor;
-(void)dealloc;
-(BOOL)isExpensive;
-(BOOL)isConstrained;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isConnected;
-(void)activeSubscriptionsDidChange;
-(void)currentDataSimChanged:(id)arg1 ;
-(void)servingNetworkChanged:(id)arg1 ;
-(void)internetDataStatus:(id)arg1 ;
-(long long)interfaceType;
-(BOOL)isRoaming;
-(id)copyCellularNetworkIdentityWithError:(id*)arg1 ;
-(id)initWithPathEvalulator:(id)arg1 ;
-(void)_forcePropertyRefresh;
-(void)_updateRoamingStatusForContext:(id)arg1 ;
-(void)_setPropertiesUsingPath:(id)arg1 ;
@end


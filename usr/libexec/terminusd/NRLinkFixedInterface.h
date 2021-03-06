/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:58 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <terminusd/NRLink.h>
#import <terminusd/NEIKEv2ListenerDelegate.h>

@protocol OS_nw_path_evaluator;
@class NSNumber, NWAddressEndpoint, NEIKEv2Listener, NEIKEv2Session, NSString, NSObject;

@interface NRLinkFixedInterface : NRLink <NEIKEv2ListenerDelegate> {

	BOOL _hasScheduledSendingLocalClassCUnlock;
	NSNumber* _listenerPort;
	NWAddressEndpoint* _localOuterEndpoint;
	NWAddressEndpoint* _remoteOuterEndpoint;
	NEIKEv2Listener* _ikeListener;
	NEIKEv2Session* _ikeSessionClassD;
	NSString* _fixedInterfaceName;
	NSObject*<OS_nw_path_evaluator> _pathEvaluator;

}

@property (nonatomic,retain) NEIKEv2Listener * ikeListener;                              //@synthesize ikeListener=_ikeListener - In the implementation block
@property (nonatomic,retain) NEIKEv2Session * ikeSessionClassD;                          //@synthesize ikeSessionClassD=_ikeSessionClassD - In the implementation block
@property (nonatomic,retain) NSString * fixedInterfaceName;                              //@synthesize fixedInterfaceName=_fixedInterfaceName - In the implementation block
@property (nonatomic,retain) NWAddressEndpoint * localOuterEndpoint;                     //@synthesize localOuterEndpoint=_localOuterEndpoint - In the implementation block
@property (nonatomic,retain) NWAddressEndpoint * remoteOuterEndpoint;                    //@synthesize remoteOuterEndpoint=_remoteOuterEndpoint - In the implementation block
@property (nonatomic,retain) NSNumber * listenerPort;                                    //@synthesize listenerPort=_listenerPort - In the implementation block
@property (assign,nonatomic) BOOL hasScheduledSendingLocalClassCUnlock;                  //@synthesize hasScheduledSendingLocalClassCUnlock=_hasScheduledSendingLocalClassCUnlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path_evaluator> pathEvaluator;              //@synthesize pathEvaluator=_pathEvaluator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)resume;
-(BOOL)suspend;
-(BOOL)start;
-(NSNumber *)listenerPort;
-(void)setListenerPort:(NSNumber *)arg1 ;
-(NSObject*<OS_nw_path_evaluator>)pathEvaluator;
-(unsigned short)metric;
-(void)listener:(id)arg1 receivedNewSession:(id)arg2 ;
-(void)requestConfigurationForListener:(id)arg1 session:(id)arg2 sessionConfig:(id)arg3 childConfig:(id)arg4 validateAuthBlock:(/*^block*/id)arg5 responseBlock:(/*^block*/id)arg6 ;
-(BOOL)cancelWithReason:(id)arg1 ;
-(void)setPathEvaluator:(NSObject*<OS_nw_path_evaluator>)arg1 ;
-(id)copyStatusString;
-(void)invalidateLink;
-(id)copyDescriptionInner;
-(BOOL)sendControlData:(id)arg1 ;
-(void)handleNotifyCode:(unsigned short)arg1 payload:(id)arg2 ;
-(NWAddressEndpoint *)localOuterEndpoint;
-(void)setLocalOuterEndpoint:(NWAddressEndpoint *)arg1 ;
-(NWAddressEndpoint *)remoteOuterEndpoint;
-(void)setRemoteOuterEndpoint:(NWAddressEndpoint *)arg1 ;
-(NEIKEv2Listener *)ikeListener;
-(void)setIkeListener:(NEIKEv2Listener *)arg1 ;
-(id*)ikeSessionPointerForDataProtectionClass:(unsigned char)arg1 ;
-(void)invalidateIKESessionForClass:(unsigned char)arg1 ;
-(NEIKEv2Session *)ikeSessionClassD;
-(void)setIkeSessionClassD:(NEIKEv2Session *)arg1 ;
-(id)initLinkWithQueue:(id)arg1 linkDelegate:(id)arg2 nrUUID:(id)arg3 fixedInterfaceName:(id)arg4 localOuterEndpoint:(id)arg5 remoteOuterEndpoint:(id)arg6 listenerPort:(id)arg7 ;
-(void)invalidateIKESessionClassD;
-(void)restartIKESessionForDataProtectionClass:(unsigned char)arg1 ;
-(void)setupIKECallbacks:(unsigned char)arg1 ;
-(void)setupIPsecInitiatorIfNecessary:(unsigned char)arg1 ;
-(NSString *)fixedInterfaceName;
-(void)setFixedInterfaceName:(NSString *)arg1 ;
-(BOOL)hasScheduledSendingLocalClassCUnlock;
-(void)setHasScheduledSendingLocalClassCUnlock:(BOOL)arg1 ;
@end


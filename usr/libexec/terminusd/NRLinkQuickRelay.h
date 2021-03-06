/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:58 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <terminusd/terminusd-Structs.h>
#import <terminusd/NRLink.h>
#import <terminusd/IDSServiceDelegate.h>
#import <terminusd/IDSSessionDelegate.h>
#import <terminusd/NENexusDelegate.h>
#import <terminusd/NEIKEv2PacketDelegate.h>
#import <terminusd/NEIKEv2ListenerDelegate.h>

@protocol NEIKEv2PacketReceiver, OS_dispatch_source, OS_dispatch_group, OS_nw_path_evaluator;
@class IDSService, IDSSession, NSString, NSDate, NWDatagramConnection, NEIKEv2Listener, NEIKEv2Session, NEIPsecNexus, NSObject, NSMutableArray, NRAnalyticsCmpnLinkQuickRelay;

@interface NRLinkQuickRelay : NRLink <IDSServiceDelegate, IDSSessionDelegate, NENexusDelegate, NEIKEv2PacketDelegate, NEIKEv2ListenerDelegate> {

	BOOL _dNexusReadSourceSuspended;
	BOOL _dNexusWriteSourceSuspended;
	BOOL _hasPendingInputAvailable;
	BOOL _idsSessionStarted;
	BOOL _invitationInProgress;
	BOOL _isResponder;
	BOOL _addedConnectionStateObserver;
	BOOL _currentlyCreatingIDSSession;
	BOOL _idsSessionIsIncoming;
	unsigned char _invitationRetryCounter;
	unsigned char _ikeClassDRetryCounter;
	unsigned char _ikeClassCRetryCounter;
	BOOL _resumeRequested;
	BOOL _shouldCancelOnSuspend;
	BOOL _ikeSessionTimeoutScheduledOnce;
	IDSService* _idsService;
	IDSSession* _idsSession;
	NSString* _idsDestination;
	NSDate* _idsSessionStartTime;
	NWDatagramConnection* _connection;
	NEIKEv2Listener* _ikeListener;
	NEIKEv2Session* _ikeSessionClassD;
	NEIKEv2Session* _ikeSessionClassC;
	NEIPsecNexus* _packetNexus;
	id<NEIKEv2PacketReceiver> _ikePacketReceiver;
	channelRef _nexusChannel;
	channel_ring_descRef _nexusInputRing;
	channel_ring_descRef _nexusOutputRing;
	NSObject*<OS_dispatch_source> _dNexusReadSource;
	NSObject*<OS_dispatch_source> _dNexusWriteSource;
	NSObject*<OS_dispatch_group> _nexusGroup;
	NSMutableArray* _receivedDatagrams;
	NSDate* _ikeClassDEstablishedTime;
	NSDate* _ikeClassCEstablishedTime;
	unsigned long long _sessionInvitationCounter;
	unsigned long long _lastRecordedSessionInvitationCounter;
	unsigned long long _bytesToQRBeforeSend;
	unsigned long long _bytesToQRSent;
	unsigned long long _bytesToQRSendFailed;
	unsigned long long _bytesFromQR;
	unsigned long long _lastRecordedBytesToQRSent;
	unsigned long long _lastRecordedBytesFromQR;
	unsigned long long _bytesFromNexus;
	unsigned long long _bytesToNexus;
	unsigned long long _nexusInputAvailableCount;
	unsigned long long _nexusOutputAvailableCount;
	unsigned long long _sentIKEv2PointToPoint;
	unsigned long long _recvIKEv2PointToPoint;
	unsigned long long _sentUncompressedIP;
	unsigned long long _sentEncapsulated6LoWPAN;
	unsigned long long _sentKnownIPv6Hdr_ESP;
	unsigned long long _sentKnownIPv6Hdr_ESP_ECT0;
	unsigned long long _sentKnownIPv6Hdr_ESP_ClassC;
	unsigned long long _sentKnownIPv6Hdr_ESP_ClassC_ECT0;
	unsigned long long _sentKnownIPv6Hdr_TCP;
	unsigned long long _sentKnownIPv6Hdr_TCP_ECT0;
	unsigned long long _recvUncompressedIP;
	unsigned long long _recvEncapsulated6LoWPAN;
	unsigned long long _recvKnownIPv6Hdr_ESP;
	unsigned long long _recvKnownIPv6Hdr_ESP_ECT0;
	unsigned long long _recvKnownIPv6Hdr_ESP_ClassC;
	unsigned long long _recvKnownIPv6Hdr_ESP_ClassC_ECT0;
	unsigned long long _recvKnownIPv6Hdr_TCP;
	unsigned long long _recvKnownIPv6Hdr_TCP_ECT0;
	NSObject*<OS_dispatch_source> _linkIdleTimerSource;
	NSObject*<OS_dispatch_source> _ikeSessionTimeoutSource;
	NSMutableArray* _receivedIKEPackets;
	NSObject*<OS_nw_path_evaluator> _pathEvaluator;
	NRAnalyticsCmpnLinkQuickRelay* _linkAnalytics;
	in6_addr _localAddrClassD;
	in6_addr _remoteAddrClassD;

}

@property (nonatomic,retain) IDSService * idsService;                                              //@synthesize idsService=_idsService - In the implementation block
@property (nonatomic,retain) IDSSession * idsSession;                                              //@synthesize idsSession=_idsSession - In the implementation block
@property (nonatomic,retain) NSString * idsDestination;                                            //@synthesize idsDestination=_idsDestination - In the implementation block
@property (nonatomic,retain) NSDate * idsSessionStartTime;                                         //@synthesize idsSessionStartTime=_idsSessionStartTime - In the implementation block
@property (nonatomic,retain) NWDatagramConnection * connection;                                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NEIKEv2Listener * ikeListener;                                        //@synthesize ikeListener=_ikeListener - In the implementation block
@property (nonatomic,retain) NEIKEv2Session * ikeSessionClassD;                                    //@synthesize ikeSessionClassD=_ikeSessionClassD - In the implementation block
@property (nonatomic,retain) NEIKEv2Session * ikeSessionClassC;                                    //@synthesize ikeSessionClassC=_ikeSessionClassC - In the implementation block
@property (nonatomic,retain) NEIPsecNexus * packetNexus;                                           //@synthesize packetNexus=_packetNexus - In the implementation block
@property (nonatomic,retain) id<NEIKEv2PacketReceiver> ikePacketReceiver;                          //@synthesize ikePacketReceiver=_ikePacketReceiver - In the implementation block
@property (assign,nonatomic) channelRef nexusChannel;                                              //@synthesize nexusChannel=_nexusChannel - In the implementation block
@property (assign,nonatomic) channel_ring_descRef nexusInputRing;                                  //@synthesize nexusInputRing=_nexusInputRing - In the implementation block
@property (assign,nonatomic) channel_ring_descRef nexusOutputRing;                                 //@synthesize nexusOutputRing=_nexusOutputRing - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> dNexusReadSource;                       //@synthesize dNexusReadSource=_dNexusReadSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> dNexusWriteSource;                      //@synthesize dNexusWriteSource=_dNexusWriteSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> nexusGroup;                              //@synthesize nexusGroup=_nexusGroup - In the implementation block
@property (assign,nonatomic) BOOL dNexusReadSourceSuspended;                                       //@synthesize dNexusReadSourceSuspended=_dNexusReadSourceSuspended - In the implementation block
@property (assign,nonatomic) BOOL dNexusWriteSourceSuspended;                                      //@synthesize dNexusWriteSourceSuspended=_dNexusWriteSourceSuspended - In the implementation block
@property (nonatomic,retain) NSMutableArray * receivedDatagrams;                                   //@synthesize receivedDatagrams=_receivedDatagrams - In the implementation block
@property (assign,nonatomic) BOOL hasPendingInputAvailable;                                        //@synthesize hasPendingInputAvailable=_hasPendingInputAvailable - In the implementation block
@property (nonatomic,retain) NSDate * ikeClassDEstablishedTime;                                    //@synthesize ikeClassDEstablishedTime=_ikeClassDEstablishedTime - In the implementation block
@property (nonatomic,retain) NSDate * ikeClassCEstablishedTime;                                    //@synthesize ikeClassCEstablishedTime=_ikeClassCEstablishedTime - In the implementation block
@property (assign,nonatomic) BOOL idsSessionStarted;                                               //@synthesize idsSessionStarted=_idsSessionStarted - In the implementation block
@property (assign,nonatomic) BOOL invitationInProgress;                                            //@synthesize invitationInProgress=_invitationInProgress - In the implementation block
@property (assign,nonatomic) unsigned long long sessionInvitationCounter;                          //@synthesize sessionInvitationCounter=_sessionInvitationCounter - In the implementation block
@property (assign,nonatomic) unsigned long long lastRecordedSessionInvitationCounter;              //@synthesize lastRecordedSessionInvitationCounter=_lastRecordedSessionInvitationCounter - In the implementation block
@property (assign,nonatomic) unsigned long long bytesToQRBeforeSend;                               //@synthesize bytesToQRBeforeSend=_bytesToQRBeforeSend - In the implementation block
@property (assign,nonatomic) unsigned long long bytesToQRSent;                                     //@synthesize bytesToQRSent=_bytesToQRSent - In the implementation block
@property (assign,nonatomic) unsigned long long bytesToQRSendFailed;                               //@synthesize bytesToQRSendFailed=_bytesToQRSendFailed - In the implementation block
@property (assign,nonatomic) unsigned long long bytesFromQR;                                       //@synthesize bytesFromQR=_bytesFromQR - In the implementation block
@property (assign,nonatomic) unsigned long long lastRecordedBytesToQRSent;                         //@synthesize lastRecordedBytesToQRSent=_lastRecordedBytesToQRSent - In the implementation block
@property (assign,nonatomic) unsigned long long lastRecordedBytesFromQR;                           //@synthesize lastRecordedBytesFromQR=_lastRecordedBytesFromQR - In the implementation block
@property (assign,nonatomic) unsigned long long bytesFromNexus;                                    //@synthesize bytesFromNexus=_bytesFromNexus - In the implementation block
@property (assign,nonatomic) unsigned long long bytesToNexus;                                      //@synthesize bytesToNexus=_bytesToNexus - In the implementation block
@property (assign,nonatomic) unsigned long long nexusInputAvailableCount;                          //@synthesize nexusInputAvailableCount=_nexusInputAvailableCount - In the implementation block
@property (assign,nonatomic) unsigned long long nexusOutputAvailableCount;                         //@synthesize nexusOutputAvailableCount=_nexusOutputAvailableCount - In the implementation block
@property (assign,nonatomic) unsigned long long sentIKEv2PointToPoint;                             //@synthesize sentIKEv2PointToPoint=_sentIKEv2PointToPoint - In the implementation block
@property (assign,nonatomic) unsigned long long recvIKEv2PointToPoint;                             //@synthesize recvIKEv2PointToPoint=_recvIKEv2PointToPoint - In the implementation block
@property (assign,nonatomic) unsigned long long sentUncompressedIP;                                //@synthesize sentUncompressedIP=_sentUncompressedIP - In the implementation block
@property (assign,nonatomic) unsigned long long sentEncapsulated6LoWPAN;                           //@synthesize sentEncapsulated6LoWPAN=_sentEncapsulated6LoWPAN - In the implementation block
@property (assign,nonatomic) unsigned long long sentKnownIPv6Hdr_ESP;                              //@synthesize sentKnownIPv6Hdr_ESP=_sentKnownIPv6Hdr_ESP - In the implementation block
@property (assign,nonatomic) unsigned long long sentKnownIPv6Hdr_ESP_ECT0;                         //@synthesize sentKnownIPv6Hdr_ESP_ECT0=_sentKnownIPv6Hdr_ESP_ECT0 - In the implementation block
@property (assign,nonatomic) unsigned long long sentKnownIPv6Hdr_ESP_ClassC;                       //@synthesize sentKnownIPv6Hdr_ESP_ClassC=_sentKnownIPv6Hdr_ESP_ClassC - In the implementation block
@property (assign,nonatomic) unsigned long long sentKnownIPv6Hdr_ESP_ClassC_ECT0;                  //@synthesize sentKnownIPv6Hdr_ESP_ClassC_ECT0=_sentKnownIPv6Hdr_ESP_ClassC_ECT0 - In the implementation block
@property (assign,nonatomic) unsigned long long sentKnownIPv6Hdr_TCP;                              //@synthesize sentKnownIPv6Hdr_TCP=_sentKnownIPv6Hdr_TCP - In the implementation block
@property (assign,nonatomic) unsigned long long sentKnownIPv6Hdr_TCP_ECT0;                         //@synthesize sentKnownIPv6Hdr_TCP_ECT0=_sentKnownIPv6Hdr_TCP_ECT0 - In the implementation block
@property (assign,nonatomic) unsigned long long recvUncompressedIP;                                //@synthesize recvUncompressedIP=_recvUncompressedIP - In the implementation block
@property (assign,nonatomic) unsigned long long recvEncapsulated6LoWPAN;                           //@synthesize recvEncapsulated6LoWPAN=_recvEncapsulated6LoWPAN - In the implementation block
@property (assign,nonatomic) unsigned long long recvKnownIPv6Hdr_ESP;                              //@synthesize recvKnownIPv6Hdr_ESP=_recvKnownIPv6Hdr_ESP - In the implementation block
@property (assign,nonatomic) unsigned long long recvKnownIPv6Hdr_ESP_ECT0;                         //@synthesize recvKnownIPv6Hdr_ESP_ECT0=_recvKnownIPv6Hdr_ESP_ECT0 - In the implementation block
@property (assign,nonatomic) unsigned long long recvKnownIPv6Hdr_ESP_ClassC;                       //@synthesize recvKnownIPv6Hdr_ESP_ClassC=_recvKnownIPv6Hdr_ESP_ClassC - In the implementation block
@property (assign,nonatomic) unsigned long long recvKnownIPv6Hdr_ESP_ClassC_ECT0;                  //@synthesize recvKnownIPv6Hdr_ESP_ClassC_ECT0=_recvKnownIPv6Hdr_ESP_ClassC_ECT0 - In the implementation block
@property (assign,nonatomic) unsigned long long recvKnownIPv6Hdr_TCP;                              //@synthesize recvKnownIPv6Hdr_TCP=_recvKnownIPv6Hdr_TCP - In the implementation block
@property (assign,nonatomic) unsigned long long recvKnownIPv6Hdr_TCP_ECT0;                         //@synthesize recvKnownIPv6Hdr_TCP_ECT0=_recvKnownIPv6Hdr_TCP_ECT0 - In the implementation block
@property (assign,nonatomic) BOOL isResponder;                                                     //@synthesize isResponder=_isResponder - In the implementation block
@property (assign,nonatomic) BOOL addedConnectionStateObserver;                                    //@synthesize addedConnectionStateObserver=_addedConnectionStateObserver - In the implementation block
@property (assign,nonatomic) BOOL currentlyCreatingIDSSession;                                     //@synthesize currentlyCreatingIDSSession=_currentlyCreatingIDSSession - In the implementation block
@property (assign,nonatomic) BOOL idsSessionIsIncoming;                                            //@synthesize idsSessionIsIncoming=_idsSessionIsIncoming - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> linkIdleTimerSource;                    //@synthesize linkIdleTimerSource=_linkIdleTimerSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> ikeSessionTimeoutSource;                //@synthesize ikeSessionTimeoutSource=_ikeSessionTimeoutSource - In the implementation block
@property (nonatomic,retain) NSMutableArray * receivedIKEPackets;                                  //@synthesize receivedIKEPackets=_receivedIKEPackets - In the implementation block
@property (assign,nonatomic) unsigned char invitationRetryCounter;                                 //@synthesize invitationRetryCounter=_invitationRetryCounter - In the implementation block
@property (assign,nonatomic) unsigned char ikeClassDRetryCounter;                                  //@synthesize ikeClassDRetryCounter=_ikeClassDRetryCounter - In the implementation block
@property (assign,nonatomic) unsigned char ikeClassCRetryCounter;                                  //@synthesize ikeClassCRetryCounter=_ikeClassCRetryCounter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_path_evaluator> pathEvaluator;                        //@synthesize pathEvaluator=_pathEvaluator - In the implementation block
@property (assign,nonatomic) in6_addr localAddrClassD;                                             //@synthesize localAddrClassD=_localAddrClassD - In the implementation block
@property (assign,nonatomic) in6_addr remoteAddrClassD;                                            //@synthesize remoteAddrClassD=_remoteAddrClassD - In the implementation block
@property (assign,nonatomic) BOOL resumeRequested;                                                 //@synthesize resumeRequested=_resumeRequested - In the implementation block
@property (nonatomic,retain) NRAnalyticsCmpnLinkQuickRelay * linkAnalytics;                        //@synthesize linkAnalytics=_linkAnalytics - In the implementation block
@property (assign,nonatomic) BOOL shouldCancelOnSuspend;                                           //@synthesize shouldCancelOnSuspend=_shouldCancelOnSuspend - In the implementation block
@property (assign,nonatomic) BOOL ikeSessionTimeoutScheduledOnce;                                  //@synthesize ikeSessionTimeoutScheduledOnce=_ikeSessionTimeoutScheduledOnce - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setConnection:(NWDatagramConnection *)arg1 ;
-(BOOL)resume;
-(BOOL)suspend;
-(BOOL)start;
-(NWDatagramConnection *)connection;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSObject*<OS_nw_path_evaluator>)pathEvaluator;
-(unsigned short)metric;
-(void)invalidateConnection;
-(void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withOptions:(id)arg5 ;
-(void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 ;
-(void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 ;
-(void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2 ;
-(void)sessionStarted:(id)arg1 ;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(void)session:(id)arg1 didReceiveData:(id)arg2 ;
-(NSString *)idsDestination;
-(void)setIdsDestination:(NSString *)arg1 ;
-(void)sendInvitation;
-(void)acceptNewFlow:(id)arg1 fromNexus:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)listener:(id)arg1 receivedNewSession:(id)arg2 ;
-(void)requestConfigurationForListener:(id)arg1 session:(id)arg2 sessionConfig:(id)arg3 childConfig:(id)arg4 validateAuthBlock:(/*^block*/id)arg5 responseBlock:(/*^block*/id)arg6 ;
-(void)setPacketReceiver:(id)arg1 ;
-(BOOL)sendPacketData:(id)arg1 ;
-(void)handleRequestToActivateNexus:(id)arg1 fromFlow:(id)arg2 ;
-(IDSService *)idsService;
-(void)setIdsService:(IDSService *)arg1 ;
-(BOOL)cancelWithReason:(id)arg1 ;
-(IDSSession *)idsSession;
-(void)setIdsSession:(IDSSession *)arg1 ;
-(BOOL)idsSessionStarted;
-(void)setIdsSessionStarted:(BOOL)arg1 ;
-(void)setPathEvaluator:(NSObject*<OS_nw_path_evaluator>)arg1 ;
-(id)copyStatusString;
-(void)invalidateLink;
-(void)setupIPsec;
-(BOOL)sendControlData:(id)arg1 ;
-(NEIKEv2Listener *)ikeListener;
-(void)setIkeListener:(NEIKEv2Listener *)arg1 ;
-(NEIKEv2Session *)ikeSessionClassC;
-(void)setIkeSessionClassC:(NEIKEv2Session *)arg1 ;
-(NRAnalyticsCmpnLinkQuickRelay *)linkAnalytics;
-(void)setLinkAnalytics:(NRAnalyticsCmpnLinkQuickRelay *)arg1 ;
-(id)initLinkWithQueue:(id)arg1 linkDelegate:(id)arg2 nrUUID:(id)arg3 ;
-(BOOL)setupIDSService;
-(void)setupIDSSessionAndSendInvitation;
-(void)invalidateIDSSession;
-(void)reportEventToPowerLog:(int)arg1 ;
-(BOOL)setupNexus;
-(void)linkIdleTimerDisarm;
-(void)armLinkIdleTimer;
-(void)handleLinkIdleTimeout;
-(void)armIKELinkTimeout;
-(void)ikeSessionTimeoutSourceDisarm;
-(void)handleIKEConnected;
-(id*)ikeSessionPointerForDataProtectionClass:(unsigned char)arg1 ;
-(void)invalidateIKESessionForClass:(unsigned char)arg1 ;
-(void)restartIKESessionForClass:(unsigned char)arg1 ;
-(void)setupIKECallbacksForClass:(unsigned char)arg1 ;
-(void)setupIKEInitiatorSessionForClass:(unsigned char)arg1 ;
-(void)setupIKEListener;
-(void)setupIPsecClassD;
-(void)setupIPsecClassC;
-(BOOL)writeDatagramToSession:(id)arg1 ;
-(void)readDatagramFromSession;
-(NSDate *)idsSessionStartTime;
-(void)setIdsSessionStartTime:(NSDate *)arg1 ;
-(NEIKEv2Session *)ikeSessionClassD;
-(void)setIkeSessionClassD:(NEIKEv2Session *)arg1 ;
-(NEIPsecNexus *)packetNexus;
-(void)setPacketNexus:(NEIPsecNexus *)arg1 ;
-(id<NEIKEv2PacketReceiver>)ikePacketReceiver;
-(void)setIkePacketReceiver:(id<NEIKEv2PacketReceiver>)arg1 ;
-(channelRef)nexusChannel;
-(void)setNexusChannel:(channelRef)arg1 ;
-(channel_ring_descRef)nexusInputRing;
-(void)setNexusInputRing:(channel_ring_descRef)arg1 ;
-(channel_ring_descRef)nexusOutputRing;
-(void)setNexusOutputRing:(channel_ring_descRef)arg1 ;
-(NSObject*<OS_dispatch_source>)dNexusReadSource;
-(void)setDNexusReadSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)dNexusWriteSource;
-(void)setDNexusWriteSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_group>)nexusGroup;
-(void)setNexusGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(BOOL)dNexusReadSourceSuspended;
-(void)setDNexusReadSourceSuspended:(BOOL)arg1 ;
-(BOOL)dNexusWriteSourceSuspended;
-(void)setDNexusWriteSourceSuspended:(BOOL)arg1 ;
-(NSMutableArray *)receivedDatagrams;
-(void)setReceivedDatagrams:(NSMutableArray *)arg1 ;
-(BOOL)hasPendingInputAvailable;
-(void)setHasPendingInputAvailable:(BOOL)arg1 ;
-(NSDate *)ikeClassDEstablishedTime;
-(void)setIkeClassDEstablishedTime:(NSDate *)arg1 ;
-(NSDate *)ikeClassCEstablishedTime;
-(void)setIkeClassCEstablishedTime:(NSDate *)arg1 ;
-(BOOL)invitationInProgress;
-(void)setInvitationInProgress:(BOOL)arg1 ;
-(unsigned long long)sessionInvitationCounter;
-(void)setSessionInvitationCounter:(unsigned long long)arg1 ;
-(unsigned long long)lastRecordedSessionInvitationCounter;
-(void)setLastRecordedSessionInvitationCounter:(unsigned long long)arg1 ;
-(unsigned long long)bytesToQRBeforeSend;
-(void)setBytesToQRBeforeSend:(unsigned long long)arg1 ;
-(unsigned long long)bytesToQRSent;
-(void)setBytesToQRSent:(unsigned long long)arg1 ;
-(unsigned long long)bytesToQRSendFailed;
-(void)setBytesToQRSendFailed:(unsigned long long)arg1 ;
-(unsigned long long)bytesFromQR;
-(void)setBytesFromQR:(unsigned long long)arg1 ;
-(unsigned long long)lastRecordedBytesToQRSent;
-(void)setLastRecordedBytesToQRSent:(unsigned long long)arg1 ;
-(unsigned long long)lastRecordedBytesFromQR;
-(void)setLastRecordedBytesFromQR:(unsigned long long)arg1 ;
-(unsigned long long)bytesFromNexus;
-(void)setBytesFromNexus:(unsigned long long)arg1 ;
-(unsigned long long)bytesToNexus;
-(void)setBytesToNexus:(unsigned long long)arg1 ;
-(unsigned long long)nexusInputAvailableCount;
-(void)setNexusInputAvailableCount:(unsigned long long)arg1 ;
-(unsigned long long)nexusOutputAvailableCount;
-(void)setNexusOutputAvailableCount:(unsigned long long)arg1 ;
-(unsigned long long)sentIKEv2PointToPoint;
-(void)setSentIKEv2PointToPoint:(unsigned long long)arg1 ;
-(unsigned long long)recvIKEv2PointToPoint;
-(void)setRecvIKEv2PointToPoint:(unsigned long long)arg1 ;
-(unsigned long long)sentUncompressedIP;
-(void)setSentUncompressedIP:(unsigned long long)arg1 ;
-(unsigned long long)sentEncapsulated6LoWPAN;
-(void)setSentEncapsulated6LoWPAN:(unsigned long long)arg1 ;
-(unsigned long long)sentKnownIPv6Hdr_ESP;
-(void)setSentKnownIPv6Hdr_ESP:(unsigned long long)arg1 ;
-(unsigned long long)sentKnownIPv6Hdr_ESP_ECT0;
-(void)setSentKnownIPv6Hdr_ESP_ECT0:(unsigned long long)arg1 ;
-(unsigned long long)sentKnownIPv6Hdr_ESP_ClassC;
-(void)setSentKnownIPv6Hdr_ESP_ClassC:(unsigned long long)arg1 ;
-(unsigned long long)sentKnownIPv6Hdr_ESP_ClassC_ECT0;
-(void)setSentKnownIPv6Hdr_ESP_ClassC_ECT0:(unsigned long long)arg1 ;
-(unsigned long long)sentKnownIPv6Hdr_TCP;
-(void)setSentKnownIPv6Hdr_TCP:(unsigned long long)arg1 ;
-(unsigned long long)sentKnownIPv6Hdr_TCP_ECT0;
-(void)setSentKnownIPv6Hdr_TCP_ECT0:(unsigned long long)arg1 ;
-(unsigned long long)recvUncompressedIP;
-(void)setRecvUncompressedIP:(unsigned long long)arg1 ;
-(unsigned long long)recvEncapsulated6LoWPAN;
-(void)setRecvEncapsulated6LoWPAN:(unsigned long long)arg1 ;
-(unsigned long long)recvKnownIPv6Hdr_ESP;
-(void)setRecvKnownIPv6Hdr_ESP:(unsigned long long)arg1 ;
-(unsigned long long)recvKnownIPv6Hdr_ESP_ECT0;
-(void)setRecvKnownIPv6Hdr_ESP_ECT0:(unsigned long long)arg1 ;
-(unsigned long long)recvKnownIPv6Hdr_ESP_ClassC;
-(void)setRecvKnownIPv6Hdr_ESP_ClassC:(unsigned long long)arg1 ;
-(unsigned long long)recvKnownIPv6Hdr_ESP_ClassC_ECT0;
-(void)setRecvKnownIPv6Hdr_ESP_ClassC_ECT0:(unsigned long long)arg1 ;
-(unsigned long long)recvKnownIPv6Hdr_TCP;
-(void)setRecvKnownIPv6Hdr_TCP:(unsigned long long)arg1 ;
-(unsigned long long)recvKnownIPv6Hdr_TCP_ECT0;
-(void)setRecvKnownIPv6Hdr_TCP_ECT0:(unsigned long long)arg1 ;
-(BOOL)isResponder;
-(void)setIsResponder:(BOOL)arg1 ;
-(BOOL)addedConnectionStateObserver;
-(void)setAddedConnectionStateObserver:(BOOL)arg1 ;
-(BOOL)currentlyCreatingIDSSession;
-(void)setCurrentlyCreatingIDSSession:(BOOL)arg1 ;
-(BOOL)idsSessionIsIncoming;
-(void)setIdsSessionIsIncoming:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)linkIdleTimerSource;
-(void)setLinkIdleTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)ikeSessionTimeoutSource;
-(void)setIkeSessionTimeoutSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSMutableArray *)receivedIKEPackets;
-(void)setReceivedIKEPackets:(NSMutableArray *)arg1 ;
-(unsigned char)invitationRetryCounter;
-(void)setInvitationRetryCounter:(unsigned char)arg1 ;
-(unsigned char)ikeClassDRetryCounter;
-(void)setIkeClassDRetryCounter:(unsigned char)arg1 ;
-(unsigned char)ikeClassCRetryCounter;
-(void)setIkeClassCRetryCounter:(unsigned char)arg1 ;
-(in6_addr)localAddrClassD;
-(void)setLocalAddrClassD:(in6_addr)arg1 ;
-(in6_addr)remoteAddrClassD;
-(void)setRemoteAddrClassD:(in6_addr)arg1 ;
-(BOOL)resumeRequested;
-(void)setResumeRequested:(BOOL)arg1 ;
-(BOOL)shouldCancelOnSuspend;
-(void)setShouldCancelOnSuspend:(BOOL)arg1 ;
-(BOOL)ikeSessionTimeoutScheduledOnce;
-(void)setIkeSessionTimeoutScheduledOnce:(BOOL)arg1 ;
@end


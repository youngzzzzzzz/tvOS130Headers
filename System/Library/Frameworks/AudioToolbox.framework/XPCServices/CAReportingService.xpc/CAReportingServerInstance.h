/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/XPCServices/CAReportingService.xpc/CAReportingService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CAReportingService/CAReportingServiceProtocol.h>

@protocol CAReportingServiceDelegateProtocol;
@class NSDate, NSString, NSMutableDictionary;

@interface CAReportingServerInstance : NSObject <CAReportingServiceProtocol> {

	int _processIdentifier;
	NSDate* _clientStartDate;
	NSString* _clientProcessName;
	NSMutableDictionary* _clientReportingSessionMap;
	id<CAReportingServiceDelegateProtocol> _delegate;

}

@property (assign) int processIdentifier;                                                         //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (retain) NSDate * clientStartDate;                                                      //@synthesize clientStartDate=_clientStartDate - In the implementation block
@property (retain) NSString * clientProcessName;                                                  //@synthesize clientProcessName=_clientProcessName - In the implementation block
@property (retain) NSMutableDictionary * clientReportingSessionMap;                               //@synthesize clientReportingSessionMap=_clientReportingSessionMap - In the implementation block
@property (assign,nonatomic,__weak) id<CAReportingServiceDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CAReportingServiceDelegateProtocol>)delegate;
-(void)setDelegate:(id<CAReportingServiceDelegateProtocol>)arg1 ;
-(int)processIdentifier;
-(void)killService:(/*^block*/id)arg1 ;
-(void)setServiceType:(unsigned short)arg1 reportingSession:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)sendMessage:(id)arg1 withCategory:(unsigned)arg2 andType:(unsigned short)arg3 forReportingIDs:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)stopReportingSessionForID:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)startReportingSessionForID:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)getAllReporters:(/*^block*/id)arg1 ;
-(void)destroyReportingSession:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)reporterID:(long long)arg1 valid:(/*^block*/id)arg2 ;
-(void)setConfiguration:(id)arg1 forReporterID:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)createReportingSession:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)getServiceNameForReporterID:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)setProcessIdentifier:(int)arg1 ;
-(void)handleConnectionError;
-(id)initWithPID:(int)arg1 delegate:(id)arg2 ;
-(id)findReportingSessionForID:(long long)arg1 acrossAllClients:(BOOL)arg2 ;
-(NSDate *)clientStartDate;
-(void)setClientStartDate:(NSDate *)arg1 ;
-(NSString *)clientProcessName;
-(void)setClientProcessName:(NSString *)arg1 ;
-(NSMutableDictionary *)clientReportingSessionMap;
-(void)setClientReportingSessionMap:(NSMutableDictionary *)arg1 ;
@end


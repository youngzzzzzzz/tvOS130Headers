/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:49 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/rtcreportingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <rtcreportingd/rtcreportingd-Structs.h>
#import <rtcreportingd/ClientSessionInterface.h>

@protocol ReportingdSessionDelegate, ReportingSessionEventCacheDelegate;
@class NSDictionary, NSMutableDictionary, NSString, NSXPCConnection, NSData;

@interface ReportingdSession : NSObject <ClientSessionInterface> {

	unsigned _sessionID;
	NSDictionary* _sessionInfo;
	NSDictionary* _userInfo;
	NSDictionary* _frameworks;
	NSDictionary* _backends;
	NSDictionary* _hierarchyDictionary;
	NSMutableDictionary* _periodicServices;
	id<ReportingdSessionDelegate> _sessionDelegate;
	NSString* _sessionIDString;
	NSString* _storebagVersion;
	unsigned char _deviceid[41];
	NSXPCConnection* _connection;
	BOOL _hasAggregator;
	BOOL _hasFinishedGracefully;
	NSData* _digestKey;
	int _digestAlgorithm;
	id<ReportingSessionEventCacheDelegate> _activitySchedulerDelegate;
	BOOL _counted;

}

@property (assign) unsigned sessionID;                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) NSString * sessionIDString;                        //@synthesize sessionIDString=_sessionIDString - In the implementation block
@property (copy) NSString * storebagVersion;                            //@synthesize storebagVersion=_storebagVersion - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo;                 //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * sessionInfo;              //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (assign) BOOL hasAggregator;                                  //@synthesize hasAggregator=_hasAggregator - In the implementation block
@property (readonly) unsigned hierarchyLevel; 
@property (readonly) NSString * hierarchyToken; 
@property (getter=isCounted) BOOL counted;                              //@synthesize counted=_counted - In the implementation block
@property (readonly) NSString * clientPID; 
-(void)dealloc;
-(void)invalidate;
-(NSDictionary *)userInfo;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(void)setSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3 hasAggregationBlock:(BOOL)arg4 ;
-(void)startConfigWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchStatesWithUserInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchDisplayURL:(/*^block*/id)arg1 ;
-(void)sendMessageWithDictionary:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)flushMessagesWithCompletion:(/*^block*/id)arg1 ;
-(void)finishSessionGracefully;
-(void)uploadFileAtPath:(id)arg1 extensionToken:(char*)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)uploadLogData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendMessageWithSessionInfo:(id)arg1 userInfo:(id)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)updateSharedDataWithDictionary:(id)arg1 ;
-(void)updateSharedDataForKey:(id)arg1 value:(id)arg2 ;
-(void)setDigestKey:(id)arg1 algorithm:(int)arg2 ;
-(id)sendMessageWithDictionary:(id)arg1 error:(id)arg2 ;
-(NSString *)clientPID;
-(NSString *)sessionIDString;
-(NSDictionary *)sessionInfo;
-(unsigned)hierarchyLevel;
-(NSString *)hierarchyToken;
-(void)setHierarchyToken:(NSString *)arg1 ;
-(void)setCounted:(BOOL)arg1 ;
-(unsigned long long)batchedEventsSize;
-(void)addSessionsAccumulatedHealthInfoToPayload:(id)arg1 sessionList:(id)arg2 storebags:(id)arg3 ;
-(void)internalSendMessage:(id)arg1 timestamp:(const timeval*)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 ;
-(void)shutdownSessionAggregation;
-(void)releaseUserInfo;
-(void)setStorebagVersion:(NSString *)arg1 ;
-(void)updateUserInfo:(id)arg1 ;
-(void)createBackendsWithStorebag:(id)arg1 ;
-(void)updateSessionWithDefaultSessionInfo;
-(void)sendStartMessage;
-(id)fetchReportingStates;
-(id)fetchWhitelistedEvents;
-(id)fetchBlacklistedEvents;
-(void)receivedUserInfo:(id)arg1 ;
-(void)internalFlushMessagesWithCompletion:(/*^block*/id)arg1 ;
-(void)uploadFileWithURL:(id)arg1 extensionToken:(char*)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendOneMessageWithSessionInfo:(id)arg1 userInfo:(id)arg2 storebag:(id)arg3 category:(unsigned short)arg4 type:(unsigned short)arg5 payload:(id)arg6 ;
-(BOOL)updateReportingStates;
-(void)updateUserInfoForBackends;
-(void)sendToAggregator:(id)arg1 timestamp:(double)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 ;
-(void)aggregateMessage:(id)arg1 timestamp:(double)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 ;
-(unsigned long long)addSessionHealthInfo:(id)arg1 healthReport:(id)arg2 ;
-(id)initWithSessionDelegate:(id)arg1 connection:(id)arg2 ;
-(BOOL)hasValidUserInfoKeys;
-(void)syncReportingStates;
-(void)updateCombinedSessionID;
-(NSString *)storebagVersion;
-(BOOL)hasAggregator;
-(void)setHasAggregator:(BOOL)arg1 ;
-(BOOL)isCounted;
@end


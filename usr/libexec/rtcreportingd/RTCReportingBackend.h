/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:49 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/rtcreportingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ReportingSessionEventCacheDelegate;
#import <rtcreportingd/rtcreportingd-Structs.h>
@class NSDictionary, NSString, NSNumber, NSObject, NSArray, NSData;

@interface RTCReportingBackend : NSObject {

	NSDictionary* _profile;
	NSString* _name;
	int _state;
	NSString* _productVersion;
	NSString* _buildVersion;
	NSString* _hardwareType;
	NSString* _productFamily;
	double _startTimeStamp;
	unsigned _sessionID;
	NSString* _combinedSessionIDString;
	int _compType;
	unsigned short _clientVersion;
	unsigned short _eventID;
	unsigned char _selfVersionMajor;
	unsigned char _selfVersionMiddle;
	unsigned char _selfVersionMinor;
	unsigned char _isInternal;
	unsigned char _shouldUseWiFiOnly;
	unsigned _totalBytesSent;
	unsigned _bytesSentSinceLastReport;
	BOOL _overrideServerResponse;
	NSDictionary* _userInfoDict;
	unsigned char _batchEvents;
	unsigned char _hasRealtimeEvents;
	char* _udid;
	NSString* _displayURL;
	double _samplingFactor;
	NSNumber* _samplingThreshold;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSArray* _eventWhitelist;
	NSArray* _eventBlacklist;
	NSData* _digestKey;
	int _digestAlgorithm;
	id<ReportingSessionEventCacheDelegate> _activitySchedulerDelegate;
	BOOL _allowNestedData;
	unsigned char _includeSessionIDInHeader;

}

@property (assign) int state; 
@property (assign) unsigned sessionID;                            //@synthesize sessionID=_sessionID - In the implementation block
@property (copy) NSString * combinedSessionIDString;              //@synthesize combinedSessionIDString=_combinedSessionIDString - In the implementation block
@property (assign) int compType;                                  //@synthesize compType=_compType - In the implementation block
@property (assign) unsigned short clientVersion;                  //@synthesize clientVersion=_clientVersion - In the implementation block
@property (assign) char* udid;                                    //@synthesize udid=_udid - In the implementation block
@property (copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (copy) NSString * displayURL;                           //@synthesize displayURL=_displayURL - In the implementation block
@property (copy) NSString * productVersion;                       //@synthesize productVersion=_productVersion - In the implementation block
@property (copy) NSString * buildVersion;                         //@synthesize buildVersion=_buildVersion - In the implementation block
@property (copy) NSString * hardwareType;                         //@synthesize hardwareType=_hardwareType - In the implementation block
@property (copy) NSString * productFamily;                        //@synthesize productFamily=_productFamily - In the implementation block
@property (copy) NSDictionary * userInfoDict;                     //@synthesize userInfoDict=_userInfoDict - In the implementation block
@property (assign) unsigned char isInternal;                      //@synthesize isInternal=_isInternal - In the implementation block
@property (assign) unsigned char batchEvents;                     //@synthesize batchEvents=_batchEvents - In the implementation block
@property (assign) unsigned char hasRealtimeEvents;               //@synthesize hasRealtimeEvents=_hasRealtimeEvents - In the implementation block
@property (assign) double samplingFactor;                         //@synthesize samplingFactor=_samplingFactor - In the implementation block
@property (retain) NSNumber * samplingThreshold;                  //@synthesize samplingThreshold=_samplingThreshold - In the implementation block
@property (copy) NSData * digestKey;                              //@synthesize digestKey=_digestKey - In the implementation block
@property (assign) int digestAlgorithm;                           //@synthesize digestAlgorithm=_digestAlgorithm - In the implementation block
@property (assign) BOOL allowNestedData;                          //@synthesize allowNestedData=_allowNestedData - In the implementation block
@property (retain) NSArray * eventWhitelist;                      //@synthesize eventWhitelist=_eventWhitelist - In the implementation block
@property (retain) NSArray * eventBlacklist;                      //@synthesize eventBlacklist=_eventBlacklist - In the implementation block
+(id)newBackendWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3 clientType:(int)arg4 ;
-(NSString *)name;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)cleanup;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(NSString *)productVersion;
-(NSString *)hardwareType;
-(void)setHardwareType:(NSString *)arg1 ;
-(NSString *)buildVersion;
-(void)setStartTimestamp:(const timeval*)arg1 ;
-(id)flushMessagesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isWhitelistedEvent:(unsigned short)arg1 ;
-(BOOL)isBlacklistedEvent:(unsigned short)arg1 ;
-(unsigned char)isInternal;
-(int)updateState;
-(void)setProductVersion:(NSString *)arg1 ;
-(void)setBuildVersion:(NSString *)arg1 ;
-(unsigned short)clientVersion;
-(void)setClientVersion:(unsigned short)arg1 ;
-(char*)udid;
-(void)setUdid:(char*)arg1 ;
-(void)setIsInternal:(unsigned char)arg1 ;
-(void)setDisplayURL:(NSString *)arg1 ;
-(NSString *)displayURL;
-(id)initWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3 ;
-(id)sendMessage:(id)arg1 timestamp:(const timeval*)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5 flag:(int)arg6 ;
-(void)setCombinedSessionIDString:(NSString *)arg1 ;
-(id)convertIntoSHA256:(id)arg1 ;
-(void)setReportingSessionActivitySchedulerDelegate:(id)arg1 ;
-(void)setSelfVersion:(id)arg1 ;
-(id)sendMessage:(id)arg1 timestamp:(const timeval*)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 flag:(int)arg5 ;
-(BOOL)uploadFileAtPath:(id)arg1 extensionToken:(char*)arg2 ;
-(BOOL)uploadLogData:(id)arg1 ;
-(void)setCorrelatedSessionID:(id)arg1 ;
-(unsigned long long)batchedEventsSize;
-(NSString *)combinedSessionIDString;
-(int)compType;
-(void)setCompType:(int)arg1 ;
-(NSString *)productFamily;
-(void)setProductFamily:(NSString *)arg1 ;
-(NSDictionary *)userInfoDict;
-(void)setUserInfoDict:(NSDictionary *)arg1 ;
-(unsigned char)batchEvents;
-(void)setBatchEvents:(unsigned char)arg1 ;
-(unsigned char)hasRealtimeEvents;
-(void)setHasRealtimeEvents:(unsigned char)arg1 ;
-(double)samplingFactor;
-(void)setSamplingFactor:(double)arg1 ;
-(NSNumber *)samplingThreshold;
-(void)setSamplingThreshold:(NSNumber *)arg1 ;
-(NSData *)digestKey;
-(void)setDigestKey:(NSData *)arg1 ;
-(int)digestAlgorithm;
-(void)setDigestAlgorithm:(int)arg1 ;
-(BOOL)allowNestedData;
-(void)setAllowNestedData:(BOOL)arg1 ;
-(NSArray *)eventWhitelist;
-(void)setEventWhitelist:(NSArray *)arg1 ;
-(NSArray *)eventBlacklist;
-(void)setEventBlacklist:(NSArray *)arg1 ;
@end

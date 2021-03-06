/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSString;

@interface VCObject : NSObject {

	NSString* _logPrefix;
	opaque_pthread_mutex_t _mutex;
	id _reportingAgent;

}

@property (nonatomic,retain) NSString * logPrefix;                              //@synthesize logPrefix=_logPrefix - In the implementation block
@property (assign,nonatomic) opaqueRTCReportingRef reportingAgent; 
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(NSString *)logPrefix;
-(opaqueRTCReportingRef)reportingAgent;
-(void)setReportingAgent:(opaqueRTCReportingRef)arg1 ;
-(void)setLogPrefix:(NSString *)arg1 ;
@end


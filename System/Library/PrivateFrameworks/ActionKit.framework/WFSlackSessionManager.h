/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/NSURLSessionDataDelegate.h>

@class NSString, NSURLSession, NSURL, NSMapTable;

@interface WFSlackSessionManager : NSObject <NSURLSessionDataDelegate> {

	NSString* _token;
	NSURLSession* _session;
	NSURL* _baseURL;
	NSMapTable* _progressTable;

}

@property (nonatomic,readonly) NSURLSession * session;                //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSURL * baseURL;                       //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) NSMapTable * progressTable;              //@synthesize progressTable=_progressTable - In the implementation block
@property (nonatomic,copy) NSString * token;                          //@synthesize token=_token - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)token;
-(NSURL *)baseURL;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(NSURLSession *)session;
-(void)setToken:(NSString *)arg1 ;
-(id)initWithSessionConfiguration:(id)arg1 ;
-(void)sendRequest:(id)arg1 progress:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMapTable *)progressTable;
-(void)testAuthentication:(/*^block*/id)arg1 ;
-(void)listChannels:(/*^block*/id)arg1 ;
-(void)listGroups:(/*^block*/id)arg1 ;
-(void)listUsers:(/*^block*/id)arg1 ;
-(void)listIMs:(/*^block*/id)arg1 ;
-(void)sendMessage:(id)arg1 toChannel:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)uploadFile:(id)arg1 progress:(id)arg2 toChannel:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setProgressTable:(NSMapTable *)arg1 ;
@end


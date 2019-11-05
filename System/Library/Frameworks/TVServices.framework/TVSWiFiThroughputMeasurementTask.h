/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/NSURLSessionDownloadDelegate.h>

@class NSURLSessionDownloadTask, NSURLSession, NSDate, NSString;

@interface TVSWiFiThroughputMeasurementTask : NSObject <NSURLSessionDownloadDelegate> {

	/*^block*/id _completion;
	NSURLSessionDownloadTask* _task;
	NSURLSession* _session;
	NSDate* _startTime;

}

@property (nonatomic,copy) id completion;                                  //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSURLSessionDownloadTask * task;              //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                       //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                           //@synthesize startTime=_startTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)cancel;
-(NSURLSession *)session;
-(NSDate *)startTime;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(NSURLSessionDownloadTask *)task;
-(void)setTask:(NSURLSessionDownloadTask *)arg1 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(id)testDownloadURL;
@end

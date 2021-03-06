/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:49 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/rtcreportingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, RTCDiskCacheDelegate;
@class RTCActivitySchedulerOptions, RTCSelfReporter, NSString, NSObject;

@interface RTCDiskCache : NSObject {

	RTCActivitySchedulerOptions* _options;
	RTCSelfReporter* _selfReporter;
	NSString* _oldestCacheFile;
	NSString* _newestCacheFile;
	NSObject*<OS_dispatch_queue> _stateQueue;
	id<RTCDiskCacheDelegate> _delegate;

}

@property (readonly) NSString * oldestCacheFile;                         //@synthesize oldestCacheFile=_oldestCacheFile - In the implementation block
@property (readonly) NSString * newestCacheFile;                         //@synthesize newestCacheFile=_newestCacheFile - In the implementation block
@property (readonly) RTCActivitySchedulerOptions * options;              //@synthesize options=_options - In the implementation block
-(void)dealloc;
-(RTCActivitySchedulerOptions *)options;
-(id)delegate;
-(void)addEvent:(id)arg1 ;
-(id)initWithOptions:(id)arg1 delegate:(id)arg2 ;
-(BOOL)secureWriteDataForHandle:(id)arg1 data:(id)arg2 ;
-(void)deleteCurrentCacheFileWithOrderDispatched:(int)arg1 ;
-(BOOL)searchForCacheFileWithOrderDispatched:(int)arg1 ;
-(id)pruneFileIfExpiredDispatched:(id)arg1 ;
-(BOOL)isSizeORTimeLimitationExceededForFileDispatched:(id)arg1 ;
-(id)diskCacheRootPath;
-(void)removeFromCacheDispatched:(id)arg1 ;
-(void)writeInitialHeaderToFile:(id)arg1 ;
-(id)getOldestEventDispatched;
-(void)setSelfReporter:(id)arg1 ;
-(void)syncUp;
-(id)cacheFileExtention;
-(void)deleteCurrentOldestCacheFile;
-(void)deleteCurrentNewestCacheFile;
-(void)deleteAllCacheFiles;
-(id)pruneFileIfExpired:(id)arg1 ;
-(BOOL)isSizeORTimeLimitationExceededForFile:(id)arg1 ;
-(BOOL)searchForCacheFileWithOrder:(int)arg1 ;
-(id)copyFirstEvent;
-(NSString *)oldestCacheFile;
-(NSString *)newestCacheFile;
@end


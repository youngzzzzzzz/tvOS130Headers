/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:22 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray;

@interface _TVSettingsImageLoaderQueue : NSObject {

	BOOL _randomized;
	BOOL _pauseImageLoad;
	NSArray* _imageProxies;
	unsigned long long _preloadCount;
	/*^block*/id _preloadCompletionHandler;
	unsigned long long _queueSize;
	unsigned long long _concurrentDownloadCount;
	unsigned long long _nextIndex;
	NSMutableArray* _pendingImageProxies;
	NSMutableArray* _loadingImageProxies;
	NSMutableArray* _finishedImages;

}

@property (assign,nonatomic) unsigned long long preloadCount;                         //@synthesize preloadCount=_preloadCount - In the implementation block
@property (nonatomic,copy) id preloadCompletionHandler;                               //@synthesize preloadCompletionHandler=_preloadCompletionHandler - In the implementation block
@property (assign,nonatomic) unsigned long long queueSize;                            //@synthesize queueSize=_queueSize - In the implementation block
@property (assign,nonatomic) unsigned long long concurrentDownloadCount;              //@synthesize concurrentDownloadCount=_concurrentDownloadCount - In the implementation block
@property (assign,nonatomic) unsigned long long nextIndex;                            //@synthesize nextIndex=_nextIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingImageProxies;                    //@synthesize pendingImageProxies=_pendingImageProxies - In the implementation block
@property (nonatomic,retain) NSMutableArray * loadingImageProxies;                    //@synthesize loadingImageProxies=_loadingImageProxies - In the implementation block
@property (nonatomic,retain) NSMutableArray * finishedImages;                         //@synthesize finishedImages=_finishedImages - In the implementation block
@property (nonatomic,copy) NSArray * imageProxies;                                    //@synthesize imageProxies=_imageProxies - In the implementation block
@property (assign,getter=isRandomized,nonatomic) BOOL randomized;                     //@synthesize randomized=_randomized - In the implementation block
@property (assign,nonatomic) BOOL pauseImageLoad;                                     //@synthesize pauseImageLoad=_pauseImageLoad - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)queueSize;
-(void)setQueueSize:(unsigned long long)arg1 ;
-(unsigned long long)nextIndex;
-(NSArray *)imageProxies;
-(void)setImageProxies:(NSArray *)arg1 ;
-(void)preloadImageCount:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)popNextImage;
-(void)_fillQueue;
-(void)_checkForPreloadCompletion;
-(unsigned long long)_currentQueueSize;
-(id)_imageProxyToLoadNext;
-(void)_loadPendingImages;
-(void)_imageProxyDidLoad:(id)arg1 withImage:(id)arg2 ;
-(void)_imageProxyDidFail:(id)arg1 withError:(id)arg2 ;
-(BOOL)isRandomized;
-(void)setRandomized:(BOOL)arg1 ;
-(unsigned long long)preloadCount;
-(void)setPreloadCount:(unsigned long long)arg1 ;
-(id)preloadCompletionHandler;
-(void)setPreloadCompletionHandler:(id)arg1 ;
-(unsigned long long)concurrentDownloadCount;
-(void)setConcurrentDownloadCount:(unsigned long long)arg1 ;
-(void)setNextIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)pendingImageProxies;
-(void)setPendingImageProxies:(NSMutableArray *)arg1 ;
-(NSMutableArray *)loadingImageProxies;
-(void)setLoadingImageProxies:(NSMutableArray *)arg1 ;
-(NSMutableArray *)finishedImages;
-(void)setFinishedImages:(NSMutableArray *)arg1 ;
-(BOOL)pauseImageLoad;
-(void)setPauseImageLoad:(BOOL)arg1 ;
@end


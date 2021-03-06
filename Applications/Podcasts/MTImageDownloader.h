/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:18 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTURLSessionManager.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, MTImageStore, NSObject;

@interface MTImageDownloader : MTURLSessionManager {

	BOOL _hasPurgedTemporaryResourcesDirectory;
	NSMutableDictionary* _clientRequestsByUrl;
	MTImageStore* _imageStore;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSObject*<OS_dispatch_queue> _imageWorkQueue;

}

@property (nonatomic,retain) NSMutableDictionary * clientRequestsByUrl;                //@synthesize clientRequestsByUrl=_clientRequestsByUrl - In the implementation block
@property (nonatomic,retain) MTImageStore * imageStore;                                //@synthesize imageStore=_imageStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                   //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> imageWorkQueue;              //@synthesize imageWorkQueue=_imageWorkQueue - In the implementation block
@property (assign,nonatomic) BOOL hasPurgedTemporaryResourcesDirectory;                //@synthesize hasPurgedTemporaryResourcesDirectory=_hasPurgedTemporaryResourcesDirectory - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)downloadImageUrl:(id)arg1 cacheKey:(id)arg2 userInitiated:(BOOL)arg3 callback:(/*^block*/id)arg4 ;
-(void)setClientRequestsByUrl:(NSMutableDictionary *)arg1 ;
-(void)setImageWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setImageStore:(MTImageStore *)arg1 ;
-(void)setHasPurgedTemporaryResourcesDirectory:(BOOL)arg1 ;
-(void)downloadImageForPodcastUuid:(id)arg1 imageUrl:(id)arg2 userInitiated:(BOOL)arg3 useBackgroundFetch:(BOOL)arg4 callback:(/*^block*/id)arg5 ;
-(void)_downloadImageUrl:(id)arg1 cacheKey:(id)arg2 podcastUuid:(id)arg3 userInitiated:(BOOL)arg4 backgroundFetch:(BOOL)arg5 callback:(/*^block*/id)arg6 ;
-(void)cleanupTemporaryResourcesDirectoryIfNecessary;
-(long long)_enqueueClientInfoWithUrl:(id)arg1 key:(id)arg2 podcastUuid:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_completeUsingExistingDownloadedImageForUuid:(id)arg1 imageUrl:(id)arg2 ;
-(id)_temporaryImagePathForDownloadedImageWithUuid:(id)arg1 ;
-(void)_processFinishedDownloadWithContentURL:(id)arg1 originalUrl:(id)arg2 actualRequestUrl:(id)arg3 finishedWithContentHandler:(/*^block*/id)arg4 processedKeys:(id)arg5 ;
-(double)_urlSessionResourceTimeout;
-(id)_clientRequestsForUrl:(id)arg1 ;
-(void)_finishProcessingClientRequests:(id)arg1 originalUrl:(id)arg2 success:(BOOL)arg3 error:(id)arg4 ;
-(id)_temporaryImagePathByCopyingDownloadedContent:(id)arg1 uuid:(id)arg2 error:(id*)arg3 ;
-(MTImageStore *)imageStore;
-(BOOL)_shouldDiscardTransparency;
-(NSObject*<OS_dispatch_queue>)imageWorkQueue;
-(void)_saveArtworkImageUrl:(id)arg1 forPodcastUuids:(id)arg2 logHeader:(id)arg3 ;
-(void)_dequeueClientRequests:(id)arg1 ;
-(NSMutableDictionary *)clientRequestsByUrl;
-(void)_onImageWorkQueuePurgeUnneededItemsInTemporaryResourcesDirectoryIfNecessary;
-(BOOL)hasPurgedTemporaryResourcesDirectory;
-(id)_temporaryResourcesDirectory;
-(id)_keyForImageDownloaderTempFilename:(id)arg1 ;
-(void)downloadImageForPodcastUuid:(id)arg1 userInitiated:(BOOL)arg2 backgroundFetch:(BOOL)arg3 callback:(/*^block*/id)arg4 ;
-(void)configureSession:(id)arg1 ;
-(void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(long long)arg3 ;
-(void)task:(id)arg1 didCompleteWithDownloadedContentUrl:(id)arg2 ;
@end


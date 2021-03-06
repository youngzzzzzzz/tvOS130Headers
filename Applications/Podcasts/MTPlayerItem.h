/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:17 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <PodcastsTVTopShelfExtension/IMPlayerItem.h>
#import <Podcasts/MTEpisodeIdentifierProvider.h>
#import <PodcastsTVTopShelfExtension/IMMetricsDataSource.h>

@class NSString, NSURL, NSDate, MTEpisode;

@interface MTPlayerItem : IMPlayerItem <MTEpisodeIdentifierProvider, IMMetricsDataSource> {

	BOOL _isNotSubscribeable;
	BOOL _enqueuedByAnotherUser;
	BOOL _isExplicit;
	NSString* _podcastUuid;
	NSString* _podcastFeedUrl;
	long long _podcastStoreId;
	NSURL* _artworkUrl;
	NSString* _episodeUuid;
	NSString* _episodeGuid;
	long long _episodeStoreId;
	long long _episodePID;
	NSDate* _pubDate;
	NSString* _subtitle;
	NSString* _itemDescription;
	NSURL* _episodeShareUrl;
	long long _seasonNumber;
	long long _episodeNumber;
	long long _episodeType;
	NSString* _storeReportingParams;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<MTEpisodeIdentifier> episodeIdentifier; 
@property (nonatomic,retain) NSString * podcastUuid;                                   //@synthesize podcastUuid=_podcastUuid - In the implementation block
@property (nonatomic,retain) NSString * podcastFeedUrl;                                //@synthesize podcastFeedUrl=_podcastFeedUrl - In the implementation block
@property (assign,nonatomic) long long podcastStoreId;                                 //@synthesize podcastStoreId=_podcastStoreId - In the implementation block
@property (nonatomic,retain) NSURL * artworkUrl;                                       //@synthesize artworkUrl=_artworkUrl - In the implementation block
@property (assign,nonatomic) BOOL isNotSubscribeable;                                  //@synthesize isNotSubscribeable=_isNotSubscribeable - In the implementation block
@property (assign,nonatomic) BOOL enqueuedByAnotherUser;                               //@synthesize enqueuedByAnotherUser=_enqueuedByAnotherUser - In the implementation block
@property (nonatomic,retain) NSString * episodeUuid;                                   //@synthesize episodeUuid=_episodeUuid - In the implementation block
@property (nonatomic,retain) NSString * episodeGuid;                                   //@synthesize episodeGuid=_episodeGuid - In the implementation block
@property (assign,nonatomic) long long episodeStoreId;                                 //@synthesize episodeStoreId=_episodeStoreId - In the implementation block
@property (assign,nonatomic) long long episodePID;                                     //@synthesize episodePID=_episodePID - In the implementation block
@property (nonatomic,retain) NSDate * pubDate;                                         //@synthesize pubDate=_pubDate - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * itemDescription;                               //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,retain) NSURL * episodeShareUrl;                                  //@synthesize episodeShareUrl=_episodeShareUrl - In the implementation block
@property (assign,nonatomic) BOOL isExplicit;                                          //@synthesize isExplicit=_isExplicit - In the implementation block
@property (assign,nonatomic) long long seasonNumber;                                   //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (assign,nonatomic) long long episodeNumber;                                  //@synthesize episodeNumber=_episodeNumber - In the implementation block
@property (assign,nonatomic) long long episodeType;                                    //@synthesize episodeType=_episodeType - In the implementation block
@property (nonatomic,readonly) long long mpItemType; 
@property (nonatomic,retain) NSString * storeReportingParams;                          //@synthesize storeReportingParams=_storeReportingParams - In the implementation block
@property (nonatomic,readonly) MTEpisode * episode; 
+(void)setServiceIdentifier:(id)arg1 ;
+(id)createAssetForUrl:(id)arg1 ;
+(id)defaultAssetOptions;
+(id)subtitleStringForArtist:(id)arg1 album:(id)arg2 ;
+(long long)contentItemEpisodeTypeForEpisodeType:(long long)arg1 ;
+(id)subtitleStringForEpisode:(id)arg1 ;
-(BOOL)isShareable;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(BOOL)isPlayable;
-(id)initWithAsset:(id)arg1 ;
-(BOOL)isStreamable;
-(id<MTEpisodeIdentifier>)episodeIdentifier;
-(long long)seasonNumber;
-(void)setSeasonNumber:(long long)arg1 ;
-(NSURL *)artworkUrl;
-(void)setEpisodeNumber:(long long)arg1 ;
-(void)setEpisodeType:(long long)arg1 ;
-(long long)episodeNumber;
-(id)artworkIdentifier;
-(long long)episodeType;
-(MTEpisode *)episode;
-(id)streamUrl;
-(BOOL)isExplicit;
-(void)setIsExplicit:(BOOL)arg1 ;
-(id)contentItemIdentifier;
-(NSString *)itemDescription;
-(void)setItemDescription:(NSString *)arg1 ;
-(id)externalMetadata;
-(void)setArtworkUrl:(NSURL *)arg1 ;
-(NSString *)podcastUuid;
-(void)setPubDate:(NSDate *)arg1 ;
-(NSDate *)pubDate;
-(id)metricsContentIdentifier;
-(void)setEpisodeGuid:(NSString *)arg1 ;
-(void)setPodcastFeedUrl:(NSString *)arg1 ;
-(NSString *)episodeUuid;
-(NSString *)podcastFeedUrl;
-(void)setPodcastUuid:(NSString *)arg1 ;
-(NSString *)episodeGuid;
-(void)setEpisodeUuid:(NSString *)arg1 ;
-(void)setAreChaptersLoaded:(BOOL)arg1 ;
-(void)retrieveArtwork:(/*^block*/id)arg1 withSize:(CGSize)arg2 ;
-(void)updateContentItem;
-(void)invalidateAsset;
-(BOOL)notifyUserIsNotPlayable;
-(void)setManifestIndex:(unsigned long long)arg1 ;
-(void)updateActivity:(id)arg1 ;
-(NSURL *)episodeShareUrl;
-(id)_episodeArtworkIdentifier;
-(id)_podcastArtworkIdentifier;
-(long long)episodeStoreId;
-(long long)podcastStoreId;
-(BOOL)isNotSubscribeable;
-(long long)mpItemType;
-(BOOL)_supportsArtworkURL;
-(void)setPodcastStoreId:(long long)arg1 ;
-(void)setIsNotSubscribeable:(BOOL)arg1 ;
-(BOOL)enqueuedByAnotherUser;
-(void)setEnqueuedByAnotherUser:(BOOL)arg1 ;
-(void)setEpisodeStoreId:(long long)arg1 ;
-(long long)episodePID;
-(void)setEpisodePID:(long long)arg1 ;
-(void)setEpisodeShareUrl:(NSURL *)arg1 ;
-(NSString *)storeReportingParams;
-(void)setStoreReportingParams:(NSString *)arg1 ;
@end


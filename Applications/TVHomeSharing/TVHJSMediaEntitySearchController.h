/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:49:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVHomeSharing.app/TVHomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharing/TVHJSObject.h>
#import <TVHomeSharing/TVHKMediaEntitySearchControllerDelegate.h>
#import <TVHomeSharing/TVHJSMediaEntitySearchController.h>
@class NSString;


@protocol TVHJSMediaEntitySearchController <JSExport>
@property (nonatomic,copy) NSString * searchText; 
@required
+(id)create:(id)arg1;
-(void)resume;
-(void)pause;
-(NSString *)searchText;
-(void)setSearchText:(id)arg1;

@end


@class NSString, NSMutableArray, TVHKMediaEntitySearchRequest, TVHKMediaEntitySearchController, TVHCollectionChangesToJSCollectionChangesValueTransformer;

@interface TVHJSMediaEntitySearchController : TVHJSObject <TVHKMediaEntitySearchControllerDelegate, TVHJSMediaEntitySearchController> {

	NSMutableArray* _jsMovies;
	NSMutableArray* _jsMovieRentals;
	NSMutableArray* _jsShows;
	NSMutableArray* _jsShowEpisodes;
	NSMutableArray* _jsMusicAlbums;
	NSMutableArray* _jsMusicAlbumArtists;
	NSMutableArray* _jsMusicSongs;
	NSMutableArray* _jsMusicVideos;
	NSMutableArray* _jsPodcasts;
	NSMutableArray* _jsPodcastEpisodes;
	NSMutableArray* _jsITunesUCourses;
	NSMutableArray* _jsITunesUEpisodes;
	NSMutableArray* _jsAudiobooks;
	NSMutableArray* _jsAudiobookChapters;
	NSMutableArray* _jsHomeVideos;
	TVHKMediaEntitySearchRequest* _searchRequest;
	TVHKMediaEntitySearchController* _wrappedFetchController;
	TVHCollectionChangesToJSCollectionChangesValueTransformer* _collectionChangesValueTransformer;

}

@property (setter=setJSMovies:,nonatomic,retain) NSMutableArray * jsMovies;                                                              //@synthesize jsMovies=_jsMovies - In the implementation block
@property (setter=setJSMovieRentals:,nonatomic,retain) NSMutableArray * jsMovieRentals;                                                  //@synthesize jsMovieRentals=_jsMovieRentals - In the implementation block
@property (setter=setJSShows:,nonatomic,retain) NSMutableArray * jsShows;                                                                //@synthesize jsShows=_jsShows - In the implementation block
@property (setter=setJSShowEpisodes:,nonatomic,retain) NSMutableArray * jsShowEpisodes;                                                  //@synthesize jsShowEpisodes=_jsShowEpisodes - In the implementation block
@property (setter=setJSMusicAlbums:,nonatomic,retain) NSMutableArray * jsMusicAlbums;                                                    //@synthesize jsMusicAlbums=_jsMusicAlbums - In the implementation block
@property (setter=setJSMusicAlbumArtists:,nonatomic,retain) NSMutableArray * jsMusicAlbumArtists;                                        //@synthesize jsMusicAlbumArtists=_jsMusicAlbumArtists - In the implementation block
@property (setter=setJSMusicSongs:,nonatomic,retain) NSMutableArray * jsMusicSongs;                                                      //@synthesize jsMusicSongs=_jsMusicSongs - In the implementation block
@property (setter=setJSMusicVideos:,nonatomic,retain) NSMutableArray * jsMusicVideos;                                                    //@synthesize jsMusicVideos=_jsMusicVideos - In the implementation block
@property (setter=setJSPodcasts:,nonatomic,retain) NSMutableArray * jsPodcasts;                                                          //@synthesize jsPodcasts=_jsPodcasts - In the implementation block
@property (setter=setJSPodcastEpisodes:,nonatomic,retain) NSMutableArray * jsPodcastEpisodes;                                            //@synthesize jsPodcastEpisodes=_jsPodcastEpisodes - In the implementation block
@property (setter=setJSITunesUCourses:,nonatomic,retain) NSMutableArray * jsITunesUCourses;                                              //@synthesize jsITunesUCourses=_jsITunesUCourses - In the implementation block
@property (setter=setJSITunesUEpisodes:,nonatomic,retain) NSMutableArray * jsITunesUEpisodes;                                            //@synthesize jsITunesUEpisodes=_jsITunesUEpisodes - In the implementation block
@property (setter=setJSAudiobooks:,nonatomic,retain) NSMutableArray * jsAudiobooks;                                                      //@synthesize jsAudiobooks=_jsAudiobooks - In the implementation block
@property (setter=setJSAudiobookChapters:,nonatomic,retain) NSMutableArray * jsAudiobookChapters;                                        //@synthesize jsAudiobookChapters=_jsAudiobookChapters - In the implementation block
@property (setter=setJSHomeVideos:,nonatomic,retain) NSMutableArray * jsHomeVideos;                                                      //@synthesize jsHomeVideos=_jsHomeVideos - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitySearchRequest * searchRequest;                                                               //@synthesize searchRequest=_searchRequest - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitySearchController * wrappedFetchController;                                                   //@synthesize wrappedFetchController=_wrappedFetchController - In the implementation block
@property (nonatomic,retain) TVHCollectionChangesToJSCollectionChangesValueTransformer * collectionChangesValueTransformer;              //@synthesize collectionChangesValueTransformer=_collectionChangesValueTransformer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * searchText; 
+(id)create:(id)arg1 ;
-(void)resume;
-(void)pause;
-(NSString *)searchText;
-(id)initWithAppContext:(id)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(TVHKMediaEntitySearchRequest *)searchRequest;
-(void)_updateMutableArraysWithResult:(id)arg1 ;
-(void)controller:(id)arg1 searchRequest:(id)arg2 didCompleteWithResult:(id)arg3 ;
-(void)controller:(id)arg1 searchRequest:(id)arg2 didFailWithError:(id)arg3 ;
-(void)setSearchRequest:(TVHKMediaEntitySearchRequest *)arg1 ;
-(TVHKMediaEntitySearchController *)wrappedFetchController;
-(TVHCollectionChangesToJSCollectionChangesValueTransformer *)collectionChangesValueTransformer;
-(void)setWrappedFetchController:(TVHKMediaEntitySearchController *)arg1 ;
-(void)setCollectionChangesValueTransformer:(TVHCollectionChangesToJSCollectionChangesValueTransformer *)arg1 ;
-(id)initWithMediaServer:(id)arg1 appContext:(id)arg2 ;
-(NSMutableArray *)jsMovies;
-(void)_updateJSMediaQueryResult:(id)arg1 withJSMediaEntities:(id)arg2 andChanges:(id)arg3 ;
-(NSMutableArray *)jsMovieRentals;
-(NSMutableArray *)jsShows;
-(NSMutableArray *)jsShowEpisodes;
-(NSMutableArray *)jsMusicAlbums;
-(NSMutableArray *)jsMusicAlbumArtists;
-(NSMutableArray *)jsMusicSongs;
-(NSMutableArray *)jsMusicVideos;
-(NSMutableArray *)jsPodcasts;
-(NSMutableArray *)jsPodcastEpisodes;
-(NSMutableArray *)jsITunesUCourses;
-(NSMutableArray *)jsITunesUEpisodes;
-(NSMutableArray *)jsAudiobooks;
-(NSMutableArray *)jsAudiobookChapters;
-(NSMutableArray *)jsHomeVideos;
-(void)_updateMutableArray:(id)arg1 withResult:(id)arg2 ;
-(void)setJSMovies:(id)arg1 ;
-(void)setJSMovieRentals:(id)arg1 ;
-(void)setJSShows:(id)arg1 ;
-(void)setJSShowEpisodes:(id)arg1 ;
-(void)setJSMusicAlbums:(id)arg1 ;
-(void)setJSMusicAlbumArtists:(id)arg1 ;
-(void)setJSMusicSongs:(id)arg1 ;
-(void)setJSMusicVideos:(id)arg1 ;
-(void)setJSPodcasts:(id)arg1 ;
-(void)setJSPodcastEpisodes:(id)arg1 ;
-(void)setJSITunesUCourses:(id)arg1 ;
-(void)setJSITunesUEpisodes:(id)arg1 ;
-(void)setJSAudiobooks:(id)arg1 ;
-(void)setJSAudiobookChapters:(id)arg1 ;
-(void)setJSHomeVideos:(id)arg1 ;
@end


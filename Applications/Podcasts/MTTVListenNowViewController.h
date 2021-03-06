/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:18 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTTVEpisodeSplitViewController.h>

@class MTUuidQueryObserver;

@interface MTTVListenNowViewController : MTTVEpisodeSplitViewController {

	MTUuidQueryObserver* _podcastsObserver;
	unsigned long long _podcastState;

}

@property (nonatomic,retain) MTUuidQueryObserver * podcastsObserver;              //@synthesize podcastsObserver=_podcastsObserver - In the implementation block
@property (assign,nonatomic) unsigned long long podcastState;                     //@synthesize podcastState=_podcastState - In the implementation block
-(id)init;
-(void)viewDidLoad;
-(unsigned long long)podcastState;
-(void)setPodcastState:(unsigned long long)arg1 ;
-(id)emptyContentViewControllerForCurrentPodcastState;
-(void)startObserveringPodcasts;
-(void)setPodcastsObserver:(MTUuidQueryObserver *)arg1 ;
-(MTUuidQueryObserver *)podcastsObserver;
@end


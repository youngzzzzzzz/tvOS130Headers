/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:21 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTPodcastSectionedDetailListController.h>
#import <Podcasts/MTTVPodcastHeaderViewDelegate.h>
#import <Podcasts/MTShowSettingsViewControllerDelegate.h>
#import <Podcasts/MTTVListViewControllerProtocol.h>

@class MTPodcast, NSIndexPath, MTTVPodcastHeaderView, UITapGestureRecognizer, UILongPressGestureRecognizer, MTTVEpisodeActionController, MTAllPropertyChangesQueryObserver, NSString;

@interface MTTVPodcastEpisodeListViewController : MTPodcastSectionedDetailListController <MTTVPodcastHeaderViewDelegate, MTShowSettingsViewControllerDelegate, MTTVListViewControllerProtocol> {

	MTPodcast* _podcast;
	NSIndexPath* _selectedIndexPath;
	NSIndexPath* _lastFocusedIndexPath;
	MTTVPodcastHeaderView* _podcastHeaderView;
	UITapGestureRecognizer* _playButtonRecognizer;
	UITapGestureRecognizer* _playButtonRecognizerForHeader;
	UILongPressGestureRecognizer* _longPressRecognizer;
	MTTVEpisodeActionController* _actionController;
	MTAllPropertyChangesQueryObserver* _darkObserver;

}

@property (nonatomic,retain) MTTVPodcastHeaderView * podcastHeaderView;                           //@synthesize podcastHeaderView=_podcastHeaderView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * playButtonRecognizer;                       //@synthesize playButtonRecognizer=_playButtonRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * playButtonRecognizerForHeader;              //@synthesize playButtonRecognizerForHeader=_playButtonRecognizerForHeader - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressRecognizer;                  //@synthesize longPressRecognizer=_longPressRecognizer - In the implementation block
@property (nonatomic,retain) MTTVEpisodeActionController * actionController;                      //@synthesize actionController=_actionController - In the implementation block
@property (nonatomic,retain) MTAllPropertyChangesQueryObserver * darkObserver;                    //@synthesize darkObserver=_darkObserver - In the implementation block
@property (nonatomic,readonly) MTPodcast * podcast;                                               //@synthesize podcast=_podcast - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                     //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * lastFocusedIndexPath;                                  //@synthesize lastFocusedIndexPath=_lastFocusedIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(MTPodcast *)podcast;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(void)setCellStyle:(unsigned long long)arg1 ;
-(MTTVEpisodeActionController *)actionController;
-(NSIndexPath *)lastFocusedIndexPath;
-(void)setLastFocusedIndexPath:(NSIndexPath *)arg1 ;
-(id)reuseIdentifierForRow:(id)arg1 ;
-(void)longPressAction:(id)arg1 ;
-(id)newCellInstanceWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(id)deleteEpisodeAction;
-(BOOL)_isIndexPathForSettings:(id)arg1 ;
-(void)selectedItemAtIndexPath:(id)arg1 ;
-(void)_showSettings;
-(id)rightButtonItems;
-(id)initWithPodcast:(id)arg1 ;
-(void)playPauseButtonAction:(id)arg1 ;
-(void)setPlayButtonRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)playButtonRecognizer;
-(void)setActionController:(MTTVEpisodeActionController *)arg1 ;
-(void)setLongPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)longPressRecognizer;
-(id)createEmptySectionCell;
-(id)messageForEmptySection;
-(BOOL)hasEmptySection;
-(id)initWithPodcastUUID:(id)arg1 ;
-(void)switchToTab:(unsigned long long)arg1 ;
-(void)showSettings:(id)arg1 changedEpisodeLimit:(long long)arg2 ;
-(void)showSettings:(id)arg1 changedDeletedPlayedEpisodes:(long long)arg2 ;
-(void)showSettings:(id)arg1 changedSubscribed:(BOOL)arg2 ;
-(void)showSettings:(id)arg1 changedNotifications:(BOOL)arg2 ;
-(void)showSettings:(id)arg1 changedEpisodeOrderAscending:(BOOL)arg2 ;
-(void)showSettings:(id)arg1 changedShowType:(long long)arg2 ;
-(void)podcastHeaderDidSwitchToTab:(unsigned long long)arg1 ;
-(void)setPodcastHeaderView:(MTTVPodcastHeaderView *)arg1 ;
-(MTTVPodcastHeaderView *)podcastHeaderView;
-(void)setPlayButtonRecognizerForHeader:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)playButtonRecognizerForHeader;
-(MTAllPropertyChangesQueryObserver *)darkObserver;
-(void)_refreshFeedIfNeeded;
-(BOOL)_isIndexPathForDarkPlacard:(id)arg1 ;
-(void)_resetGoDark;
-(BOOL)hasDarkPlacard;
-(BOOL)_isSectionForSettings:(long long)arg1 ;
-(BOOL)_isSectionForDarkPlacard:(long long)arg1 ;
-(void)updateDarkPlacard;
-(void)setDarkObserver:(MTAllPropertyChangesQueryObserver *)arg1 ;
@end

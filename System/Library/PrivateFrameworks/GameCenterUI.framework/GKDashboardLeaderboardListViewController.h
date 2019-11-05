/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GKDashboardCollectionViewController.h>

@class GKLeaderboardSet;

@interface GKDashboardLeaderboardListViewController : GKDashboardCollectionViewController {

	GKLeaderboardSet* _leaderboardSet;

}

@property (nonatomic,retain) GKLeaderboardSet * leaderboardSet;              //@synthesize leaderboardSet=_leaderboardSet - In the implementation block
-(void)dealloc;
-(void)viewDidLoad;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2 ;
-(void)setLeaderboardSet:(GKLeaderboardSet *)arg1 ;
-(GKLeaderboardSet *)leaderboardSet;
@end

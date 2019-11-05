/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/PlugIns/GameCenterDashboardExtension.appex/GameCenterDashboardExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GKExtensionViewController.h>
#import <GameCenterDashboardExtension/GKDashboardServiceInterface.h>

@class NSString, NSDictionary;

@interface GKDashboardExtensionViewController : GKExtensionViewController <GKDashboardServiceInterface> {

	BOOL _shouldShowPlayForChallenge;
	BOOL _shouldShowPlayForTurnBasedMatch;
	BOOL _shouldShowQuitForTurnBasedMatch;
	long long _viewState;
	long long _leaderboardTimeScope;
	NSString* _leaderboardIdentifier;
	NSDictionary* _dashboardAssetNames;
	NSDictionary* _leaderboardSetAssetNames;
	NSDictionary* _leaderboardAssetNames;

}

@property (assign,nonatomic) long long viewState;                                  //@synthesize viewState=_viewState - In the implementation block
@property (assign,nonatomic) long long leaderboardTimeScope;                       //@synthesize leaderboardTimeScope=_leaderboardTimeScope - In the implementation block
@property (nonatomic,copy) NSString * leaderboardIdentifier;                       //@synthesize leaderboardIdentifier=_leaderboardIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlayForChallenge;                      //@synthesize shouldShowPlayForChallenge=_shouldShowPlayForChallenge - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlayForTurnBasedMatch;                 //@synthesize shouldShowPlayForTurnBasedMatch=_shouldShowPlayForTurnBasedMatch - In the implementation block
@property (assign,nonatomic) BOOL shouldShowQuitForTurnBasedMatch;                 //@synthesize shouldShowQuitForTurnBasedMatch=_shouldShowQuitForTurnBasedMatch - In the implementation block
@property (nonatomic,retain) NSDictionary * dashboardAssetNames;                   //@synthesize dashboardAssetNames=_dashboardAssetNames - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardSetAssetNames;              //@synthesize leaderboardSetAssetNames=_leaderboardSetAssetNames - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardAssetNames;                 //@synthesize leaderboardAssetNames=_leaderboardAssetNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(long long)viewState;
-(void)setViewState:(long long)arg1 ;
-(NSString *)leaderboardIdentifier;
-(void)setLeaderboardIdentifier:(NSString *)arg1 ;
-(BOOL)shouldShowPlayForTurnBasedMatch;
-(BOOL)shouldShowQuitForTurnBasedMatch;
-(void)setInitialState:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setShouldShowPlayForChallenge:(BOOL)arg1 ;
-(void)setShouldShowPlayForTurnBasedMatch:(BOOL)arg1 ;
-(void)setShouldShowQuitForTurnBasedMatch:(BOOL)arg1 ;
-(void)requestDashboardLogoImageWithHandler:(/*^block*/id)arg1 ;
-(void)setDashboardAssetNames:(NSDictionary *)arg1 ;
-(void)setLeaderboardSetAssetNames:(NSDictionary *)arg1 ;
-(void)setLeaderboardAssetNames:(NSDictionary *)arg1 ;
-(long long)leaderboardTimeScope;
-(void)setLeaderboardTimeScope:(long long)arg1 ;
-(void)setDashboardAssetNames:(id)arg1 leaderboardSetAssetNames:(id)arg2 leaderboardAssetNames:(id)arg3 ;
-(BOOL)shouldShowPlayForChallenge;
-(NSDictionary *)dashboardAssetNames;
-(NSDictionary *)leaderboardSetAssetNames;
-(NSDictionary *)leaderboardAssetNames;
-(void)messageFromClient:(id)arg1 ;
-(void)requestImagesForLeaderboardSetsWithHandler:(/*^block*/id)arg1 ;
-(void)dashboardDidChangeToLeaderboardIdentifier:(id)arg1 ;
-(void)dashboardDidChangeToLeaderboardTimeScope:(long long)arg1 ;
-(void)requestImagesForLeaderboardsInSet:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)finishWithTurnBasedMatch:(id)arg1 ;
-(void)quitTurnBasedMatch:(id)arg1 ;
-(void)finishAndPlayChallenge:(id)arg1 ;
-(void)dashboardDidChangeToViewState:(long long)arg1 ;
-(void)constructContentViewController;
-(id)hostObjectProxy;
-(id)dashboard;
@end

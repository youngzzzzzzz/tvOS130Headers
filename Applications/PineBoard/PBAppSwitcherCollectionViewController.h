/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:29 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PineBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <PineBoard/PBAppSwitcherDataSourceDelegate.h>
#import <PineBoard/PBPresentationElementFocusCoordinatorObserver.h>

@class PBAppSwitcherDataSource, TVSStateMachine, NSIndexPath, _PBAppSwitcherCollectionView, PBAppSwitcherTitleView, UIInterpolatingMotionEffect, UIPanGestureRecognizer, UITapGestureRecognizer, PBAppSwitcherItem, UIViewPropertyAnimator, NSString;

@interface PBAppSwitcherCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, PBAppSwitcherDataSourceDelegate, PBPresentationElementFocusCoordinatorObserver> {

	BOOL _panningVertically;
	BOOL _panningHorizontally;
	BOOL _scrolling;
	BOOL _peekEffectEnabled;
	PBAppSwitcherDataSource* _appSwitcherDataSource;
	TVSStateMachine* _stateMachine;
	NSIndexPath* _preferredIndexPath;
	_PBAppSwitcherCollectionView* _collectionView;
	PBAppSwitcherTitleView* _titleView;
	UIInterpolatingMotionEffect* _peekEffect;
	UIPanGestureRecognizer* _panRecognizer;
	UITapGestureRecognizer* _upRecognizer;
	PBAppSwitcherItem* _focusedItem;
	PBAppSwitcherItem* _pendingLaunchItem;
	PBAppSwitcherItem* _killedItem;
	/*^block*/id _launchCompletionHandler;
	UIViewPropertyAnimator* _switcherAnimator;
	/*^block*/id _presentationCompletion;
	/*^block*/id _dismissalCompletion;
	CGPoint _initialDragLocation;

}

@property (nonatomic,retain) TVSStateMachine * stateMachine;                                     //@synthesize stateMachine=_stateMachine - In the implementation block
@property (assign,nonatomic) CGPoint initialDragLocation;                                        //@synthesize initialDragLocation=_initialDragLocation - In the implementation block
@property (assign,getter=isPanningVertically,nonatomic) BOOL panningVertically;                  //@synthesize panningVertically=_panningVertically - In the implementation block
@property (assign,getter=isPanningHorizontally,nonatomic) BOOL panningHorizontally;              //@synthesize panningHorizontally=_panningHorizontally - In the implementation block
@property (assign,getter=isScrolling,nonatomic) BOOL scrolling;                                  //@synthesize scrolling=_scrolling - In the implementation block
@property (nonatomic,retain) NSIndexPath * preferredIndexPath;                                   //@synthesize preferredIndexPath=_preferredIndexPath - In the implementation block
@property (nonatomic,retain) _PBAppSwitcherCollectionView * collectionView;                      //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) PBAppSwitcherTitleView * titleView;                                 //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic) BOOL peekEffectEnabled;                                             //@synthesize peekEffectEnabled=_peekEffectEnabled - In the implementation block
@property (nonatomic,readonly) UIInterpolatingMotionEffect * peekEffect;                         //@synthesize peekEffect=_peekEffect - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panRecognizer;                           //@synthesize panRecognizer=_panRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * upRecognizer;                            //@synthesize upRecognizer=_upRecognizer - In the implementation block
@property (nonatomic,retain) PBAppSwitcherItem * focusedItem;                                    //@synthesize focusedItem=_focusedItem - In the implementation block
@property (nonatomic,retain) PBAppSwitcherItem * pendingLaunchItem;                              //@synthesize pendingLaunchItem=_pendingLaunchItem - In the implementation block
@property (nonatomic,retain) PBAppSwitcherItem * killedItem;                                     //@synthesize killedItem=_killedItem - In the implementation block
@property (nonatomic,copy) id launchCompletionHandler;                                           //@synthesize launchCompletionHandler=_launchCompletionHandler - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * switcherAnimator;                          //@synthesize switcherAnimator=_switcherAnimator - In the implementation block
@property (nonatomic,copy) id presentationCompletion;                                            //@synthesize presentationCompletion=_presentationCompletion - In the implementation block
@property (nonatomic,copy) id dismissalCompletion;                                               //@synthesize dismissalCompletion=_dismissalCompletion - In the implementation block
@property (nonatomic,readonly) PBAppSwitcherDataSource * appSwitcherDataSource;                  //@synthesize appSwitcherDataSource=_appSwitcherDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)setScrolling:(BOOL)arg1 ;
-(BOOL)isScrolling;
-(TVSStateMachine *)stateMachine;
-(void)setStateMachine:(TVSStateMachine *)arg1 ;
-(_PBAppSwitcherCollectionView *)collectionView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(_PBAppSwitcherCollectionView *)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(PBAppSwitcherTitleView *)titleView;
-(void)setTitleView:(PBAppSwitcherTitleView *)arg1 ;
-(PBAppSwitcherItem *)focusedItem;
-(void)setPreferredIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)preferredIndexPath;
-(void)_initializeStateMachine;
-(void)presentationElementFocusCoordinator:(id)arg1 didUpdateToActiveLayoutLevel:(long long)arg2 fromLevel:(long long)arg3 ;
-(void)transitionToSwitcherWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateSceneLayoutElements;
-(void)dataSource:(id)arg1 didReceiveLaunchRequestForItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dataSourceDidEnqueuePendingUpdates:(id)arg1 ;
-(id)dismissalCompletion;
-(void)setDismissalCompletion:(id)arg1 ;
-(CGPoint)_preferredContentOffsetForIndexPath:(id)arg1 ;
-(void)upDoubleTapped:(id)arg1 ;
-(void)panGestureRecognizerMoved:(id)arg1 ;
-(void)_invalidateSceneViewForCell:(id)arg1 ;
-(void)setPresentationCompletion:(id)arg1 ;
-(void)_showAppSwitcher;
-(void)setPeekEffectEnabled:(BOOL)arg1 ;
-(void)_setKillGestureRecognizersEnabled:(BOOL)arg1 ;
-(BOOL)_servicePendingUpdatesWithAnimation:(BOOL)arg1 ;
-(id)presentationCompletion;
-(void)_activatePendingLaunchItem;
-(id)launchCompletionHandler;
-(void)setLaunchCompletionHandler:(id)arg1 ;
-(PBAppSwitcherItem *)pendingLaunchItem;
-(PBAppSwitcherDataSource *)appSwitcherDataSource;
-(UIViewPropertyAnimator *)switcherAnimator;
-(BOOL)_activateItem:(id)arg1 ;
-(void)setPendingLaunchItem:(PBAppSwitcherItem *)arg1 ;
-(BOOL)_shouldScrollToItem:(id)arg1 scrollIfNeeded:(BOOL)arg2 forced:(BOOL)arg3 ;
-(void)_launchItem:(id)arg1 shouldAnimateLayoutSwitch:(BOOL)arg2 ;
-(void)_prepareToLaunchItemImmediately:(id)arg1 ;
-(void)_updateKillSwipeWithOffset:(double)arg1 ;
-(void)_finishKillSwipeWithVelocity:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cancelKillSwipeWithVelocity:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleCollectionViewUpdatesWithAnimation:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSwitcherAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)__applyPendingUpdatesToCollectionView;
-(CGPoint)initialDragLocation;
-(void)setInitialDragLocation:(CGPoint)arg1 ;
-(BOOL)isPanningVertically;
-(void)setPanningVertically:(BOOL)arg1 ;
-(BOOL)isPanningHorizontally;
-(void)setPanningHorizontally:(BOOL)arg1 ;
-(BOOL)peekEffectEnabled;
-(UIInterpolatingMotionEffect *)peekEffect;
-(UIPanGestureRecognizer *)panRecognizer;
-(UITapGestureRecognizer *)upRecognizer;
-(void)setFocusedItem:(PBAppSwitcherItem *)arg1 ;
-(PBAppSwitcherItem *)killedItem;
-(void)setKilledItem:(PBAppSwitcherItem *)arg1 ;
@end


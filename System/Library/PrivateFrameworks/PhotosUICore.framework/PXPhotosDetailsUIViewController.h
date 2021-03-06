/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <PhotosUICore/PXWidgetCompositionDelegate.h>
#import <PhotosUICore/PXChangeObserver.h>
#import <PhotosUICore/PXUIViewControllerZoomTransitionEndPoint.h>
#import <PhotosUICore/PXActionPerformerDelegate.h>
#import <PhotosUICore/PXWidgetUnlockDelegate.h>
#import <PhotosUICore/PXForcedDismissableViewController.h>
#import <PhotosUICore/PXScrollViewControllerObserver.h>
#import <PhotosUICore/PXPurgeableController.h>

@protocol PXPhotosDetailsUIViewControllerDelegate, PXUIWidget, PXAssetCollectionActionPerformerDelegate;
@class PXPhotosDetailsContext, PXPhotosDetailsViewModel, PXUIScrollViewController, NSArray, NSMapTable, PXPhotosDetailsHeaderTileWidget, PXTilingController, PXWidgetComposition, PXPhotosDetailsSpecManager, NSMutableArray, PXWidgetSpec, PXSwipeSelectionManager, UIView, NSUserActivity, PXBarsController, PXScrollViewController, UIScrollView, NSString;

@interface PXPhotosDetailsUIViewController : UIViewController <PXWidgetCompositionDelegate, PXChangeObserver, PXUIViewControllerZoomTransitionEndPoint, PXActionPerformerDelegate, PXWidgetUnlockDelegate, PXForcedDismissableViewController, PXScrollViewControllerObserver, PXPurgeableController> {

	SCD_Struct_PX37 _delegateRespondsTo;
	BOOL __hasAppeared;
	BOOL __shouldFocusHeader;
	BOOL _empty;
	PXPhotosDetailsContext* _context;
	unsigned long long _options;
	id<PXPhotosDetailsUIViewControllerDelegate> _delegate;
	PXPhotosDetailsViewModel* __viewModel;
	PXUIScrollViewController* __scrollViewController;
	NSArray* __widgets;
	NSMapTable* __widgetOptions;
	PXPhotosDetailsHeaderTileWidget* __headerWidget;
	PXTilingController* __headerAssetWidgetTilingController;
	PXWidgetComposition* __composition;
	PXPhotosDetailsSpecManager* __specManager;
	NSMutableArray* __widgetDisablingDimmingViews;
	PXWidgetSpec* __widgetSpec;
	PXSwipeSelectionManager* __swipeSelectionManager;
	Class __barsControllerClass;
	/*^block*/id __unlockStatus;
	/*^block*/id __unlockHandler;
	id<PXUIWidget> __previewWidget;
	UIView* __headerTileView;
	/*^block*/id __ppt_allWidgetLoadingCompleteHandler;
	/*^block*/id __ppt_variationsWidgetLoadingCompleteHandler;
	NSUserActivity* _siriActionActivity;
	PXBarsController* _barsController;
	id<PXAssetCollectionActionPerformerDelegate> _actionPerformerDelegate;
	unsigned long long _occludedContentEdges;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,readonly) PXPhotosDetailsViewModel * _viewModel;                                                                          //@synthesize _viewModel=__viewModel - In the implementation block
@property (nonatomic,readonly) PXUIScrollViewController * _scrollViewController;                                                               //@synthesize _scrollViewController=__scrollViewController - In the implementation block
@property (nonatomic,readonly) NSArray * _widgets;                                                                                             //@synthesize _widgets=__widgets - In the implementation block
@property (nonatomic,readonly) NSMapTable * _widgetOptions;                                                                                    //@synthesize _widgetOptions=__widgetOptions - In the implementation block
@property (nonatomic,readonly) PXPhotosDetailsHeaderTileWidget * _headerWidget;                                                                //@synthesize _headerWidget=__headerWidget - In the implementation block
@property (nonatomic,readonly) PXTilingController * _headerAssetWidgetTilingController;                                                        //@synthesize _headerAssetWidgetTilingController=__headerAssetWidgetTilingController - In the implementation block
@property (nonatomic,readonly) PXWidgetComposition * _composition;                                                                             //@synthesize _composition=__composition - In the implementation block
@property (nonatomic,readonly) PXPhotosDetailsSpecManager * _specManager;                                                                      //@synthesize _specManager=__specManager - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _widgetDisablingDimmingViews;                                                                  //@synthesize _widgetDisablingDimmingViews=__widgetDisablingDimmingViews - In the implementation block
@property (setter=_setWidgetSpec:,nonatomic,retain) PXWidgetSpec * _widgetSpec;                                                                //@synthesize _widgetSpec=__widgetSpec - In the implementation block
@property (assign,setter=_setHasAppeared:,nonatomic) BOOL _hasAppeared;                                                                        //@synthesize _hasAppeared=__hasAppeared - In the implementation block
@property (setter=_setSwipeSelectionManager:,nonatomic,retain) PXSwipeSelectionManager * _swipeSelectionManager;                               //@synthesize _swipeSelectionManager=__swipeSelectionManager - In the implementation block
@property (nonatomic,readonly) Class _barsControllerClass;                                                                                     //@synthesize _barsControllerClass=__barsControllerClass - In the implementation block
@property (nonatomic,copy,readonly) id _unlockStatus;                                                                                          //@synthesize _unlockStatus=__unlockStatus - In the implementation block
@property (nonatomic,copy,readonly) id _unlockHandler;                                                                                         //@synthesize _unlockHandler=__unlockHandler - In the implementation block
@property (nonatomic,readonly) id<PXUIWidget> _previewWidget;                                                                                  //@synthesize _previewWidget=__previewWidget - In the implementation block
@property (assign,setter=_setShouldFocusHeader:,nonatomic) BOOL _shouldFocusHeader;                                                            //@synthesize _shouldFocusHeader=__shouldFocusHeader - In the implementation block
@property (setter=_setHeaderTileView:,nonatomic,retain) UIView * _headerTileView;                                                              //@synthesize _headerTileView=__headerTileView - In the implementation block
@property (setter=_ppt_setAllWidgetLoadingCompleteHandler:,nonatomic,copy) id _ppt_allWidgetLoadingCompleteHandler;                            //@synthesize _ppt_allWidgetLoadingCompleteHandler=__ppt_allWidgetLoadingCompleteHandler - In the implementation block
@property (setter=_ppt_setVariationsWidgetLoadingCompleteHandler:,nonatomic,copy) id _ppt_variationsWidgetLoadingCompleteHandler;              //@synthesize _ppt_variationsWidgetLoadingCompleteHandler=__ppt_variationsWidgetLoadingCompleteHandler - In the implementation block
@property (nonatomic,retain) NSUserActivity * siriActionActivity;                                                                              //@synthesize siriActionActivity=_siriActionActivity - In the implementation block
@property (nonatomic,readonly) PXBarsController * barsController;                                                                              //@synthesize barsController=_barsController - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                                                                                   //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (nonatomic,readonly) PXScrollViewController * scrollViewController; 
@property (assign,nonatomic,__weak) id<PXAssetCollectionActionPerformerDelegate> actionPerformerDelegate;                                      //@synthesize actionPerformerDelegate=_actionPerformerDelegate - In the implementation block
@property (assign,getter=isEmpty,nonatomic) BOOL empty;                                                                                        //@synthesize empty=_empty - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> presentedKeyAsset; 
@property (assign,nonatomic) unsigned long long occludedContentEdges;                                                                          //@synthesize occludedContentEdges=_occludedContentEdges - In the implementation block
@property (nonatomic,readonly) BOOL shouldUpdateStatusBarTitle; 
@property (nonatomic,readonly) UIScrollView * ppt_scrollView; 
@property (nonatomic,readonly) PXPhotosDetailsContext * context;                                                                               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                                                                     //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosDetailsUIViewControllerDelegate> delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL keepsSourceRegionOfInterestContent; 
+(void)preloadResources;
-(void)dealloc;
-(unsigned long long)options;
-(BOOL)isEmpty;
-(id)initWithCoder:(id)arg1 ;
-(id<PXPhotosDetailsUIViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PXPhotosDetailsUIViewControllerDelegate>)arg1 ;
-(PXPhotosDetailsContext *)context;
-(void)setEmpty:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_hasAppeared;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(CGSize)preferredContentSize;
-(id)contentScrollView;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(UIEdgeInsets)contentEdgeInsets;
-(PXWidgetSpec *)_widgetSpec;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXPhotosDetailsViewModel *)_viewModel;
-(void)_updateTitleAndSubtitle;
-(id)zoomAnimationCoordinatorForZoomTransition:(id)arg1 ;
-(id)regionOfInterestForTransition:(id)arg1 ;
-(void)preloadWithSourceRegionOfInterest:(id)arg1 forTransition:(id)arg2 ;
-(void)scrollRegionOfInterestToVisible:(id)arg1 forTransition:(id)arg2 ;
-(id)removeBackgroundColorForTransition:(id)arg1 ;
-(void)restoreBackgroundColor:(id)arg1 forTransition:(id)arg2 ;
-(void)prepareForInteractiveTransition:(id)arg1 ;
-(void)scrollViewControllerWillLayoutSubviews:(id)arg1 ;
-(void)scrollViewControllerWillBeginScrolling:(id)arg1 ;
-(void)scrollViewControllerDidScroll:(id)arg1 ;
-(PXUIScrollViewController *)_scrollViewController;
-(PXScrollViewController *)scrollViewController;
-(BOOL)px_canPerformPinchTransitionWithMasterViewController:(id)arg1 ;
-(id<PXAssetCollectionActionPerformerDelegate>)actionPerformerDelegate;
-(void)setActionPerformerDelegate:(id<PXAssetCollectionActionPerformerDelegate>)arg1 ;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(PXPhotosDetailsSpecManager *)_specManager;
-(UIScrollView *)ppt_scrollView;
-(void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(PXWidgetComposition *)_composition;
-(id<PXDisplayAsset>)presentedKeyAsset;
-(void)playMiroMovieWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)ppt_navigateToMovieWithCompletionHandler:(/*^block*/id)arg1 ;
-(PXSwipeSelectionManager *)_swipeSelectionManager;
-(PXBarsController *)barsController;
-(void)_updateScrollViewControllerContentInset;
-(BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg1 ;
-(id)px_endPointForTransition:(id)arg1 ;
-(Class)_barsControllerClass;
-(void)purgeIfPossible;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(BOOL)widgetDeviceIsUnlocked:(id)arg1 ;
-(void)widget:(id)arg1 performAfterUnlockingDeviceIfNecessary:(/*^block*/id)arg2 failurehandler:(/*^block*/id)arg3 ;
-(BOOL)widgetComposition:(id)arg1 requestViewControllerDismissalAnimated:(BOOL)arg2 ;
-(BOOL)widgetCompositionHasContentAbove:(id)arg1 ;
-(BOOL)widgetComposition:(id)arg1 shouldUseEdgeToEdgeLayoutForWidget:(id)arg2 ;
-(long long)widgetComposition:(id)arg1 loadingPriorityForWidget:(id)arg2 ;
-(BOOL)widgetComposition:(id)arg1 widget:(id)arg2 transitionToViewController:(id)arg3 withTransitionType:(long long)arg4 ;
-(void)widgetComposition:(id)arg1 widgetHasLoadedContentDataDidChange:(id)arg2 ;
-(void)widgetComposition:(id)arg1 didUpdateCompositionWithDefaultAnimationOptions:(id)arg2 ;
-(NSObject*)widgetComposition:(id)arg1 viewControllerHostingWidget:(id)arg2 ;
-(id)initWithContext:(id)arg1 configuration:(id)arg2 ;
-(void)_updateStatusBarTitle;
-(unsigned long long)_userEventSourceForDetailView:(id)arg1 ;
-(void)_viewWillLayoutBeforeAppearing;
-(BOOL)_dismissSelfIfSafeAnimated:(BOOL)arg1 ;
-(BOOL)shouldUpdateStatusBarTitle;
-(unsigned long long)occludedContentEdges;
-(void)_handleWidgetsLoadingDelay;
-(void)_ensureScrollViewController;
-(void)_ensureComposition;
-(void)_loadComposition;
-(BOOL)_shouldShowMovieHeader;
-(void)_loadWidgets;
-(void)_setWidgetSpec:(id)arg1 ;
-(void)_updateAllWidgetsSpec;
-(void)_updateAllWidgetsSelectionState;
-(void)_updateAllWidgetsFaceModeState;
-(unsigned long long)_optionsForWidget:(id)arg1 ;
-(id)_photosDetailsContextForTransition:(id)arg1 ;
-(id)_photosDetailsContextForTransitionWithViewController:(id)arg1 ;
-(id)standaloneMapViewController;
-(void)_updateWidgetDisablingWithAnimationOptions:(id)arg1 ;
-(void)_handleDeviceDidUnlock;
-(BOOL)px_isSnapBackDestination;
-(void)_invalidateCompositionSpec;
-(void)_updateCompositionSpec;
-(void)_invalidateWidgetSpec;
-(void)_updateWidgetSpec;
-(void)_invalidateBarSpec;
-(void)_updateBarSpec;
-(BOOL)px_canPerformZoomTransitionWithMasterViewController:(id)arg1 ;
-(BOOL)px_canPerformSwipeDownTransitionWithMasterViewController:(id)arg1 ;
-(id)_regionOfInterestForContext:(id)arg1 ;
-(void)_performAddToMemoriesAnimation;
-(void)ppt_toggleDiscloseWidgets;
-(void)ppt_performBlockAfterAllWidgetLoadingCompletes:(/*^block*/id)arg1 ;
-(void)ppt_performBlockAfterVariationsWidgetLoadingCompletes:(/*^block*/id)arg1 ;
-(void)_ppt_setAllWidgetLoadingCompleteHandler:(/*^block*/id)arg1 ;
-(void)_ppt_setVariationsWidgetLoadingCompleteHandler:(/*^block*/id)arg1 ;
-(void)_ppt_informWidgetsLoadedHandlerIfNeeded;
-(NSArray *)_widgets;
-(NSMapTable *)_widgetOptions;
-(PXPhotosDetailsHeaderTileWidget *)_headerWidget;
-(PXTilingController *)_headerAssetWidgetTilingController;
-(NSMutableArray *)_widgetDisablingDimmingViews;
-(void)_setHasAppeared:(BOOL)arg1 ;
-(void)_setSwipeSelectionManager:(id)arg1 ;
-(id)_unlockStatus;
-(id)_unlockHandler;
-(id<PXUIWidget>)_previewWidget;
-(BOOL)_shouldFocusHeader;
-(void)_setShouldFocusHeader:(BOOL)arg1 ;
-(UIView *)_headerTileView;
-(void)_setHeaderTileView:(id)arg1 ;
-(id)_ppt_allWidgetLoadingCompleteHandler;
-(id)_ppt_variationsWidgetLoadingCompleteHandler;
-(NSUserActivity *)siriActionActivity;
-(void)setSiriActionActivity:(NSUserActivity *)arg1 ;
-(void)setOccludedContentEdges:(unsigned long long)arg1 ;
@end


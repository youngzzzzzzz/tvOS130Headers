/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <TVKit/MPAssetKeyDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol OS_dispatch_source;
@class NSDictionary, TVMarimbaView, UIVisualEffectView, UITableView, UIView, UIActivityIndicatorView, UITapGestureRecognizer, NSObject, NSArray, NSString, TVSlideshowUtilities, NSTimer;

@interface TVSlideshowMarimbaViewController : UIViewController <MPAssetKeyDelegate, UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate> {

	BOOL _displaysTransitionStyleOptions;
	BOOL _updatePlaybackOnThemeSelection;
	BOOL _displayThemeOptions;
	BOOL _didPauseMarimbaRenderer;
	NSDictionary* _options;
	long long _slideshowStartIndex;
	/*^block*/id _completionHandler;
	TVMarimbaView* _marimbaView;
	UIVisualEffectView* _blurBackgroundView;
	UITableView* _slideshowOptionsView;
	UIView* _headerView;
	UIActivityIndicatorView* _preloadSpinnerView;
	UITapGestureRecognizer* _menuGestureRecognizer;
	UITapGestureRecognizer* _playPauseGestureRecognizer;
	UITapGestureRecognizer* _leftButtonRecognizer;
	UITapGestureRecognizer* _rightButtonRecognizer;
	NSObject*<OS_dispatch_source> _assetsRefreshTimer;
	NSArray* _photoAssets;
	NSArray* _slideshowThemeSettings;
	NSArray* _slideshowTransitionSettings;
	NSDictionary* _assetKeysToAssetPaths;
	NSDictionary* _themeParameters;
	NSString* _focusedThemeForPreview;
	TVSlideshowUtilities* _slideshowUtilites;
	long long _initialImagePrefetchCount;
	long long _indexOfNextImageToPrefetch;
	long long _minImageFetchPreloadGap;
	long long _maxImageBatchPreloadCount;
	NSTimer* _themeTimer;
	NSString* _slideshowStyle;

}

@property (nonatomic,retain) TVMarimbaView * marimbaView;                                      //@synthesize marimbaView=_marimbaView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurBackgroundView;                          //@synthesize blurBackgroundView=_blurBackgroundView - In the implementation block
@property (nonatomic,retain) UITableView * slideshowOptionsView;                               //@synthesize slideshowOptionsView=_slideshowOptionsView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * preloadSpinnerView;                     //@synthesize preloadSpinnerView=_preloadSpinnerView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * menuGestureRecognizer;                   //@synthesize menuGestureRecognizer=_menuGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * playPauseGestureRecognizer;              //@synthesize playPauseGestureRecognizer=_playPauseGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * leftButtonRecognizer;                    //@synthesize leftButtonRecognizer=_leftButtonRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * rightButtonRecognizer;                   //@synthesize rightButtonRecognizer=_rightButtonRecognizer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> assetsRefreshTimer;                 //@synthesize assetsRefreshTimer=_assetsRefreshTimer - In the implementation block
@property (nonatomic,copy) NSArray * photoAssets;                                              //@synthesize photoAssets=_photoAssets - In the implementation block
@property (nonatomic,copy) NSArray * slideshowThemeSettings;                                   //@synthesize slideshowThemeSettings=_slideshowThemeSettings - In the implementation block
@property (nonatomic,copy) NSArray * slideshowTransitionSettings;                              //@synthesize slideshowTransitionSettings=_slideshowTransitionSettings - In the implementation block
@property (nonatomic,copy) NSDictionary * assetKeysToAssetPaths;                               //@synthesize assetKeysToAssetPaths=_assetKeysToAssetPaths - In the implementation block
@property (nonatomic,copy) NSDictionary * themeParameters;                                     //@synthesize themeParameters=_themeParameters - In the implementation block
@property (nonatomic,copy) NSString * focusedThemeForPreview;                                  //@synthesize focusedThemeForPreview=_focusedThemeForPreview - In the implementation block
@property (nonatomic,retain) TVSlideshowUtilities * slideshowUtilites;                         //@synthesize slideshowUtilites=_slideshowUtilites - In the implementation block
@property (assign,nonatomic) long long initialImagePrefetchCount;                              //@synthesize initialImagePrefetchCount=_initialImagePrefetchCount - In the implementation block
@property (assign,nonatomic) long long indexOfNextImageToPrefetch;                             //@synthesize indexOfNextImageToPrefetch=_indexOfNextImageToPrefetch - In the implementation block
@property (assign,nonatomic) long long minImageFetchPreloadGap;                                //@synthesize minImageFetchPreloadGap=_minImageFetchPreloadGap - In the implementation block
@property (assign,nonatomic) long long maxImageBatchPreloadCount;                              //@synthesize maxImageBatchPreloadCount=_maxImageBatchPreloadCount - In the implementation block
@property (nonatomic,retain) NSTimer * themeTimer;                                             //@synthesize themeTimer=_themeTimer - In the implementation block
@property (assign,nonatomic) BOOL displayThemeOptions;                                         //@synthesize displayThemeOptions=_displayThemeOptions - In the implementation block
@property (assign,nonatomic) BOOL didPauseMarimbaRenderer;                                     //@synthesize didPauseMarimbaRenderer=_didPauseMarimbaRenderer - In the implementation block
@property (nonatomic,copy) NSString * slideshowStyle;                                          //@synthesize slideshowStyle=_slideshowStyle - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options;                                    //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL displaysTransitionStyleOptions;                              //@synthesize displaysTransitionStyleOptions=_displaysTransitionStyleOptions - In the implementation block
@property (assign,nonatomic) long long slideshowStartIndex;                                    //@synthesize slideshowStartIndex=_slideshowStartIndex - In the implementation block
@property (assign,nonatomic) BOOL updatePlaybackOnThemeSelection;                              //@synthesize updatePlaybackOnThemeSelection=_updatePlaybackOnThemeSelection - In the implementation block
@property (nonatomic,copy) id completionHandler;                                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_photoAssetsForImageProxies:(id)arg1 ;
+(id)_photoAssetsFromPHAssets:(id)arg1 ;
+(id)_inFlightImageProxiesFromAssets:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSDictionary *)options;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIView *)headerView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setHeaderView:(UIView *)arg1 ;
-(id)preferredFocusEnvironments;
-(UITapGestureRecognizer *)playPauseGestureRecognizer;
-(UITapGestureRecognizer *)menuGestureRecognizer;
-(void)setMenuGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)_leftAction:(id)arg1 ;
-(void)_rightAction:(id)arg1 ;
-(void)_menuAction:(id)arg1 ;
-(id)initWithImageProxies:(id)arg1 options:(id)arg2 ;
-(id)initWithImageProxies:(id)arg1 ;
-(id)initWithImageProxies:(id)arg1 options:(id)arg2 displayThemeOptions:(BOOL)arg3 ;
-(void)setDisplaysTransitionStyleOptions:(BOOL)arg1 ;
-(void)setUpdatePlaybackOnThemeSelection:(BOOL)arg1 ;
-(void)addImageProxies:(id)arg1 ;
-(NSString *)slideshowStyle;
-(void)setSlideshowStyle:(NSString *)arg1 ;
-(NSArray *)slideshowThemeSettings;
-(void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2 ;
-(void)setSlideshowStartIndex:(long long)arg1 ;
-(id)absolutePathForAssetKey:(id)arg1 ;
-(id)absolutePathForAssetKey:(id)arg1 andSize:(CGSize)arg2 ;
-(id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(CGSize)_getAttributedTextSize:(id)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(NSArray *)photoAssets;
-(id)initWithPhotoAssets:(id)arg1 ;
-(id)initWithPhotoAssets:(id)arg1 displayThemeOptions:(BOOL)arg2 ;
-(void)refreshPhotoAssets:(id)arg1 ;
-(void)setSlideshowThemeSettings:(NSArray *)arg1 ;
-(NSArray *)slideshowTransitionSettings;
-(void)setSlideshowTransitionSettings:(NSArray *)arg1 ;
-(void)setPhotoAssets:(NSArray *)arg1 ;
-(void)_initializeSlideshowMarimbaParametersWithOptions:(id)arg1 displayThemeOptions:(BOOL)arg2 ;
-(void)_updateMarimbaDocumentWithAddedAssets:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)assetsRefreshTimer;
-(void)setAssetsRefreshTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_refreshMarimbaPreviewWithPhotoAssets:(id)arg1 ;
-(void)_playPauseAction:(id)arg1 ;
-(void)_marimbaSlideshowPlaybackFinished:(id)arg1 ;
-(void)_usedAllPathsNotification:(id)arg1 ;
-(void)_reorderAssets;
-(void)_displayImagePreloadSpinnerView;
-(void)_dismissImagePreloadSpinnerView;
-(TVSlideshowUtilities *)slideshowUtilites;
-(TVMarimbaView *)marimbaView;
-(void)setAssetKeysToAssetPaths:(NSDictionary *)arg1 ;
-(BOOL)displayThemeOptions;
-(UITableView *)slideshowOptionsView;
-(void)_startSlideshow;
-(UITapGestureRecognizer *)leftButtonRecognizer;
-(UITapGestureRecognizer *)rightButtonRecognizer;
-(void)_preloadImagesForAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)_unpauseMarimbaRenderer;
-(void)_cancelExistingTimer;
-(void)_pauseMarimbaRenderer;
-(long long)initialImagePrefetchCount;
-(void)setIndexOfNextImageToPrefetch:(long long)arg1 ;
-(id)_defaultImageRequestOptions;
-(long long)_indexOfAssetPathInOrderedAssets:(id)arg1 ;
-(void)_didFinishTimedInterval:(id)arg1 ;
-(void)_fingerTouchAction:(id)arg1 ;
-(void)setMinImageFetchPreloadGap:(long long)arg1 ;
-(long long)minImageFetchPreloadGap;
-(void)setMaxImageBatchPreloadCount:(long long)arg1 ;
-(void)setInitialImagePrefetchCount:(long long)arg1 ;
-(BOOL)displaysTransitionStyleOptions;
-(long long)slideshowStartIndex;
-(BOOL)updatePlaybackOnThemeSelection;
-(void)setMarimbaView:(TVMarimbaView *)arg1 ;
-(UIVisualEffectView *)blurBackgroundView;
-(void)setBlurBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)setSlideshowOptionsView:(UITableView *)arg1 ;
-(UIActivityIndicatorView *)preloadSpinnerView;
-(void)setPreloadSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(void)setPlayPauseGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setLeftButtonRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setRightButtonRecognizer:(UITapGestureRecognizer *)arg1 ;
-(NSDictionary *)assetKeysToAssetPaths;
-(NSDictionary *)themeParameters;
-(void)setThemeParameters:(NSDictionary *)arg1 ;
-(NSString *)focusedThemeForPreview;
-(void)setFocusedThemeForPreview:(NSString *)arg1 ;
-(void)setSlideshowUtilites:(TVSlideshowUtilities *)arg1 ;
-(long long)indexOfNextImageToPrefetch;
-(long long)maxImageBatchPreloadCount;
-(NSTimer *)themeTimer;
-(void)setThemeTimer:(NSTimer *)arg1 ;
-(void)setDisplayThemeOptions:(BOOL)arg1 ;
-(BOOL)didPauseMarimbaRenderer;
-(void)setDidPauseMarimbaRenderer:(BOOL)arg1 ;
@end

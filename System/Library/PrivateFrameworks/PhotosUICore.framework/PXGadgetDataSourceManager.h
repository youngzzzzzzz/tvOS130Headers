/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <PhotosUICore/PXGadgetProviderDelegate.h>
#import <PhotosUICore/PXGadgetDelegate.h>

@protocol PXGadgetDelegate, OS_dispatch_queue;
@class NSArray, NSObject, NSMutableArray, PXGadgetDataSource, NSString, PXGadgetNavigationHelper;

@interface PXGadgetDataSourceManager : PXSectionedDataSourceManager <PXGadgetProviderDelegate, PXGadgetDelegate> {

	BOOL _hasLoadedPriorities;
	BOOL _loadingInitialGadgets;
	BOOL _needsToLoadAllProviders;
	id<PXGadgetDelegate> _nextGadgetResponder;
	NSArray* _cachedProviders;
	NSObject*<OS_dispatch_queue> _lookupQueue;
	NSMutableArray* _lookupQueue_loadedProviders;

}

@property (nonatomic,copy) NSArray * cachedProviders;                                        //@synthesize cachedProviders=_cachedProviders - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lookupQueue;                       //@synthesize lookupQueue=_lookupQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * lookupQueue_loadedProviders;                   //@synthesize lookupQueue_loadedProviders=_lookupQueue_loadedProviders - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedPriorities;                                       //@synthesize hasLoadedPriorities=_hasLoadedPriorities - In the implementation block
@property (assign,nonatomic) BOOL loadingInitialGadgets;                                     //@synthesize loadingInitialGadgets=_loadingInitialGadgets - In the implementation block
@property (assign,nonatomic) BOOL needsToLoadAllProviders;                                   //@synthesize needsToLoadAllProviders=_needsToLoadAllProviders - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> gadgetDataSourceManagerLog; 
@property (nonatomic,readonly) NSArray * gadgetProviders; 
@property (nonatomic,readonly) id gadgetSortComparator; 
@property (nonatomic,readonly) id gadgetProviderSortComparator; 
@property (nonatomic,readonly) PXGadgetDataSource * dataSource; 
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> nextGadgetResponder;                //@synthesize nextGadgetResponder=_nextGadgetResponder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<PXGadgetTransition> gadgetTransition; 
@property (nonatomic,readonly) PXGadgetNavigationHelper * rootNavigationHelper; 
-(id)init;
-(id)initWithQueueName:(id)arg1 ;
-(id)createInitialDataSource;
-(NSObject*)gadgetViewControllerHostingGadget:(id)arg1 ;
-(void)gadget:(id)arg1 animateChanges:(/*^block*/id)arg2 ;
-(void)gadget:(id)arg1 didChange:(unsigned long long)arg2 ;
-(id<PXGadgetDelegate>)nextGadgetResponder;
-(void)setNextGadgetResponder:(id<PXGadgetDelegate>)arg1 ;
-(BOOL)gadget:(id)arg1 transitionToViewController:(NSObject*)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentGadgetViewController:(NSObject*)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissGadgetViewController:(NSObject*)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id<PXGadgetTransition>)gadgetTransition;
-(PXGadgetNavigationHelper *)rootNavigationHelper;
-(void)_updateDataSource;
-(NSArray *)gadgetProviders;
-(id)_dataSourceSnapshot;
-(id)gadgetSortComparator;
-(void)invalidateGadgets;
-(void)removeCachedProviders;
-(void)didLoadDataForPriorities;
-(id)gadgetProviderSortComparator;
-(id)filteredUndisplayedGadgets:(id)arg1 ;
-(id)noContentGadget;
-(void)beginLoadingInitialGadgets:(unsigned long long)arg1 ;
-(void)loadRemainingGadgetsIfNeeded;
-(void)loadRemainingGadgetsIfNeededWithGenerateGadgetFinishedBlock:(/*^block*/id)arg1 ;
-(NSArray *)cachedProviders;
-(id)allGadgets;
-(void)_loadPriorityForProviders:(id)arg1 ;
-(void)_loadDataFromProviders:(id)arg1 withGadgetMinimum:(unsigned long long)arg2 ;
-(id)_sortedGadgets;
-(NSObject*<OS_os_log>)gadgetDataSourceManagerLog;
-(void)setCachedProviders:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)lookupQueue;
-(void)setLookupQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)lookupQueue_loadedProviders;
-(void)setLookupQueue_loadedProviders:(NSMutableArray *)arg1 ;
-(BOOL)hasLoadedPriorities;
-(void)setHasLoadedPriorities:(BOOL)arg1 ;
-(BOOL)loadingInitialGadgets;
-(void)setLoadingInitialGadgets:(BOOL)arg1 ;
-(BOOL)needsToLoadAllProviders;
-(void)setNeedsToLoadAllProviders:(BOOL)arg1 ;
@end


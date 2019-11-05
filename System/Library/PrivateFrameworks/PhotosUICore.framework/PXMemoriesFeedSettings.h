/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXSettings.h>

@interface PXMemoriesFeedSettings : PXSettings {

	BOOL _useSlowAnimations;
	BOOL _forceReloadAfterRefresh;
	BOOL _disableRoundedOverlays;
	BOOL _displayContentDuringGraphRebuild;
	BOOL _alwaysShowOnboarding;
	long long _dataSourceType;
	long long _memoryGroupingMethod;
	double _memoryGroupingInterval;
	double _additionalContentThreshold;
	unsigned long long _groupsPerBatch;
	long long _favoriteMemoriesSortOrder;
	long long _sharingBehavior;

}

@property (assign,nonatomic) long long dataSourceType;                           //@synthesize dataSourceType=_dataSourceType - In the implementation block
@property (assign,nonatomic) BOOL useSlowAnimations;                             //@synthesize useSlowAnimations=_useSlowAnimations - In the implementation block
@property (assign,nonatomic) BOOL forceReloadAfterRefresh;                       //@synthesize forceReloadAfterRefresh=_forceReloadAfterRefresh - In the implementation block
@property (assign,nonatomic) BOOL disableRoundedOverlays;                        //@synthesize disableRoundedOverlays=_disableRoundedOverlays - In the implementation block
@property (assign,nonatomic) BOOL displayContentDuringGraphRebuild;              //@synthesize displayContentDuringGraphRebuild=_displayContentDuringGraphRebuild - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowOnboarding;                          //@synthesize alwaysShowOnboarding=_alwaysShowOnboarding - In the implementation block
@property (assign,nonatomic) long long memoryGroupingMethod;                     //@synthesize memoryGroupingMethod=_memoryGroupingMethod - In the implementation block
@property (assign,nonatomic) double memoryGroupingInterval;                      //@synthesize memoryGroupingInterval=_memoryGroupingInterval - In the implementation block
@property (assign,nonatomic) double additionalContentThreshold;                  //@synthesize additionalContentThreshold=_additionalContentThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long groupsPerBatch;                  //@synthesize groupsPerBatch=_groupsPerBatch - In the implementation block
@property (assign,nonatomic) long long favoriteMemoriesSortOrder;                //@synthesize favoriteMemoriesSortOrder=_favoriteMemoriesSortOrder - In the implementation block
@property (assign,nonatomic) long long sharingBehavior;                          //@synthesize sharingBehavior=_sharingBehavior - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
+(id)_resetRejectedMemories;
-(void)setDefaultValues;
-(id)parentSettings;
-(long long)_defaultDataSourceType;
-(long long)dataSourceType;
-(void)setDataSourceType:(long long)arg1 ;
-(BOOL)useSlowAnimations;
-(void)setUseSlowAnimations:(BOOL)arg1 ;
-(BOOL)forceReloadAfterRefresh;
-(void)setForceReloadAfterRefresh:(BOOL)arg1 ;
-(BOOL)disableRoundedOverlays;
-(void)setDisableRoundedOverlays:(BOOL)arg1 ;
-(BOOL)displayContentDuringGraphRebuild;
-(void)setDisplayContentDuringGraphRebuild:(BOOL)arg1 ;
-(BOOL)alwaysShowOnboarding;
-(void)setAlwaysShowOnboarding:(BOOL)arg1 ;
-(long long)memoryGroupingMethod;
-(void)setMemoryGroupingMethod:(long long)arg1 ;
-(double)memoryGroupingInterval;
-(void)setMemoryGroupingInterval:(double)arg1 ;
-(double)additionalContentThreshold;
-(void)setAdditionalContentThreshold:(double)arg1 ;
-(unsigned long long)groupsPerBatch;
-(void)setGroupsPerBatch:(unsigned long long)arg1 ;
-(long long)favoriteMemoriesSortOrder;
-(void)setFavoriteMemoriesSortOrder:(long long)arg1 ;
-(long long)sharingBehavior;
-(void)setSharingBehavior:(long long)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusNewClassicProducer.opplugin/OpusNewClassicProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKProducer.h>

@class NSString, NSMutableArray;

@interface OpusNewClassicProducer : OKProducer {

	unsigned long long _currentFeederIndex;
	double _transitionDuration;
	NSString* _transitionPanningType;
	double _audioPlaylistDuration;
	NSMutableArray* _couchStepDurations;
	long long _couchStepDurationIndex;
	NSMutableArray* _synopsisGroups;

}
+(void)setupJavascriptContext:(id)arg1 ;
-(id)_createContentEffectSettingsForMediatItemAtIndex:(unsigned long long)arg1 metadata:(id)arg2 ;
-(id)_setupResolutions;
-(void)_initNavigatorSettings;
-(id)stringForTransitionDirection:(unsigned long long)arg1 ;
-(id)_fontSizesFromScreenSizes:(id)arg1 ;
-(id)transitionForType:(id)arg1 withDuration:(double)arg2 withDirection:(unsigned long long)arg3 ;
-(void)_initCouchPotatoSettings;
-(id)_titleFramesFromScreenSizes:(id)arg1 ;
-(void)_addSynopsisGuideline:(id)arg1 forPageName:(id)arg2 withTextItem:(id)arg3 ;
-(void)_initDurationsForMediaItems:(id)arg1 ;
-(BOOL)_authorBootstrap:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)_authorCluster:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)_authorProduce:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)_authorFinish:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)_addPageForMediaItem:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)_authorImport:(id)arg1 flatten:(BOOL)arg2 progressBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(void)_initTemplates;
-(id)_contentModeOfPageForAllResolutions:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)supportsLiveAuthoring;
-(BOOL)author:(BOOL)arg1 progressBlock:(/*^block*/id)arg2 requiresProducer:(inout BOOL*)arg3 error:(id*)arg4 ;
-(BOOL)liveAuthorInitialBootstrap:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)needsLiveAuthoring;
-(id)liveAuthorNextChunk:(/*^block*/id)arg1 error:(id*)arg2 ;
-(float)currentLiveAuthoringProgress;
-(unsigned long long)totalNumberOfLiveAuthoringItems;
-(float)liveAuthoringProgressForMediaItem:(id)arg1 ;
-(BOOL)resetLiveAuthoring;
@end

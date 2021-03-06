/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGAbstractSuggester.h>
#import <PhotosGraph/PGCoordinatableSuggester.h>

@class PGSuggestionOptions, NSArray, NSEnumerator, PLPhotoEditPersistenceManager, NSMutableDictionary, PLPhotoEffect, NSString;

@interface PGStudioLightSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {

	PGSuggestionOptions* _options;
	NSArray* _suggestedAssets;
	NSEnumerator* _suggestedAssetEnumerator;
	PLPhotoEditPersistenceManager* _photoEditPersistenceManager;
	NSMutableDictionary* _compositionControllerByAssetUUID;
	NSMutableDictionary* _assetMasterSizeByAssetUUID;
	PLPhotoEffect* _studioLightPhotoEffect;
	NSMutableDictionary* _recipeReasonByAssetUUID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionTypes;
+(id)suggestionSubtypes;
-(id)initWithSession:(id)arg1 ;
-(void)reset;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)reasonsForSuggestion:(id)arg1 ;
-(void)startSuggestingWithOptions:(id)arg1 ;
-(id)nextSuggestion;
-(id)suggestedAssetsInAssets:(id)arg1 ;
-(id)suggestedAssetsInAssets:(id)arg1 options:(id)arg2 ;
-(id)suggestionWithAsset:(id)arg1 ;
-(id)portraitsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 ;
-(id)compositionControllerForAsset:(id)arg1 baseVersion:(out long long*)arg2 ;
-(id)studioLightRecipeWithAsset:(id)arg1 ;
@end


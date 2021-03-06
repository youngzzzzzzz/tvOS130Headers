/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLResourceDataStore.h>

@class PLPhotoLibraryPathManager, NSString;

@interface PLResourceDataStore : NSObject <PLResourceDataStore> {

	AQ _nextLocalAvailabilityRequestID;
	PLPhotoLibraryPathManager* _pathManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager;              //@synthesize pathManager=_pathManager - In the implementation block
+(unsigned)storeClassID;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(BOOL)keyDataIsValid:(id)arg1 ;
+(id)supportedRecipes;
+(BOOL)isMasterThumbRecipeID:(unsigned)arg1 ;
-(id)name;
-(PLPhotoLibraryPathManager *)pathManager;
-(id)initWithPathManager:(id)arg1 ;
-(id)descriptionForSubtype:(long long)arg1 ;
-(id)keyFromKeyStruct:(const void*)arg1 ;
-(id)resourceDataForKey:(id)arg1 assetID:(id)arg2 ;
-(id)resourceURLForKey:(id)arg1 assetID:(id)arg2 ;
-(id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned)arg2 ;
-(id)virtualResourcesForAsset:(id)arg1 ;
-(BOOL)canStoreExternalResource:(id)arg1 ;
-(id)guessUTIForExternalResource:(id)arg1 forAssetKind:(short)arg2 managedObjectContext:(id)arg3 ;
-(BOOL)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id*)arg5 resultingResource:(id*)arg6 ;
-(unsigned long long)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)cancelLocalAvailabilityChangeRequest:(unsigned long long)arg1 ;
-(void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned)arg2 ;
-(BOOL)canStreamResource:(id)arg1 ;
-(void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 inContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(unsigned long long)nextLocalAvailabilityRequestID;
-(BOOL)verifyAndFixLocalAvailabilityForResource:(id)arg1 asset:(id)arg2 managedObjectContext:(id)arg3 ;
@end


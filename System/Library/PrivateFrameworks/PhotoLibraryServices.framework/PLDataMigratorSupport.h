/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLPhotoLibraryPathManager;

@interface PLDataMigratorSupport : NSObject {

	os_unfair_lock_s _lock;
	PLPhotoLibraryPathManager* _pathManager;

}

@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager;              //@synthesize pathManager=_pathManager - In the implementation block
-(PLPhotoLibraryPathManager *)pathManager;
-(id)initWithPathManager:(id)arg1 ;
-(void)writeModelMigratorPostProcessingToken;
-(void)setCapturedOTARestoreStatus;
-(BOOL)hasCapturedOTARestoreStatus;
-(void)recordDataMigrationInfo:(id)arg1 ;
-(void)_removeModelInterestDatabase;
-(void)_removeInternalMemoriesRelatedSnapshotDirectory;
-(void)_removeAsidePhotosDatabase;
-(void)_removeLegacyMetadataFiles;
@end


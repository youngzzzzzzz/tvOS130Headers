/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineClientCacheImplementation.h>

@class NSString;

@interface CPLPrequeliteClientCache : CPLPrequeliteStorage <CPLEngineClientCacheImplementation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)status;
-(BOOL)addRecord:(id)arg1 error:(id*)arg2 ;
-(id)initWithAbstractObject:(id)arg1 ;
-(id)statusDictionary;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)hasRecordWithScopedIdentifier:(id)arg1 ;
-(id)statusPerScopeIndex;
-(id)recordWithScopedIdentifier:(id)arg1 ;
-(BOOL)updateRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteRecordWithScopedIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1 ;
-(id)recordsWithRelatedScopedIdentifier:(id)arg1 ;
-(id)recordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(BOOL)hasRecordWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(void)fillRelatedIdentifiersInChange:(id)arg1 ;
-(BOOL)initializeStorage;
-(BOOL)upgradeStorageToVersion:(long long)arg1 ;
-(id)_badContainerRelationsIdentifiers;
-(BOOL)_updateRelatedIdentifier:(id)arg1 forRecordWithIdentifier:(id)arg2 ;
-(BOOL)_deleteBadRelations;
@end

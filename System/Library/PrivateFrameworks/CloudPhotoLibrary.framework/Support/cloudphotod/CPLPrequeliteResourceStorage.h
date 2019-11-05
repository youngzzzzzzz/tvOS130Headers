/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineResourceStorageImplementation.h>

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteResourceStorage : CPLPrequeliteStorage <CPLEngineResourceStorageImplementation> {

	CPLPrequeliteVariable* _totalSizeVar;
	CPLPrequeliteVariable* _totalOriginalSizeVar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)status;
-(id)initWithAbstractObject:(id)arg1 ;
-(BOOL)resetWithError:(id*)arg1 ;
-(unsigned long long)retainCountForIdentity:(id)arg1 ;
-(unsigned long long)totalOriginalResourceSize;
-(BOOL)releaseIdentity:(id)arg1 lastReference:(BOOL*)arg2 isTrackedOriginal:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)retainIdentity:(id)arg1 isTrackedOriginal:(BOOL)arg2 error:(id*)arg3 ;
-(unsigned long long)totalResourceSize;
-(BOOL)initializeStorage;
-(BOOL)upgradeStorageToVersion:(long long)arg1 ;
-(BOOL)_incrementTotalResourceSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_incrementTotalOriginalResourceSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_decrementTotalResourceSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_decrementTotalOriginalResourceSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)enumerateIdentitiesWithBlock:(/*^block*/id)arg1 ;
@end

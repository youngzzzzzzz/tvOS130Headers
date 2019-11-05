/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCollectionsDataSource.h>

@class PHFetchResult, NSString;

@interface PXTransientCollectionsDataSource : PXCollectionsDataSource {

	PHFetchResult* _fetchResult;
	NSString* _navigationRootIdentifier;

}

@property (nonatomic,readonly) PHFetchResult * fetchResult;                      //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,readonly) NSString * navigationRootIdentifier;              //@synthesize navigationRootIdentifier=_navigationRootIdentifier - In the implementation block
-(id)init;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PHFetchResult *)fetchResult;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(id)initWithFetchResult:(id)arg1 ;
-(id)objectsInIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)indexPathForCollection:(id)arg1 ;
-(id)collectionAtIndexPath:(id)arg1 ;
-(id)collectionListForSection:(long long)arg1 ;
-(id)initWithNavigationRootTitle:(id)arg1 identifier:(id)arg2 photoLibrary:(id)arg3 ;
-(NSString *)navigationRootIdentifier;
@end

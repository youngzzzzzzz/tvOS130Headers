/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXCuratedLibraryAssetsDataSourceManagerConfiguration.h>

@class PXAssetsDataSourceManager;

@interface _PXExplicitCuratedLibraryAssetsDataSourceManagerConfiguration : PXCuratedLibraryAssetsDataSourceManagerConfiguration {

	PXAssetsDataSourceManager* _yearsAssetsDataSourceManager;
	PXAssetsDataSourceManager* _monthsAssetsDataSourceManager;
	PXAssetsDataSourceManager* _daysAssetsDataSourceManager;

}
-(id)configurationForZoomLevel:(long long)arg1 ;
-(id)initWithYearsAssetsDataSourceManager:(id)arg1 monthsAssetsDataSourceManager:(id)arg2 daysAssetsDataSourceManager:(id)arg3 ;
@end


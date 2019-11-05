/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetsdLibraryManagementServiceProtocol.h>

@class PLAssetsdConnectionAuthorization, PLPhotoLibraryBundleController, NSString;

@interface PLAssetsdLibraryManagementService : NSObject <PLAssetsdLibraryManagementServiceProtocol> {

	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	PLPhotoLibraryBundleController* _bundleController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getPhotoLibraryURLsWithReply:(/*^block*/id)arg1 ;
-(void)setSystemPhotoLibraryURL:(id)arg1 bookmark:(id)arg2 options:(unsigned short)arg3 reply:(/*^block*/id)arg4 ;
-(void)getActivePhotoLibrariesWithReply:(/*^block*/id)arg1 ;
-(id)initWithConnectionAuthorization:(id)arg1 bundleController:(id)arg2 ;
-(void)_disableCloudServicesInPhotoLibraryBundle:(id)arg1 withReason:(id)arg2 ;
@end

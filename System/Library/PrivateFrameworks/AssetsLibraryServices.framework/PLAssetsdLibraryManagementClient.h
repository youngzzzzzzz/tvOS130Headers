/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdLibraryManagementClient : PLAssetsdBaseClient
-(BOOL)setSystemPhotoLibraryURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)removePhotoLibraryURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)overrideSystemPhotoLibraryURL:(id)arg1 error:(id*)arg2 ;
-(id)activePhotoLibraries:(id*)arg1 ;
-(void)getPhotoLibraryURLsWithReply:(/*^block*/id)arg1 ;
@end


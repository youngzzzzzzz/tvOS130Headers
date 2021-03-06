/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/NSCopying.h>

@class PHFetchResult, NSDictionary;

@interface PXCMMMomentsInvitationsDataSourceState : NSObject <NSCopying> {

	PHFetchResult* _assetCollections;
	NSDictionary* _invitationsByAssetCollectionObjectID;

}

@property (nonatomic,readonly) PHFetchResult * assetCollections;                                 //@synthesize assetCollections=_assetCollections - In the implementation block
@property (nonatomic,readonly) NSDictionary * invitationsByAssetCollectionObjectID;              //@synthesize invitationsByAssetCollectionObjectID=_invitationsByAssetCollectionObjectID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stateUpdatedWithChange:(id)arg1 changeDetails:(id*)arg2 ;
-(PHFetchResult *)assetCollections;
-(id)initWithAssetCollections:(id)arg1 invitationsByAssetCollectionObjectID:(id)arg2 ;
-(NSDictionary *)invitationsByAssetCollectionObjectID;
@end


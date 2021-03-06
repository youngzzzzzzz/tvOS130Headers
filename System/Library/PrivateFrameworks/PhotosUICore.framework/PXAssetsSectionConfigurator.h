/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXAssetsSectionLayoutSpec;

@interface PXAssetsSectionConfigurator : NSObject {

	PXAssetsSectionLayoutSpec* _assetsSectionLayoutSpec;
	UIEdgeInsets _containerInsets;

}

@property (nonatomic,readonly) PXAssetsSectionLayoutSpec * assetsSectionLayoutSpec; 
@property (nonatomic,readonly) UIEdgeInsets containerInsets;                                     //@synthesize containerInsets=_containerInsets - In the implementation block
-(id)init;
-(id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2 ;
-(id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2 ;
-(void)configureAssetSectionLayout:(id)arg1 ;
-(PXAssetsSectionLayoutSpec *)assetsSectionLayoutSpec;
-(id)updatedHeaderLayout:(id)arg1 withHeaderStyle:(long long)arg2 forAssetSectionLayout:(id)arg3 ;
-(CGRect)containerFrameForAssetSectionLayout:(id)arg1 ;
-(UIEdgeInsets)containerInsets;
@end


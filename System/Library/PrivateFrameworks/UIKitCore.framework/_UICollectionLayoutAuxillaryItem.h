/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSCollectionLayoutSize, NSString, NSCollectionLayoutAnchor, NSCollectionLayoutItem, NSCollectionLayoutSupplementaryItem, NSCollectionLayoutBoundarySupplementaryItem, NSCollectionLayoutDecorationItem;


@protocol _UICollectionLayoutAuxillaryItem <NSObject>
@property (nonatomic,readonly) NSCollectionLayoutSize * size; 
@property (nonatomic,readonly) NSString * elementKind; 
@property (nonatomic,readonly) NSCollectionLayoutAnchor * containerAnchor; 
@property (nonatomic,readonly) NSCollectionLayoutAnchor * itemAnchor; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets contentInsets; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets _effectiveContentInsets; 
@property (nonatomic,readonly) long long zIndex; 
@property (nonatomic,readonly) NSCollectionLayoutItem * item; 
@property (nonatomic,readonly) NSCollectionLayoutSupplementaryItem * supplementaryItem; 
@property (nonatomic,readonly) NSCollectionLayoutBoundarySupplementaryItem * boundarySupplementaryItem; 
@property (nonatomic,readonly) NSCollectionLayoutDecorationItem * decorationItem; 
@required
-(NSCollectionLayoutSize *)size;
-(NSCollectionLayoutItem *)item;
-(NSDirectionalEdgeInsets)contentInsets;
-(long long)zIndex;
-(NSString *)elementKind;
-(NSDirectionalEdgeInsets)_effectiveContentInsets;
-(NSCollectionLayoutAnchor *)containerAnchor;
-(NSCollectionLayoutAnchor *)itemAnchor;
-(NSCollectionLayoutSupplementaryItem *)supplementaryItem;
-(NSCollectionLayoutBoundarySupplementaryItem *)boundarySupplementaryItem;
-(NSCollectionLayoutDecorationItem *)decorationItem;

@end


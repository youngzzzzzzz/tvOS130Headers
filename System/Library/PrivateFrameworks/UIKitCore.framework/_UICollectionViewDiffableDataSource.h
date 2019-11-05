/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIDiffableDataSourceSnapshotter.h>

@class UICollectionView;

@interface _UICollectionViewDiffableDataSource : _UIDiffableDataSourceSnapshotter

@property (nonatomic,copy) id supplementaryViewProvider; 
@property (nonatomic,__weak,readonly) UICollectionView * collectionView; 
@property (nonatomic,copy) id supplementaryReuseIdentifierProvider; 
@property (nonatomic,copy) id supplementaryConfigurationHandler; 
-(UICollectionView *)collectionView;
-(id)initWithCollectionView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
-(void)setSupplementaryViewProvider:(id)arg1 ;
-(id)supplementaryViewProvider;
-(id)supplementaryReuseIdentifierProvider;
-(id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(/*^block*/id)arg2 cellConfigurationHandler:(/*^block*/id)arg3 ;
-(void)setSupplementaryReuseIdentifierProvider:(id)arg1 ;
-(id)supplementaryConfigurationHandler;
-(void)setSupplementaryConfigurationHandler:(id)arg1 ;
@end

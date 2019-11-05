/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSMutableArray;

@interface SYNMediaWallCollectionViewCondensedLayout2 : UICollectionViewLayout {

	float _spacingRatio;
	unsigned long long _numberOfRows;
	NSMutableArray* _attributes;
	NSMutableArray* _sectionAttributes;
	double _largestWidth;
	CGSize _contentSize;
	CGRect _oldBounds;

}

@property (assign) float spacingRatio;                           //@synthesize spacingRatio=_spacingRatio - In the implementation block
@property (assign) unsigned long long numberOfRows;              //@synthesize numberOfRows=_numberOfRows - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidateLayout;
-(unsigned long long)numberOfRows;
-(void)setNumberOfRows:(unsigned long long)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(void)setSpacingRatio:(float)arg1 ;
-(id)indexPathsForItemsInRect:(CGRect)arg1 ;
-(float)spacingRatio;
@end

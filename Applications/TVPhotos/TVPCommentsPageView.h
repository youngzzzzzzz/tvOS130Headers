/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPhotos/TVPhotos-Structs.h>
#import <UIKitCore/UICollectionView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, UISwipeGestureRecognizer, NSString;

@interface TVPCommentsPageView : UICollectionView <UIGestureRecognizerDelegate> {

	BOOL _isPageScroll;
	BOOL _isMaxDownScrollLimitReached;
	double _pageOverlap;
	UITapGestureRecognizer* _upScrollGestureRecognizer;
	UITapGestureRecognizer* _downScrollGestureRecognizer;
	UISwipeGestureRecognizer* _upSwipeGestureRecognizer;
	UISwipeGestureRecognizer* _downSwipeGestureRecognizer;
	long long _itemIndex;
	long long _sectionIndex;
	long long _maxItems;
	double _pageScrollIncrementalYOffset;
	double _pageScrollFinalYOffset;
	double _pageScrollStartYOffset;
	double _offsetToAlignLastLine;
	double _contentHeight;
	double _contentBeginYOffset;

}

@property (nonatomic,retain) UITapGestureRecognizer * upScrollGestureRecognizer;                 //@synthesize upScrollGestureRecognizer=_upScrollGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * downScrollGestureRecognizer;               //@synthesize downScrollGestureRecognizer=_downScrollGestureRecognizer - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * upSwipeGestureRecognizer;                //@synthesize upSwipeGestureRecognizer=_upSwipeGestureRecognizer - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * downSwipeGestureRecognizer;              //@synthesize downSwipeGestureRecognizer=_downSwipeGestureRecognizer - In the implementation block
@property (assign,nonatomic) long long itemIndex;                                                //@synthesize itemIndex=_itemIndex - In the implementation block
@property (assign,nonatomic) long long sectionIndex;                                             //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (assign,nonatomic) long long maxItems;                                                 //@synthesize maxItems=_maxItems - In the implementation block
@property (assign,nonatomic) BOOL isPageScroll;                                                  //@synthesize isPageScroll=_isPageScroll - In the implementation block
@property (assign,nonatomic) BOOL isMaxDownScrollLimitReached;                                   //@synthesize isMaxDownScrollLimitReached=_isMaxDownScrollLimitReached - In the implementation block
@property (assign,nonatomic) double pageScrollIncrementalYOffset;                                //@synthesize pageScrollIncrementalYOffset=_pageScrollIncrementalYOffset - In the implementation block
@property (assign,nonatomic) double pageScrollFinalYOffset;                                      //@synthesize pageScrollFinalYOffset=_pageScrollFinalYOffset - In the implementation block
@property (assign,nonatomic) double pageScrollStartYOffset;                                      //@synthesize pageScrollStartYOffset=_pageScrollStartYOffset - In the implementation block
@property (assign,nonatomic) double offsetToAlignLastLine;                                       //@synthesize offsetToAlignLastLine=_offsetToAlignLastLine - In the implementation block
@property (assign,nonatomic) double contentHeight;                                               //@synthesize contentHeight=_contentHeight - In the implementation block
@property (assign,nonatomic) double contentBeginYOffset;                                         //@synthesize contentBeginYOffset=_contentBeginYOffset - In the implementation block
@property (assign,nonatomic) double pageOverlap;                                                 //@synthesize pageOverlap=_pageOverlap - In the implementation block
@property (nonatomic,readonly) long long currentIndex; 
@property (nonatomic,readonly) long long currentSection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSectionIndex:(long long)arg1 ;
-(long long)sectionIndex;
-(void)reloadData;
-(long long)itemIndex;
-(long long)currentIndex;
-(void)setItemIndex:(long long)arg1 ;
-(void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(double)contentHeight;
-(void)setContentHeight:(double)arg1 ;
-(id)preferredFocusedView;
-(void)setFlowLayoutDefaultAttributes:(id)arg1 ;
-(void)_handleUpScrollButtonGesture:(id)arg1 ;
-(void)_handleDownScrollButtonGesture:(id)arg1 ;
-(void)_resetPageScrollOffsets;
-(void)setPageOverlap:(double)arg1 ;
-(double)pageOverlap;
-(BOOL)_scrollToPreviousItem;
-(BOOL)_performPageScrollByEvaluatingOffset:(double)arg1 ;
-(BOOL)_scrollToNextItem;
-(void)_startPageScroll:(double)arg1 ;
-(long long)_nextSectionWithItems;
-(long long)_previousSectionWithItems;
-(long long)currentSection;
-(UITapGestureRecognizer *)upScrollGestureRecognizer;
-(void)setUpScrollGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)downScrollGestureRecognizer;
-(void)setDownScrollGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UISwipeGestureRecognizer *)upSwipeGestureRecognizer;
-(void)setUpSwipeGestureRecognizer:(UISwipeGestureRecognizer *)arg1 ;
-(UISwipeGestureRecognizer *)downSwipeGestureRecognizer;
-(void)setDownSwipeGestureRecognizer:(UISwipeGestureRecognizer *)arg1 ;
-(long long)maxItems;
-(void)setMaxItems:(long long)arg1 ;
-(BOOL)isPageScroll;
-(void)setIsPageScroll:(BOOL)arg1 ;
-(BOOL)isMaxDownScrollLimitReached;
-(void)setIsMaxDownScrollLimitReached:(BOOL)arg1 ;
-(double)pageScrollIncrementalYOffset;
-(void)setPageScrollIncrementalYOffset:(double)arg1 ;
-(double)pageScrollFinalYOffset;
-(void)setPageScrollFinalYOffset:(double)arg1 ;
-(double)pageScrollStartYOffset;
-(void)setPageScrollStartYOffset:(double)arg1 ;
-(double)offsetToAlignLastLine;
-(void)setOffsetToAlignLastLine:(double)arg1 ;
-(double)contentBeginYOffset;
-(void)setContentBeginYOffset:(double)arg1 ;
@end


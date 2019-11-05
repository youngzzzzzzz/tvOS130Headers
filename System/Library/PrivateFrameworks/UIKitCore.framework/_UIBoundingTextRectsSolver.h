/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSLayoutManager, NSTextContainer, NSArray;

@interface _UIBoundingTextRectsSolver : NSObject {

	NSRange _range;
	CGRect _firstRect;
	CGRect _lastRect;
	CGRect _middleRect;
	CGRect _totalRect;
	NSRange _firstGlyphRange;
	NSRange _lastGlyphRange;
	NSRange _middleGlyphRange;
	NSRange _totalGlyphRange;
	BOOL _calculated;
	BOOL _unifyRects;
	NSLayoutManager* _layoutManager;
	NSTextContainer* _textContainer;

}

@property (nonatomic,readonly) CGRect firstLineRect; 
@property (nonatomic,readonly) CGRect bodyRect; 
@property (nonatomic,readonly) CGRect lastLineRect; 
@property (nonatomic,readonly) CGRect boundingRect; 
@property (nonatomic,readonly) NSArray * rects; 
-(id)description;
-(CGRect)boundingRect;
-(NSArray *)rects;
-(id)initWithLayoutManager:(id)arg1 range:(NSRange)arg2 unifyRects:(BOOL)arg3 ;
-(void)_calculate;
-(void)_calculateRectsUsingLayoutManager:(id)arg1 ;
-(void)_calculateTotalRect;
-(CGRect)firstLineRect;
-(CGRect)bodyRect;
-(CGRect)lastLineRect;
@end

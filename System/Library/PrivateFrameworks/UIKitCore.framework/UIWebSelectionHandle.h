/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UITouch, UIWebSelectionView;

@interface UIWebSelectionHandle : UIView {

	UITouch* _touch;
	int _position;
	int _textPosition;
	UIWebSelectionView* _selectionView;
	CGSize _touchToCenterOffset;
	CGSize _centerToSelectionPointOffset;

}

@property (nonatomic,retain) UITouch * touch;                                  //@synthesize touch=_touch - In the implementation block
@property (assign,nonatomic) int position;                                     //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) int textPosition; 
@property (nonatomic,readonly) BOOL hasTextPosition; 
@property (nonatomic,readonly) CGSize touchToCenterOffset;                     //@synthesize touchToCenterOffset=_touchToCenterOffset - In the implementation block
@property (assign,nonatomic) CGSize centerToSelectionPointOffset;              //@synthesize centerToSelectionPointOffset=_centerToSelectionPointOffset - In the implementation block
-(void)dealloc;
-(UITouch *)touch;
-(int)position;
-(void)setPosition:(int)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(int)textPosition;
-(void)setTouch:(UITouch *)arg1 ;
-(CGPoint)applyCenterToSelectionPointOffset:(CGPoint)arg1 ;
-(CGPoint)applyTouchToCenterOffset:(CGPoint)arg1 ;
-(void)setTextPosition:(int)arg1 ;
-(void)snapToCornerOfRange:(id)arg1 atStart:(BOOL)arg2 ;
-(BOOL)hasTextPosition;
-(id)initWithPosition:(int)arg1 selectionView:(id)arg2 ;
-(CGSize)centerToSelectionPointOffset;
-(void)dropActiveTouch;
-(CGPoint)applyOffsetInDirectionOfHandle:(double)arg1 toPoint:(CGPoint)arg2 ;
-(CGSize)touchToCenterOffset;
-(void)setCenterToSelectionPointOffset:(CGSize)arg1 ;
@end


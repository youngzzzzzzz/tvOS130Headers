/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GKGameSessionPlayerCell.h>

@class UIImageView, UIButton, NSLayoutConstraint;

@interface GKGameSessionPlayerPickerCell : GKGameSessionPlayerCell {

	BOOL _selectable;
	UIImageView* _selectionView;
	UIButton* _selectionButton;
	NSLayoutConstraint* _nameConstraint;
	NSLayoutConstraint* _selectionHorizontalConstraint;
	NSLayoutConstraint* _selectionVerticalConstraint;
	double _nameInitialConstant;
	double _selectionInitialHorizontalConstant;
	double _selectionInitialVerticalConstant;

}

@property (assign,nonatomic,__weak) UIImageView * selectionView;                                     //@synthesize selectionView=_selectionView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * selectionButton;                                      //@synthesize selectionButton=_selectionButton - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * nameConstraint;                             //@synthesize nameConstraint=_nameConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * selectionHorizontalConstraint;              //@synthesize selectionHorizontalConstraint=_selectionHorizontalConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * selectionVerticalConstraint;                //@synthesize selectionVerticalConstraint=_selectionVerticalConstraint - In the implementation block
@property (assign,nonatomic) double nameInitialConstant;                                             //@synthesize nameInitialConstant=_nameInitialConstant - In the implementation block
@property (assign,nonatomic) double selectionInitialHorizontalConstant;                              //@synthesize selectionInitialHorizontalConstant=_selectionInitialHorizontalConstant - In the implementation block
@property (assign,nonatomic) double selectionInitialVerticalConstant;                                //@synthesize selectionInitialVerticalConstant=_selectionInitialVerticalConstant - In the implementation block
@property (assign,getter=isSelectable,nonatomic) BOOL selectable;                                    //@synthesize selectable=_selectable - In the implementation block
-(void)setSelected:(BOOL)arg1 ;
-(UIImageView *)selectionView;
-(void)setSelectable:(BOOL)arg1 ;
-(void)awakeFromNib;
-(BOOL)isSelectable;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setSelectionView:(UIImageView *)arg1 ;
-(UIButton *)selectionButton;
-(void)setSelectionButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)nameConstraint;
-(void)setNameConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)selectionHorizontalConstraint;
-(void)setSelectionHorizontalConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)selectionVerticalConstraint;
-(void)setSelectionVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(double)nameInitialConstant;
-(void)setNameInitialConstant:(double)arg1 ;
-(double)selectionInitialHorizontalConstant;
-(void)setSelectionInitialHorizontalConstant:(double)arg1 ;
-(double)selectionInitialVerticalConstant;
-(void)setSelectionInitialVerticalConstant:(double)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKitCore/UIButton.h>

@class _UIFloatingContentView;

@interface SATVButton : UIButton {

	BOOL _scalesOnFocus;
	_UIFloatingContentView* _floatingView;

}

@property (nonatomic,retain) _UIFloatingContentView * floatingView;              //@synthesize floatingView=_floatingView - In the implementation block
@property (assign,nonatomic) BOOL scalesOnFocus;                                 //@synthesize scalesOnFocus=_scalesOnFocus - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(_UIFloatingContentView *)floatingView;
-(void)setFloatingView:(_UIFloatingContentView *)arg1 ;
-(void)_updateFloatingViewStateAnimated:(BOOL)arg1 ;
-(void)setScalesOnFocus:(BOOL)arg1 ;
-(BOOL)scalesOnFocus;
@end

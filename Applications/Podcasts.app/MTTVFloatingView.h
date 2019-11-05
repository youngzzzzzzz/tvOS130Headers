/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:22 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKitCore/UIView.h>

@class _MTTVKTSpecialAnimatingView, CALayer, UIView, UIColor;

@interface MTTVFloatingView : UIView {

	_MTTVKTSpecialAnimatingView* _shadowView;
	CALayer* _shadowMaskLayer;
	_MTTVKTSpecialAnimatingView* _containerView;
	_MTTVKTSpecialAnimatingView* _highlightView;
	UIView* _contentView;
	BOOL _animatingSelection;
	double _zDepth;
	UIColor* _unselectedBackgroundColor;
	BOOL _contentOpaque;
	BOOL _appliesContentFilters;
	BOOL _shadowEnabled;
	BOOL _selected;
	BOOL _enableFocusDirection;
	BOOL _scalesBackwards;
	BOOL _roundContentWhenDeselected;
	double _cornerRadius;
	UIColor* _selectedBackgroundColor;
	long long _scrollDirection;
	CGSize _shadowSize;
	CGPoint _focusDirection;

}

@property (assign,nonatomic) BOOL scalesBackwards;                                   //@synthesize scalesBackwards=_scalesBackwards - In the implementation block
@property (assign,nonatomic) BOOL roundContentWhenDeselected;                        //@synthesize roundContentWhenDeselected=_roundContentWhenDeselected - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (assign,nonatomic) double cornerRadius;                                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,getter=isContentOpaque,nonatomic) BOOL contentOpaque;              //@synthesize contentOpaque=_contentOpaque - In the implementation block
@property (assign,nonatomic) double scaleFactor; 
@property (assign,nonatomic) BOOL appliesContentFilters;                             //@synthesize appliesContentFilters=_appliesContentFilters - In the implementation block
@property (assign,getter=isShadowEnabled,nonatomic) BOOL shadowEnabled;              //@synthesize shadowEnabled=_shadowEnabled - In the implementation block
@property (assign,nonatomic) CGSize shadowSize;                                      //@synthesize shadowSize=_shadowSize - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                        //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL enableFocusDirection;                              //@synthesize enableFocusDirection=_enableFocusDirection - In the implementation block
@property (assign,nonatomic) CGPoint focusDirection;                                 //@synthesize focusDirection=_focusDirection - In the implementation block
@property (nonatomic,retain) UIColor * selectedBackgroundColor;                      //@synthesize selectedBackgroundColor=_selectedBackgroundColor - In the implementation block
@property (assign,nonatomic) long long scrollDirection;                              //@synthesize scrollDirection=_scrollDirection - In the implementation block
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(CGSize)shadowSize;
-(void)setShadowSize:(CGSize)arg1 ;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)contentView;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)canBecomeFocused;
-(void)_updateScale;
-(void)setScrollDirection:(long long)arg1 ;
-(long long)scrollDirection;
-(void)setShadowEnabled:(BOOL)arg1 ;
-(BOOL)isShadowEnabled;
-(void)setContentOpaque:(BOOL)arg1 ;
-(void)setRoundContentWhenDeselected:(BOOL)arg1 ;
-(CGPoint)focusDirection;
-(void)setFocusDirection:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(void)_setFocusDirection:(CGPoint)arg1 duration:(double)arg2 ;
-(void)setScalesBackwards:(BOOL)arg1 ;
-(void)setAppliesContentFilters:(BOOL)arg1 ;
-(void)setSelectedBackgroundColor:(UIColor *)arg1 ;
-(void)_updateShadowMask;
-(void)_applyFocusDirectionTransform;
-(BOOL)isContentOpaque;
-(void)_setSelected:(BOOL)arg1 duration:(double)arg2 ;
-(void)_updateContainerFilters;
-(UIColor *)selectedBackgroundColor;
-(BOOL)scalesBackwards;
-(BOOL)appliesContentFilters;
-(BOOL)enableFocusDirection;
-(void)setEnableFocusDirection:(BOOL)arg1 ;
-(BOOL)roundContentWhenDeselected;
@end

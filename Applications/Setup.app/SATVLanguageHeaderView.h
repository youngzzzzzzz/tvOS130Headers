/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKitCore/UIView.h>

@class SATVHeaderView;

@interface SATVLanguageHeaderView : UIView {

	SATVHeaderView* _visibleHeaderView;
	SATVHeaderView* _hiddenHeaderView;

}

@property (nonatomic,retain) SATVHeaderView * visibleHeaderView;              //@synthesize visibleHeaderView=_visibleHeaderView - In the implementation block
@property (nonatomic,retain) SATVHeaderView * hiddenHeaderView;               //@synthesize hiddenHeaderView=_hiddenHeaderView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 subtitle:(id)arg2 languageCode:(id)arg3 animated:(BOOL)arg4 ;
-(SATVHeaderView *)visibleHeaderView;
-(SATVHeaderView *)hiddenHeaderView;
-(void)setVisibleHeaderView:(SATVHeaderView *)arg1 ;
-(void)setHiddenHeaderView:(SATVHeaderView *)arg1 ;
@end

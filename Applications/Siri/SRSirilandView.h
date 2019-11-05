/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Siri/Siri-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SRSirilandViewDelegate;
@class UIView, SiriUIPassThroughHitTestView, SiriUIKeyline;

@interface SRSirilandView : UIView {

	UIView* _contentView;
	SiriUIPassThroughHitTestView* _clipView;
	UIView* _conversationView;
	SiriUIKeyline* _keyline;
	BOOL _showingDeviceLockView;
	BOOL _masksContent;
	BOOL _pageTransitionKeylineVisible;
	id<SRSirilandViewDelegate> _delegate;
	UIOffset _topChevronOffset;

}

@property (assign,nonatomic) UIOffset topChevronOffset;                                                            //@synthesize topChevronOffset=_topChevronOffset - In the implementation block
@property (nonatomic,retain) UIView * conversationView;                                                            //@synthesize conversationView=_conversationView - In the implementation block
@property (getter=isShowingDeviceLockView,nonatomic,readonly) BOOL showingDeviceLockView;                          //@synthesize showingDeviceLockView=_showingDeviceLockView - In the implementation block
@property (assign,nonatomic,__weak) id<SRSirilandViewDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL masksContent;                                                                    //@synthesize masksContent=_masksContent - In the implementation block
@property (assign,getter=isPageTransitionKeylineVisible,nonatomic) BOOL pageTransitionKeylineVisible;              //@synthesize pageTransitionKeylineVisible=_pageTransitionKeylineVisible - In the implementation block
+(id)sirilandView;
-(id<SRSirilandViewDelegate>)delegate;
-(void)setDelegate:(id<SRSirilandViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)statusBarFrameDidChange;
-(void)setConversationView:(UIView *)arg1 ;
-(void)setMasksContent:(BOOL)arg1 ;
-(void)setPageTransitionKeylineVisible:(BOOL)arg1 ;
-(BOOL)isShowingDeviceLockView;
-(UIView *)conversationView;
-(BOOL)_keylineIsVisible;
-(UIOffset)topChevronOffset;
-(void)setTopChevronOffset:(UIOffset)arg1 ;
-(BOOL)masksContent;
-(BOOL)isPageTransitionKeylineVisible;
@end

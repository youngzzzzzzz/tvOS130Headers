/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:29 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <PineBoard/PBSystemOverlayContentPresenting.h>

@protocol PBSystemOverlayContentDelegate;
@class UIView;

@interface PBWallpaperViewController : UIViewController <PBSystemOverlayContentPresenting> {

	BOOL _idleModeActive;
	BOOL _allowsInteraction;
	BOOL _acceptsEventFocus;
	id<PBSystemOverlayContentDelegate> _contentDelegate;
	UIView* _wallpaperView;

}

@property (nonatomic,retain) UIView * wallpaperView;                                                 //@synthesize wallpaperView=_wallpaperView - In the implementation block
@property (nonatomic,readonly) BOOL allowsInteraction;                                               //@synthesize allowsInteraction=_allowsInteraction - In the implementation block
@property (assign,nonatomic) BOOL acceptsEventFocus;                                                 //@synthesize acceptsEventFocus=_acceptsEventFocus - In the implementation block
@property (getter=isIdleModeActive,nonatomic,readonly) BOOL idleModeActive;                          //@synthesize idleModeActive=_idleModeActive - In the implementation block
@property (nonatomic,readonly) BOOL expectsEventForwarding; 
@property (assign,nonatomic,__weak) id<PBSystemOverlayContentDelegate> contentDelegate;              //@synthesize contentDelegate=_contentDelegate - In the implementation block
@property (getter=isInterruptible,nonatomic,readonly) BOOL interruptible; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isInterruptible;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(UIView *)wallpaperView;
-(void)setWallpaperView:(UIView *)arg1 ;
-(void)setContentDelegate:(id<PBSystemOverlayContentDelegate>)arg1 ;
-(BOOL)acceptsEventFocus;
-(void)setAcceptsEventFocus:(BOOL)arg1 ;
-(BOOL)expectsEventForwarding;
-(void)presentContentAnimated:(BOOL)arg1 clientOptions:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)dismissContentAnimated:(BOOL)arg1 clientOptions:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id<PBSystemOverlayContentDelegate>)contentDelegate;
-(BOOL)allowsInteraction;
-(void)updateWallpaperWithTransitionContext:(id)arg1 ;
-(void)_updateWallpaperForFocusedProcess;
-(id)_wallpaperForFocusedProcessWithVariant:(long long)arg1 ;
-(void)setIdleModeActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isIdleModeActive;
@end

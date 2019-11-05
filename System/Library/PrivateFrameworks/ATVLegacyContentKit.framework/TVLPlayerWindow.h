/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIWindow.h>

@class UIWindow, TVLNavigationController, _TVLPlayerWindowRootViewController, TVLPlaybackViewController;

@interface TVLPlayerWindow : UIWindow {

	unsigned long long _state;
	/*^block*/id _dismissBlock;
	UIWindow* _previousKeyWindow;
	TVLNavigationController* _navigationController;
	_TVLPlayerWindowRootViewController* _blankViewController;

}

@property (nonatomic,retain) UIWindow * previousKeyWindow;                                          //@synthesize previousKeyWindow=_previousKeyWindow - In the implementation block
@property (assign,nonatomic,__weak) TVLNavigationController * navigationController;                 //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) _TVLPlayerWindowRootViewController * blankViewController;              //@synthesize blankViewController=_blankViewController - In the implementation block
@property (nonatomic,readonly) TVLPlaybackViewController * playbackViewController; 
@property (nonatomic,readonly) unsigned long long state;                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id dismissBlock;                                                         //@synthesize dismissBlock=_dismissBlock - In the implementation block
+(id)defaultWindow;
-(id)description;
-(void)dealloc;
-(unsigned long long)state;
-(void)dismiss;
-(id)initWithFrame:(CGRect)arg1 ;
-(TVLNavigationController *)navigationController;
-(void)setNavigationController:(TVLNavigationController *)arg1 ;
-(TVLPlaybackViewController *)playbackViewController;
-(void)setDismissBlock:(id)arg1 ;
-(void)didLoadViewController:(id)arg1 ;
-(UIWindow *)previousKeyWindow;
-(void)setPreviousKeyWindow:(UIWindow *)arg1 ;
-(_TVLPlayerWindowRootViewController *)blankViewController;
-(id)dismissBlock;
-(void)showWithPlaybackViewController:(id)arg1 ;
-(void)setBlankViewController:(_TVLPlayerWindowRootViewController *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusTest.h>

@class UIWindow;

@interface _UIFocusSwipeTest : _UIFocusTest {

	unsigned long long _eventCount;
	const SCD_Struct_UI56* _events;
	int _swipeAxis;
	UIWindow* _window;

}

@property (assign,nonatomic,__weak) UIWindow * window;              //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) int swipeAxis;                         //@synthesize swipeAxis=_swipeAxis - In the implementation block
-(void)main;
-(id)initWithIdentifier:(id)arg1 ;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setSwipeAxis:(int)arg1 ;
-(int)swipeAxis;
@end


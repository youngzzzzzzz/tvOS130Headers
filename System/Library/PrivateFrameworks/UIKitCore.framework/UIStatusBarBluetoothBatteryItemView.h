/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>

@class UIImage;

@interface UIStatusBarBluetoothBatteryItemView : UIStatusBarItemView {

	int _capacity;
	int _accessibilityCachedHUDCapacity;
	UIImage* _accessibilityCachedHUDImage;

}
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;
-(double)_normalizedCapacity;
-(UIEdgeInsets)_accessibilityHUDBatteryInsidesInsets;
-(double)extraLeftPadding;
@end

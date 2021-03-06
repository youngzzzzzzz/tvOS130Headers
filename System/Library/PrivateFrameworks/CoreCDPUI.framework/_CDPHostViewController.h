/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <CoreCDPUI/CDPHostInterface.h>

@interface _CDPHostViewController : _UIRemoteViewController <CDPHostInterface> {

	/*^block*/id _viewServiceTerminationBlock;

}

@property (nonatomic,copy) id viewServiceTerminationBlock;              //@synthesize viewServiceTerminationBlock=_viewServiceTerminationBlock - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)hostKeyboardOffset:(/*^block*/id)arg1 ;
-(double)_keyboardHeightOffset;
-(id)viewServiceTerminationBlock;
-(void)setViewServiceTerminationBlock:(id)arg1 ;
@end


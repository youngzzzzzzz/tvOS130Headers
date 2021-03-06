/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <UIKitCore/_UIFontPickerRemoteViewControllerHost.h>

@protocol _UIFontPickerRemoteViewControllerHost;
@class NSString;

@interface _UIFontPickerRemoteViewController : _UIRemoteViewController <_UIFontPickerRemoteViewControllerHost> {

	id<_UIFontPickerRemoteViewControllerHost> _delegate;

}

@property (assign,nonatomic,__weak) id<_UIFontPickerRemoteViewControllerHost> _delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<_UIFontPickerRemoteViewControllerHost>)_delegate;
-(void)set_delegate:(id<_UIFontPickerRemoteViewControllerHost>)arg1 ;
-(void)_pickerDidCancel;
-(void)_pickerDidSelectFont:(id)arg1 ;
@end


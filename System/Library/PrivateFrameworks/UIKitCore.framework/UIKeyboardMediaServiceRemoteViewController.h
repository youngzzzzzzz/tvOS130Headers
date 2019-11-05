/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <UIKit/UIKeyboardMediaHostProtocol.h>

@protocol UIKeyboardMediaServiceRemoteViewControllerDelegate;
@class NSString;

@interface UIKeyboardMediaServiceRemoteViewController : _UIRemoteViewController <UIKeyboardMediaHostProtocol> {

	id<UIKeyboardMediaServiceRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UIKeyboardMediaServiceRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestInlineViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
+(id)requestCardViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
+(BOOL)__shouldHostRemoteTextEffectsWindow;
-(id<UIKeyboardMediaServiceRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<UIKeyboardMediaServiceRemoteViewControllerDelegate>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)presentCard;
-(void)dismissCard;
-(void)pasteImageAtFileHandle:(id)arg1 ;
-(void)stageStickerWithFileHandle:(id)arg1 url:(id)arg2 accessibilityLabel:(id)arg3 ;
-(void)requestInsertionPointCompletion:(/*^block*/id)arg1 ;
-(void)draggedStickerToPoint:(CGPoint)arg1 ;
@end

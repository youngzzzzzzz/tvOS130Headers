/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UITextItemInteracting <UITextInput,_UITextContent>
@optional
-(BOOL)_allowHighlightForTextInteractableItem:(id)arg1;
-(BOOL)_presentActionsForTextInteractableItem:(id)arg1;

@required
-(BOOL)_allowInteraction:(long long)arg1 forTextInteractableItem:(id)arg2;
-(BOOL)_mightHaveInteractableItems;
-(id)_textInteractableItemAtPoint:(CGPoint)arg1;

@end


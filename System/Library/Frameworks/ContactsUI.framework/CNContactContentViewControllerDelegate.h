/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNContactContentViewControllerDelegate <CNContactViewControllerDelegate>
@optional
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
-(void)contactViewController:(id)arg1 didChangeToEditMode:(BOOL)arg2;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
-(id)contactPresentedViewController:(id)arg1;

@end

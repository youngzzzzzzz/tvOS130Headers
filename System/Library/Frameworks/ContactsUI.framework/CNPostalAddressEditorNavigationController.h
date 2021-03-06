/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@protocol CNPostalAddressEditorDelegate;
@interface CNPostalAddressEditorNavigationController : UINavigationController {

	id<CNPostalAddressEditorDelegate> _addressEditorDelegate;

}

@property (assign,nonatomic,__weak) id<CNPostalAddressEditorDelegate> addressEditorDelegate;              //@synthesize addressEditorDelegate=_addressEditorDelegate - In the implementation block
-(void)setTitle:(id)arg1 ;
-(id<CNPostalAddressEditorDelegate>)addressEditorDelegate;
-(void)doneWithContact:(id)arg1 propertyKey:(id)arg2 ;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 editNames:(BOOL)arg3 ;
-(id)initWithPropertyKey:(id)arg1 label:(id)arg2 ;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 addressDictionary:(id)arg3 label:(id)arg4 ;
-(void)setAddressEditorDelegate:(id<CNPostalAddressEditorDelegate>)arg1 ;
@end


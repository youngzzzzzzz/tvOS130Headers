/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UITextField;

@interface CNPickerItemCell : UITableViewCell {

	UITextField* _textField;

}

@property (nonatomic,retain) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
-(void)beginEditing;
-(void)endEditing;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(UITextField *)textField;
-(void)setTextField:(UITextField *)arg1 ;
@end

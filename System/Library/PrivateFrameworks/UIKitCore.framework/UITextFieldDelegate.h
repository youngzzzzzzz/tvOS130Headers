/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextFieldDelegate <NSObject>
@optional
-(BOOL)textFieldShouldBeginEditing:(id)arg1;
-(void)textFieldDidBeginEditing:(id)arg1;
-(BOOL)textFieldShouldEndEditing:(id)arg1;
-(void)textFieldDidEndEditing:(id)arg1;
-(void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3;
-(void)textFieldDidChangeSelection:(id)arg1;
-(BOOL)textFieldShouldClear:(id)arg1;
-(BOOL)textFieldShouldReturn:(id)arg1;

@end


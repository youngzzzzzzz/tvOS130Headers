/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:29 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBTextEntryViewControllerDelegate <NSObject>
@optional
-(void)textEntry:(id)arg1 willPresentTextField:(id)arg2;
-(void)textEntry:(id)arg1 didSubmitTextFieldAtIndex:(unsigned long long)arg2;

@required
-(void)textEntry:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2;
-(void)textEntryDidCancel:(id)arg1;

@end

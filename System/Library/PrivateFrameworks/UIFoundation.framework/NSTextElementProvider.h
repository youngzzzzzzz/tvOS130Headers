/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSTextRange;


@protocol NSTextElementProvider <NSObject>
@property (readonly) NSTextRange * documentRange; 
@required
-(NSTextRange *)documentRange;
-(id)enumerateTextElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(/*^block*/id)arg3;
-(void)replaceCharactersInRange:(id)arg1 withTextElements:(id)arg2;
-(BOOL)synchronizeToBackingStore:(/*^block*/id)arg1;

@end


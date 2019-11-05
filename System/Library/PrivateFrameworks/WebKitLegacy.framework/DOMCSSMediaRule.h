/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/DOMCSSRule.h>

@class DOMMediaList, DOMCSSRuleList;

@interface DOMCSSMediaRule : DOMCSSRule

@property (readonly) DOMMediaList * media; 
@property (readonly) DOMCSSRuleList * cssRules; 
-(DOMMediaList *)media;
-(DOMCSSRuleList *)cssRules;
-(unsigned)insertRule:(id)arg1 index:(unsigned)arg2 ;
-(void)deleteRule:(unsigned)arg1 ;
-(unsigned)insertRule:(id)arg1 :(unsigned)arg2 ;
@end

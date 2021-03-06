/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/DOMDocument.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLDocument : DOMDocument

@property (readonly) DOMHTMLCollection * embeds; 
@property (readonly) DOMHTMLCollection * plugins; 
@property (readonly) DOMHTMLCollection * scripts; 
@property (readonly) int width; 
@property (readonly) int height; 
@property (copy) NSString * dir; 
@property (copy) NSString * designMode; 
@property (copy,readonly) NSString * compatMode; 
@property (copy) NSString * bgColor; 
@property (copy) NSString * fgColor; 
@property (copy) NSString * alinkColor; 
@property (copy) NSString * linkColor; 
@property (copy) NSString * vlinkColor; 
-(void)clear;
-(void)open;
-(void)close;
-(NSString *)dir;
-(int)width;
-(int)height;
-(void)write:(id)arg1 ;
-(void)setDir:(NSString *)arg1 ;
-(NSString *)compatMode;
-(id)createDocumentFragmentWithMarkupString:(id)arg1 baseURL:(id)arg2 ;
-(id)createDocumentFragmentWithText:(id)arg1 ;
-(id)_createDocumentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2 ;
-(id)_createDocumentFragmentWithText:(id)arg1 ;
-(NSString *)bgColor;
-(void)setBgColor:(NSString *)arg1 ;
-(DOMHTMLCollection *)embeds;
-(DOMHTMLCollection *)plugins;
-(DOMHTMLCollection *)scripts;
-(NSString *)designMode;
-(void)setDesignMode:(NSString *)arg1 ;
-(NSString *)fgColor;
-(void)setFgColor:(NSString *)arg1 ;
-(NSString *)alinkColor;
-(void)setAlinkColor:(NSString *)arg1 ;
-(NSString *)linkColor;
-(void)setLinkColor:(NSString *)arg1 ;
-(NSString *)vlinkColor;
-(void)setVlinkColor:(NSString *)arg1 ;
-(void)writeln:(id)arg1 ;
-(void)captureEvents;
-(void)releaseEvents;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/DOMHTMLElement.h>

@class NSString, NSURL;

@interface DOMHTMLAnchorElement : DOMHTMLElement

@property (copy) NSString * charset; 
@property (copy) NSString * coords; 
@property (copy) NSString * hreflang; 
@property (copy) NSString * name; 
@property (copy) NSString * rel; 
@property (copy) NSString * rev; 
@property (copy) NSString * shape; 
@property (copy) NSString * target; 
@property (copy) NSString * type; 
@property (copy) NSString * accessKey; 
@property (copy,readonly) NSString * text; 
@property (copy,readonly) NSURL * absoluteLinkURL; 
@property (copy) NSString * href; 
@property (copy,readonly) NSString * protocol; 
@property (copy,readonly) NSString * host; 
@property (copy,readonly) NSString * hostname; 
@property (copy,readonly) NSString * port; 
@property (copy,readonly) NSString * pathname; 
@property (copy,readonly) NSString * search; 
@property (copy,readonly) NSString * hashName; 
-(BOOL)alwaysAttemptToShowTapHighlight;
-(NSString *)name;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSString *)host;
-(NSString *)port;
-(void)setTarget:(NSString *)arg1 ;
-(NSString *)target;
-(void)setName:(NSString *)arg1 ;
-(NSString *)protocol;
-(id)download;
-(id)ping;
-(NSString *)hostname;
-(NSString *)text;
-(NSString *)shape;
-(void)setShape:(NSString *)arg1 ;
-(id)origin;
-(NSString *)search;
-(NSString *)coords;
-(NSString *)accessKey;
-(void)setAccessKey:(NSString *)arg1 ;
-(NSString *)href;
-(NSString *)charset;
-(void)setCharset:(NSString *)arg1 ;
-(void)setCoords:(NSString *)arg1 ;
-(void)setDownload:(id)arg1 ;
-(NSString *)hreflang;
-(void)setHreflang:(NSString *)arg1 ;
-(void)setPing:(id)arg1 ;
-(NSString *)rel;
-(void)setRel:(NSString *)arg1 ;
-(NSString *)rev;
-(void)setRev:(NSString *)arg1 ;
-(NSURL *)absoluteLinkURL;
-(id)relList;
-(void)setHref:(NSString *)arg1 ;
-(NSString *)pathname;
-(NSString *)hashName;
@end

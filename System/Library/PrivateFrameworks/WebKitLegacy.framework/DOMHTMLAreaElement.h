/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebKitLegacy/DOMHTMLElement.h>

@class NSString, NSURL;

@interface DOMHTMLAreaElement : DOMHTMLElement

@property (copy) NSString * alt; 
@property (copy) NSString * coords; 
@property (assign) BOOL noHref; 
@property (copy) NSString * shape; 
@property (copy) NSString * target; 
@property (copy) NSString * accessKey; 
@property (copy,readonly) NSURL * absoluteLinkURL; 
@property (copy) NSString * href; 
@property (copy,readonly) NSString * protocol; 
@property (copy,readonly) NSString * host; 
@property (copy,readonly) NSString * hostname; 
@property (copy,readonly) NSString * port; 
@property (copy,readonly) NSString * pathname; 
@property (copy,readonly) NSString * search; 
@property (copy,readonly) NSString * hashName; 
-(id)absoluteQuadsAtPoint:(CGPoint)arg1 ;
-(NSString *)host;
-(NSString *)port;
-(void)setTarget:(NSString *)arg1 ;
-(NSString *)target;
-(NSString *)protocol;
-(id)ping;
-(NSString *)hostname;
-(NSString *)shape;
-(void)setShape:(NSString *)arg1 ;
-(id)origin;
-(NSString *)search;
-(NSString *)coords;
-(NSString *)accessKey;
-(void)setAccessKey:(NSString *)arg1 ;
-(NSString *)href;
-(void)setCoords:(NSString *)arg1 ;
-(void)setPing:(id)arg1 ;
-(id)rel;
-(void)setRel:(id)arg1 ;
-(NSURL *)absoluteLinkURL;
-(id)relList;
-(void)setHref:(NSString *)arg1 ;
-(NSString *)pathname;
-(NSString *)hashName;
-(NSString *)alt;
-(void)setAlt:(NSString *)arg1 ;
-(BOOL)noHref;
-(void)setNoHref:(BOOL)arg1 ;
-(CGRect)boundingBoxWithOwner:(id)arg1 ;
-(WKQuad)absoluteQuadWithOwner:(id)arg1 ;
-(id)boundingBoxesWithOwner:(id)arg1 ;
-(id)absoluteQuadsWithOwner:(id)arg1 ;
@end

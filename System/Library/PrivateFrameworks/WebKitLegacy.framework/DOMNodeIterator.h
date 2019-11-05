/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/DOMObject.h>

@class DOMNode;

@interface DOMNodeIterator : DOMObject

@property (readonly) DOMNode * root; 
@property (readonly) unsigned whatToShow; 
@property (readonly) id<DOMNodeFilter> filter; 
@property (readonly) BOOL expandEntityReferences; 
@property (readonly) DOMNode * referenceNode; 
@property (readonly) BOOL pointerBeforeReferenceNode; 
-(void)dealloc;
-(DOMNode *)root;
-(id<DOMNodeFilter>)filter;
-(void)detach;
-(unsigned)whatToShow;
-(BOOL)expandEntityReferences;
-(DOMNode *)referenceNode;
-(BOOL)pointerBeforeReferenceNode;
-(id)nextNode;
-(id)previousNode;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActionKit/ActionKit-Structs.h>
@class NSString;

@interface ENXMLDTD : NSObject {

	xmlDtd* _dtd;
	NSString* _docTypeDeclaration;

}

@property (nonatomic,retain) NSString * docTypeDeclaration;              //@synthesize docTypeDeclaration=_docTypeDeclaration - In the implementation block
+(void)initialize;
+(id)enml2dtd;
+(id)dtdWithBundleResource:(id)arg1 ofType:(id)arg2 ;
+(id)enexDTD;
+(id)lat1DTD;
+(id)symbolDTD;
+(id)specialDTD;
-(void)dealloc;
-(id)initWithContentsOfFile:(id)arg1 ;
-(NSString *)docTypeDeclaration;
-(BOOL)isAttributeLegal:(id)arg1 inElement:(id)arg2 ;
-(BOOL)isElementLegal:(id)arg1 ;
-(void)setDocTypeDeclaration:(NSString *)arg1 ;
-(xmlElement*)xmlElementNamed:(id)arg1 ;
-(id)sanitizedAttributes:(id)arg1 forElement:(id)arg2 ;
-(xmlEntity*)xmlEntityNamed:(id)arg1 ;
@end


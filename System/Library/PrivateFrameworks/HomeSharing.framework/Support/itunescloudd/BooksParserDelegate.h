/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/DKDAAPParserDelegate.h>

@class JaliscoLoadBooksOperation, NSMutableArray, ICBook, NSString;

@interface BooksParserDelegate : NSObject <DKDAAPParserDelegate> {

	BOOL _shouldParseMetadata;
	JaliscoLoadBooksOperation* _operation;
	NSMutableArray* _parsedBooks;
	ICBook* _currentParsingBook;

}

@property (nonatomic,readonly) JaliscoLoadBooksOperation * operation;              //@synthesize operation=_operation - In the implementation block
@property (nonatomic,readonly) NSMutableArray * parsedBooks;                       //@synthesize parsedBooks=_parsedBooks - In the implementation block
@property (nonatomic,retain) ICBook * currentParsingBook;                          //@synthesize currentParsingBook=_currentParsingBook - In the implementation block
@property (assign,nonatomic) BOOL shouldParseMetadata;                             //@synthesize shouldParseMetadata=_shouldParseMetadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(JaliscoLoadBooksOperation *)operation;
-(id)initWithOperation:(id)arg1 ;
-(void)parserDidStart:(id)arg1 ;
-(void)parser:(id)arg1 didFinishWithState:(long long)arg2 ;
-(void)parser:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)parser:(id)arg1 shouldParseCode:(unsigned)arg2 ;
-(BOOL)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned)arg2 ;
-(void)parser:(id)arg1 didStartContainerCode:(unsigned)arg2 contentLength:(unsigned)arg3 ;
-(void)parser:(id)arg1 didParseDataCode:(unsigned)arg2 bytes:(char*)arg3 contentLength:(unsigned)arg4 ;
-(void)parser:(id)arg1 didEndContainerCode:(unsigned)arg2 ;
-(NSMutableArray *)parsedBooks;
-(ICBook *)currentParsingBook;
-(void)setCurrentParsingBook:(ICBook *)arg1 ;
-(BOOL)shouldParseMetadata;
-(void)setShouldParseMetadata:(BOOL)arg1 ;
@end


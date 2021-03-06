/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/DKDAAPParserDelegate.h>

@class NSMutableArray, ASDMutableIAPInfo, NSNumber, NSArray, NSString;

@interface IAPInfoDAAPResponseDecoder : NSObject <DKDAAPParserDelegate> {

	unsigned _status;
	NSMutableArray* _items;
	NSMutableArray* _deletedItems;
	NSMutableArray* _currentItemsArray;
	ASDMutableIAPInfo* _currentItem;
	BOOL _errorParsingItem;
	BOOL _success;
	BOOL _update;
	NSNumber* _serverRevision;
	NSArray* _addedIAPs;
	NSArray* _removedIAPs;

}

@property (getter=isSuccess,readonly) BOOL success;                 //@synthesize success=_success - In the implementation block
@property (getter=isUpdate,readonly) BOOL update;                   //@synthesize update=_update - In the implementation block
@property (readonly) NSNumber * serverRevision;                     //@synthesize serverRevision=_serverRevision - In the implementation block
@property (readonly) NSArray * addedIAPs;                           //@synthesize addedIAPs=_addedIAPs - In the implementation block
@property (readonly) NSArray * removedIAPs;                         //@synthesize removedIAPs=_removedIAPs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isSuccess;
-(BOOL)isUpdate;
-(void)parserDidStart:(id)arg1 ;
-(void)parser:(id)arg1 didFinishWithState:(long long)arg2 ;
-(void)parserDidCancel:(id)arg1 ;
-(void)parser:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)parser:(id)arg1 shouldParseCode:(unsigned)arg2 ;
-(BOOL)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned)arg2 ;
-(void)parser:(id)arg1 didStartContainerCode:(unsigned)arg2 contentLength:(unsigned)arg3 ;
-(void)parser:(id)arg1 didParseDataCode:(unsigned)arg2 bytes:(char*)arg3 contentLength:(unsigned)arg4 ;
-(void)parser:(id)arg1 didEndContainerCode:(unsigned)arg2 ;
-(id)initWithResponseData:(id)arg1 ;
-(NSNumber *)serverRevision;
-(void)_parseResponseData:(id)arg1 ;
-(NSArray *)addedIAPs;
-(NSArray *)removedIAPs;
@end


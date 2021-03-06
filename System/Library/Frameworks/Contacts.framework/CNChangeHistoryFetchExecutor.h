/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNChangeHistoryFetchRequest, CNContactStore;

@interface CNChangeHistoryFetchExecutor : NSObject {

	CNChangeHistoryFetchRequest* _request;
	CNContactStore* _store;

}

@property (nonatomic,copy,readonly) CNChangeHistoryFetchRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) CNContactStore * store;                                  //@synthesize store=_store - In the implementation block
+(id)os_log;
+(id)contactEventForChange:(id)arg1 factory:(id)arg2 ;
-(id)description;
-(CNChangeHistoryFetchRequest *)request;
-(CNContactStore *)store;
-(id)run:(id*)arg1 ;
-(id)keysToFetch;
-(id)initWithRequest:(id)arg1 store:(id)arg2 ;
-(id)deltaSync;
-(id)fullSync;
-(id)contactEventsFromLegacyResult:(id)arg1 eventFactory:(id)arg2 ;
-(id)groupEventsFromLegacyResult:(id)arg1 eventFactory:(id)arg2 ;
@end


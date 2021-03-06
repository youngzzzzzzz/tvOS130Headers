/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, StoreDownloadQueueResponse;

@interface RestoreDownloadItemsResponse : NSObject {

	NSArray* _requestItems;
	StoreDownloadQueueResponse* _serverResponse;

}

@property (nonatomic,copy) NSArray * requestItems;                                     //@synthesize requestItems=_requestItems - In the implementation block
@property (nonatomic,retain) StoreDownloadQueueResponse * serverResponse;              //@synthesize serverResponse=_serverResponse - In the implementation block
-(void)dealloc;
-(StoreDownloadQueueResponse *)serverResponse;
-(void)setRequestItems:(NSArray *)arg1 ;
-(NSArray *)requestItems;
-(void)setServerResponseWithError:(id)arg1 ;
-(void)setServerResponse:(StoreDownloadQueueResponse *)arg1 ;
@end


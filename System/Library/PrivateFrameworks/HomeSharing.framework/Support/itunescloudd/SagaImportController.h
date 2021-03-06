/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSDictionary;

@interface SagaImportController : NSObject {

	BOOL _shouldRestart;
	unsigned _totalItemCount;
	unsigned _currentItemCount;
	unsigned _processedItemCount;
	NSString* _currentPaginationToken;
	NSMutableDictionary* _mutableCloudIDToLyricsTokenMap;

}

@property (nonatomic,readonly) NSMutableDictionary * mutableCloudIDToLyricsTokenMap;              //@synthesize mutableCloudIDToLyricsTokenMap=_mutableCloudIDToLyricsTokenMap - In the implementation block
@property (nonatomic,readonly) BOOL shouldRestart;                                                //@synthesize shouldRestart=_shouldRestart - In the implementation block
@property (nonatomic,readonly) unsigned totalItemCount;                                           //@synthesize totalItemCount=_totalItemCount - In the implementation block
@property (nonatomic,readonly) unsigned currentItemCount;                                         //@synthesize currentItemCount=_currentItemCount - In the implementation block
@property (nonatomic,readonly) unsigned processedItemCount;                                       //@synthesize processedItemCount=_processedItemCount - In the implementation block
@property (nonatomic,readonly) NSString * currentPaginationToken;                                 //@synthesize currentPaginationToken=_currentPaginationToken - In the implementation block
@property (nonatomic,readonly) NSDictionary * cloudIDToLyricsTokenMap; 
-(id)init;
-(unsigned)totalItemCount;
-(BOOL)shouldRestart;
-(BOOL)processDAAPFileAtURL:(id)arg1 ;
-(NSString *)currentPaginationToken;
-(unsigned)processedItemCount;
-(unsigned)currentItemCount;
-(NSDictionary *)cloudIDToLyricsTokenMap;
-(NSMutableDictionary *)mutableCloudIDToLyricsTokenMap;
@end


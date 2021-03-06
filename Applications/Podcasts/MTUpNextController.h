/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:21 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsTVTopShelfExtension/MTSingleton.h>

@class NSMutableArray, NSArray;

@interface MTUpNextController : MTSingleton {

	NSMutableArray* _playerItems;
	unsigned long long _updateCount;

}

@property (nonatomic,retain) NSMutableArray * playerItems;                //@synthesize playerItems=_playerItems - In the implementation block
@property (assign,nonatomic) unsigned long long updateCount;              //@synthesize updateCount=_updateCount - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) unsigned long long count; 
+(id)_filePath;
+(id)_encodedUpNextClasses;
-(id)init;
-(unsigned long long)count;
-(void)clear;
-(NSArray *)items;
-(unsigned long long)updateCount;
-(void)setUpdateCount:(unsigned long long)arg1 ;
-(void)beginUpdates;
-(void)endUpdates;
-(void)removeEpisodesForUuid:(id)arg1 ;
-(void)removeEpisodeAtIndex:(unsigned long long)arg1 ;
-(BOOL)moveEpisodeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(unsigned long long)upNextOffset;
-(void)addPlayerItemsToPlayNext:(id)arg1 ;
-(void)addPlayerItemsToUpNext:(id)arg1 ;
-(void)_restoreUpNext;
-(void)addPlayerItemToUpNext:(id)arg1 ;
-(NSMutableArray *)playerItems;
-(void)_upNextDidChange;
-(void)_reportUpNextChangeType:(id)arg1 forPlayerItem:(id)arg2 withData:(id)arg3 ;
-(void)_reportUpNextChangeType:(id)arg1 forPlayerItems:(id)arg2 withData:(id)arg3 ;
-(BOOL)isPlayingFromUpNext;
-(unsigned long long)_currentUpNextIndex;
-(id)_encodedUpNext;
-(void)setPlayerItems:(NSMutableArray *)arg1 ;
-(void)addEpisodeUuidToUpNext:(id)arg1 ;
-(void)addEpisodeUuidsToUpNext:(id)arg1 ;
-(void)addEpisodeUuidToPlayNext:(id)arg1 ;
-(void)addEpisodeUuidsToPlayNext:(id)arg1 ;
-(void)addPlayerItemToPlayNext:(id)arg1 ;
-(BOOL)containsEpisodeUuid:(id)arg1 ;
-(BOOL)hasItemsInQueue;
@end


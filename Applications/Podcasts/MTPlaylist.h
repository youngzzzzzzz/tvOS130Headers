/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:19 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, MTPodcastPlaylistSettings, NSOrderedSet, MTSyncInfo;

@interface MTPlaylist : NSManagedObject

@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,readonly) BOOL isITunesPlaylist; 
@property (assign,nonatomic) int containerOrder; 
@property (assign,nonatomic) long long downloadedCount; 
@property (assign,nonatomic) long long flags; 
@property (assign,nonatomic) double generatedDate; 
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) long long mediaLibraryId; 
@property (assign,nonatomic) long long parentMediaLibraryId; 
@property (assign,nonatomic) long long sortOrder; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) long long unplayedCount; 
@property (assign,nonatomic) double updatedDate; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSSet * addedEpisodes; 
@property (nonatomic,retain) MTPodcastPlaylistSettings * defaultSettings; 
@property (nonatomic,retain) NSSet * deletedEpisodes; 
@property (nonatomic,retain) NSOrderedSet * episodes; 
@property (nonatomic,retain) NSOrderedSet * podcasts; 
@property (nonatomic,retain) NSOrderedSet * settings; 
@property (nonatomic,retain) MTSyncInfo * syncInfo; 
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(BOOL)isFolder;
-(BOOL)isITunesPlaylist;
-(void)setMediaLibraryId:(long long)arg1 ;
@end

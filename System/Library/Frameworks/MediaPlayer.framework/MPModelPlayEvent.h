/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSDate, MPModelAlbum, MPModelArtist, MPModelPlaylist, MPModelRadioStation;

@interface MPModelPlayEvent : MPModelObject

@property (nonatomic,copy) NSDate * datePlayed; 
@property (nonatomic,retain) MPModelAlbum * album; 
@property (nonatomic,retain) MPModelArtist * artist; 
@property (nonatomic,retain) MPModelPlaylist * playlist; 
@property (nonatomic,retain) MPModelRadioStation * radioStation; 
+(id)__album_KEY;
+(id)__artist_KEY;
+(id)__datePlayed_KEY;
+(id)__playlist_KEY;
+(id)__radioStation_KEY;
-(long long)itemType;
-(id)contentItemCollectionInfo;
@end


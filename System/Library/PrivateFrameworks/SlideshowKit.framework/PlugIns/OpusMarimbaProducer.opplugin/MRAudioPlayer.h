/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusMarimbaProducer/MRAudioPlayer.h>

@class NSArray, AVPlayer, NSString;

@interface MRAudioPlayer : NSObject <MRAudioPlayer> {

	NSArray* _audioItems;
	BOOL _shouldBePlaying;
	BOOL _isMuted;
	AVPlayer* _avPlayer;
	double _duration;
	double _parentDuration;
	double _localTime;
	double _volume;
	double _fadeInDuration;
	double _fadeOutDuration;
	double _duckLevel;
	double _duckInDuration;
	double _duckOutDuration;
	long long _priority;
	double _currentVolume;

}

@property (readonly) AVPlayer * avPlayer;                           //@synthesize avPlayer=_avPlayer - In the implementation block
@property (readonly) double duration;                               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double localTime;                      //@synthesize localTime=_localTime - In the implementation block
@property (readonly) double currentVolume;                          //@synthesize currentVolume=_currentVolume - In the implementation block
@property (assign,nonatomic) BOOL shouldBePlaying;                  //@synthesize shouldBePlaying=_shouldBePlaying - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double volume;                         //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) double fadeInDuration;                 //@synthesize fadeInDuration=_fadeInDuration - In the implementation block
@property (assign,nonatomic) double fadeOutDuration;                //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (assign,nonatomic) double duckLevel;                      //@synthesize duckLevel=_duckLevel - In the implementation block
@property (assign,nonatomic) double duckInDuration;                 //@synthesize duckInDuration=_duckInDuration - In the implementation block
@property (assign,nonatomic) double duckOutDuration;                //@synthesize duckOutDuration=_duckOutDuration - In the implementation block
@property (assign,nonatomic) double parentDuration;                 //@synthesize parentDuration=_parentDuration - In the implementation block
@property (assign,nonatomic) long long priority;                    //@synthesize priority=_priority - In the implementation block
@property (readonly) double currentDuckLevel; 
@property (assign,nonatomic) BOOL isMuted;                          //@synthesize isMuted=_isMuted - In the implementation block
-(void)dealloc;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(double)duration;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(BOOL)isMuted;
-(void)setIsMuted:(BOOL)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(AVPlayer *)avPlayer;
-(double)currentVolume;
-(double)localTime;
-(void)setLocalTime:(double)arg1 ;
-(double)duckInDuration;
-(void)setDuckInDuration:(double)arg1 ;
-(double)duckOutDuration;
-(void)setDuckOutDuration:(double)arg1 ;
-(double)duckLevel;
-(void)setDuckLevel:(double)arg1 ;
-(void)resyncAudioItem;
-(void)setShouldBePlaying:(BOOL)arg1 ;
-(void)syncVolumeToAudioPlaylist:(id)arg1 ;
-(id)initWithAudioItems:(id)arg1 andAudioPlaylist:(id)arg2 ;
-(void)setParentDuration:(double)arg1 ;
-(double)currentDuckLevel;
-(BOOL)shouldBePlaying;
-(void)processWithDuckLevel:(double)arg1 ;
-(double)parentDuration;
@end

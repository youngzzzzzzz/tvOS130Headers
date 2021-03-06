/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVRoute.h>

@class NSArray;

@interface MPAVOutputDeviceRoute : MPAVRoute {

	void* _logicalLeaderOutputDevice;
	NSArray* _outputDevices;

}

@property (nonatomic,readonly) NSArray * outputDevices;                            //@synthesize outputDevices=_outputDevices - In the implementation block
@property (nonatomic,readonly) void* logicalLeaderOutputDevice;                    //@synthesize logicalLeaderOutputDevice=_logicalLeaderOutputDevice - In the implementation block
@property (getter=isGroupLeader,nonatomic,readonly) BOOL groupLeader; 
+(id)localDeviceUID;
+(long long)pickableRouteTypeForOutputDevice:(void*)arg1 ;
+(void*)logicalLeaderFromOutputDevices:(id)arg1 ;
-(id)description;
-(BOOL)canAccessRemoteAssets;
-(BOOL)isGroupLeader;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(NSArray *)outputDevices;
-(long long)routeType;
-(id)routeName;
-(id)productIdentifier;
-(id)initWithOutputDevices:(id)arg1 ;
-(BOOL)isProxyGroupPlayer;
-(id)routeUID;
-(BOOL)isVolumeControlAvailable;
-(id)playingPairedDeviceName;
-(BOOL)isPickedOnPairedDevice;
-(id)groupUID;
-(BOOL)requiresPassword;
-(BOOL)isAppleTVRoute;
-(BOOL)isDeviceRoute;
-(BOOL)supportsGrouping;
-(BOOL)isSplitterCapable;
-(BOOL)isDeviceSpeakerRoute;
-(BOOL)isStereoPair;
-(BOOL)isAirPlayRoute;
-(BOOL)isLowLatencyRoute;
-(BOOL)supportsWirelessDisplay;
-(long long)pickableRouteType;
-(long long)routeSubtype;
-(BOOL)isCarplayRoute;
-(BOOL)isHomePodRoute;
-(BOOL)_anyOutputDevicePassesMRFunction:(/*function pointer*/void*)arg1 ;
-(BOOL)_anyOutputDevicePassesTest:(/*^block*/id)arg1 ;
-(void*)logicalLeaderOutputDevice;
@end


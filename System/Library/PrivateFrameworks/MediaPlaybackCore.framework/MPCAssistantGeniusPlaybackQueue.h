/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class NSURL;

@interface MPCAssistantGeniusPlaybackQueue : MPCAssistantPlaybackQueue {

	NSURL* _seedTrack;

}

@property (nonatomic,readonly) NSURL * seedTrack;              //@synthesize seedTrack=_seedTrack - In the implementation block
+(id)geniusQueueWithContextID:(id)arg1 seedTrack:(id)arg2 ;
-(id)description;
-(NSURL *)seedTrack;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 seedTrack:(id)arg2 ;
@end


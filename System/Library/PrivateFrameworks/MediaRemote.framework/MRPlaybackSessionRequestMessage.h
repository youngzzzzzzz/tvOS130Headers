/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRProtocolMessage.h>

@class _MRPlaybackSessionRequestProtobuf, _MRNowPlayingPlayerPathProtobuf;

@interface MRPlaybackSessionRequestMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRPlaybackSessionRequestProtobuf * request; 
@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath; 
-(unsigned long long)type;
-(_MRPlaybackSessionRequestProtobuf *)request;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(id)initWithRequest:(MRPlaybackSessionRequestProtobuf*)arg1 forPlayerPath:(MRNowPlayingPlayerPathProtobuf*)arg2 ;
@end

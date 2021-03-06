/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:49 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/rapportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PBSMediaRemoteServiceInterface, RPMessageable;
@class NSObject, RPSiriAudioSession, PBSMediaRemoteSiriContext;

@interface RPSiriDaemon : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	RPSiriAudioSession* _siriAudioSession;
	PBSMediaRemoteSiriContext* _siriContext;
	id<PBSMediaRemoteServiceInterface> _siriProxy;
	BOOL _siriStarted;
	id<RPMessageable> _messenger;

}

@property (nonatomic,retain) id<RPMessageable> messenger;              //@synthesize messenger=_messenger - In the implementation block
-(id)init;
-(void)invalidate;
-(id<RPMessageable>)messenger;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
-(BOOL)activateAndReturnError:(id*)arg1 ;
-(void)_handleSiriAudio:(id)arg1 ;
-(void)_handleSiriStart:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleSiriStop:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
@end


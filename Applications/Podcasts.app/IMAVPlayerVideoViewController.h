/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:23 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVPlayerViewController.h>

@class IMAVPlayer;

@interface IMAVPlayerVideoViewController : AVPlayerViewController {

	IMAVPlayer* _im_player;

}

@property (assign,nonatomic,__weak) IMAVPlayer * im_player;              //@synthesize im_player=_im_player - In the implementation block
-(id)initWithPlayer:(id)arg1 ;
-(void)setIm_player:(IMAVPlayer *)arg1 ;
-(void)mediaItemDidChange;
-(void)playbackSpeedDidChange;
-(IMAVPlayer *)im_player;
@end

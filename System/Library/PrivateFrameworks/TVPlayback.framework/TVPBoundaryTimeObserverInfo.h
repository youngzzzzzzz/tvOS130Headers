/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TVPBoundaryTimeObserverInfo : NSObject {

	NSArray* _times;
	/*^block*/id _handler;
	id _tokenFromAVPlayer;

}

@property (nonatomic,copy) NSArray * times;                     //@synthesize times=_times - In the implementation block
@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) id tokenFromAVPlayer;              //@synthesize tokenFromAVPlayer=_tokenFromAVPlayer - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setTimes:(NSArray *)arg1 ;
-(NSArray *)times;
-(id)tokenFromAVPlayer;
-(void)setTokenFromAVPlayer:(id)arg1 ;
@end


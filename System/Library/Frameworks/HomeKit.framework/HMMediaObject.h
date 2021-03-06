/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HMMediaSession, HMAccessorySettings;


@protocol HMMediaObject <NSObject>
@property (__weak) id<HMMediaObjectDelegate> delegate; 
@property (copy,readonly) HMMediaSession * mediaSession; 
@property (readonly) HMAccessorySettings * settings; 
@required
-(id<HMMediaObjectDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(HMAccessorySettings *)settings;
-(HMMediaSession *)mediaSession;

@end


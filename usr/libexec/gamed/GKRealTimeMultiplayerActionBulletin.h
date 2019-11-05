/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:37 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKRealTimeMultiplayerBulletin.h>

@class NSString;

@interface GKRealTimeMultiplayerActionBulletin : GKRealTimeMultiplayerBulletin {

	NSString* _debugLine;
	NSString* _notificationName;

}

@property (readonly) NSString * aggregateDictionaryKey; 
@property (readonly) NSString * debugLine;                           //@synthesize debugLine=_debugLine - In the implementation block
@property (readonly) NSString * notificationName;                    //@synthesize notificationName=_notificationName - In the implementation block
+(void)loadBulletinsForPushNotification:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(NSString *)notificationName;
-(NSString *)aggregateDictionaryKey;
-(void)assembleBulletin;
-(void)loadDataWithHandler:(/*^block*/id)arg1 ;
-(NSString *)debugLine;
-(void)setInvitedPlayerRespondedWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isAccept;
-(id)getDebugLine;
-(id)getNotificationName;
@end

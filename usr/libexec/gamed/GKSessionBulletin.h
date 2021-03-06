/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:39 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKMultiplayerBulletin.h>

@class NSString, GKGameDescriptor, NSDictionary, NSData, GKCloudGameSession, GKCloudPlayer;

@interface GKSessionBulletin : GKMultiplayerBulletin {

	NSString* _cloudContainer;
	GKGameDescriptor* _game;
	long long _originatingDeviceType;
	NSDictionary* _localizableMessage;
	NSString* _senderID;
	NSData* _data;
	NSString* _localizedMessage;
	NSString* _assembledMessage;
	GKCloudGameSession* _session;
	GKCloudPlayer* _sender;
	NSString* _aggregateDictionaryKey;

}

@property (nonatomic,retain) NSString * cloudContainer;                      //@synthesize cloudContainer=_cloudContainer - In the implementation block
@property (nonatomic,retain) GKGameDescriptor * game;                        //@synthesize game=_game - In the implementation block
@property (assign,nonatomic) long long originatingDeviceType;                //@synthesize originatingDeviceType=_originatingDeviceType - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableMessage;              //@synthesize localizableMessage=_localizableMessage - In the implementation block
@property (nonatomic,retain) NSString * senderID;                            //@synthesize senderID=_senderID - In the implementation block
@property (nonatomic,retain) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * localizedMessage;                    //@synthesize localizedMessage=_localizedMessage - In the implementation block
@property (nonatomic,readonly) NSString * assembledMessage;                  //@synthesize assembledMessage=_assembledMessage - In the implementation block
@property (nonatomic,retain) GKCloudGameSession * session;                   //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) GKCloudPlayer * sender;                         //@synthesize sender=_sender - In the implementation block
@property (readonly) NSString * aggregateDictionaryKey;                      //@synthesize aggregateDictionaryKey=_aggregateDictionaryKey - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)displayNotification;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(GKCloudPlayer *)sender;
-(GKCloudGameSession *)session;
-(void)setSender:(GKCloudPlayer *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(void)setSession:(GKCloudGameSession *)arg1 ;
-(NSString *)senderID;
-(NSString *)localizedMessage;
-(void)setSenderID:(NSString *)arg1 ;
-(void)setLocalizedMessage:(NSString *)arg1 ;
-(NSString *)aggregateDictionaryKey;
-(GKGameDescriptor *)game;
-(void)setGame:(GKGameDescriptor *)arg1 ;
-(NSDictionary *)localizableMessage;
-(void)setLocalizableMessage:(NSDictionary *)arg1 ;
-(long long)originatingDeviceType;
-(void)determineGameLocationOnDeviceOrInStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)assembleBulletin;
-(id)initWithPushNotification:(id)arg1 ;
-(void)loadDataWithHandler:(/*^block*/id)arg1 ;
-(NSString *)cloudContainer;
-(NSString *)assembledMessage;
-(void)distributeData;
-(void)localizeMessage;
-(void)setCloudContainer:(NSString *)arg1 ;
-(void)setOriginatingDeviceType:(long long)arg1 ;
@end


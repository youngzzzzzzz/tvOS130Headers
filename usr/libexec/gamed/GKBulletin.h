/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:39 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/NSCoding.h>
#import <gamed/NSSecureCoding.h>

@class GKGameDescriptor, NSString, NSDate, GKBulletinAction;

@interface GKBulletin : NSObject <NSCoding, NSSecureCoding> {

	GKGameDescriptor* _gameDescriptor;
	unsigned long long _bulletinRecordID;
	unsigned char _pushCommand;
	BOOL _hasSound;
	BOOL _showInListOnly;
	NSString* _recordID;
	NSString* _title;
	NSString* _message;
	NSDate* _date;
	NSDate* _expirationDate;
	NSString* _soundPath;
	GKBulletinAction* _acceptAction;
	GKBulletinAction* _defaultAction;
	GKBulletinAction* _dismissAction;
	GKBulletinAction* _declineAction;
	NSString* _gameName;
	NSString* _categoryIdentifier;

}

@property (assign) unsigned char pushCommand;                      //@synthesize pushCommand=_pushCommand - In the implementation block
@property (retain) NSString * recordID;                            //@synthesize recordID=_recordID - In the implementation block
@property (retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (retain) NSString * message;                             //@synthesize message=_message - In the implementation block
@property (retain) NSDate * date;                                  //@synthesize date=_date - In the implementation block
@property (retain) NSDate * expirationDate;                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign) BOOL hasSound;                                  //@synthesize hasSound=_hasSound - In the implementation block
@property (retain) NSString * soundPath;                           //@synthesize soundPath=_soundPath - In the implementation block
@property (retain) GKBulletinAction * acceptAction;                //@synthesize acceptAction=_acceptAction - In the implementation block
@property (retain) GKBulletinAction * defaultAction;               //@synthesize defaultAction=_defaultAction - In the implementation block
@property (retain) GKBulletinAction * dismissAction;               //@synthesize dismissAction=_dismissAction - In the implementation block
@property (retain) GKBulletinAction * declineAction;               //@synthesize declineAction=_declineAction - In the implementation block
@property (assign) BOOL showInListOnly;                            //@synthesize showInListOnly=_showInListOnly - In the implementation block
@property (retain) NSString * gameName;                            //@synthesize gameName=_gameName - In the implementation block
@property (retain) GKGameDescriptor * gameDescriptor;              //@synthesize gameDescriptor=_gameDescriptor - In the implementation block
@property (retain) NSString * categoryIdentifier;                  //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)performAsync:(/*^block*/id)arg1 ;
+(id)syncQueue;
+(void)loadBulletinsForPushNotification:(id)arg1 withHandler:(/*^block*/id)arg2 ;
+(void)bulletinsForPushNotification:(id)arg1 withHandler:(/*^block*/id)arg2 ;
+(BOOL)shouldProcessNotification;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
-(NSString *)categoryIdentifier;
-(NSString *)recordID;
-(void)setRecordID:(NSString *)arg1 ;
-(GKBulletinAction *)defaultAction;
-(void)setDefaultAction:(GKBulletinAction *)arg1 ;
-(GKBulletinAction *)dismissAction;
-(void)setDismissAction:(GKBulletinAction *)arg1 ;
-(void)handleAction:(id)arg1 ;
-(GKGameDescriptor *)gameDescriptor;
-(void)setGameDescriptor:(GKGameDescriptor *)arg1 ;
-(BOOL)hasSound;
-(void)setHasSound:(BOOL)arg1 ;
-(void)setSoundPath:(NSString *)arg1 ;
-(NSString *)gameName;
-(void)setGameName:(NSString *)arg1 ;
-(id)initWithPushNotification:(id)arg1 ;
-(void)setDeclineAction:(GKBulletinAction *)arg1 ;
-(id)dataFrom64String:(id)arg1 ;
-(GKBulletinAction *)acceptAction;
-(void)executeBulletinWithBulletinController:(id)arg1 ;
-(unsigned char)pushCommand;
-(NSString *)soundPath;
-(GKBulletinAction *)declineAction;
-(BOOL)showInListOnly;
-(void)setPushCommand:(unsigned char)arg1 ;
-(void)setAcceptAction:(GKBulletinAction *)arg1 ;
-(void)setShowInListOnly:(BOOL)arg1 ;
@end

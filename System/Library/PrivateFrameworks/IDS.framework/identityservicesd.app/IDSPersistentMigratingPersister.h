/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/IDSPersistentMapPersister.h>

@protocol IDSPersistentMapPersister, IMUserDefaults;
@class NSString;

@interface IDSPersistentMigratingPersister : NSObject <IDSPersistentMapPersister> {

	BOOL _migrated;
	id<IDSPersistentMapPersister> _originPersister;
	id<IDSPersistentMapPersister> _destinationPersister;
	NSString* _migrationDefaultKey;
	id<IMUserDefaults> _userDefaults;

}

@property (nonatomic,retain) id<IDSPersistentMapPersister> originPersister;                   //@synthesize originPersister=_originPersister - In the implementation block
@property (nonatomic,retain) id<IDSPersistentMapPersister> destinationPersister;              //@synthesize destinationPersister=_destinationPersister - In the implementation block
@property (assign,nonatomic) BOOL migrated;                                                   //@synthesize migrated=_migrated - In the implementation block
@property (nonatomic,retain) NSString * migrationDefaultKey;                                  //@synthesize migrationDefaultKey=_migrationDefaultKey - In the implementation block
@property (nonatomic,retain) id<IMUserDefaults> userDefaults;                                 //@synthesize userDefaults=_userDefaults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL isAvailable; 
-(NSString *)description;
-(id)data;
-(NSString *)identifier;
-(BOOL)isAvailable;
-(id<IMUserDefaults>)userDefaults;
-(void)setUserDefaults:(id<IMUserDefaults>)arg1 ;
-(id)initWithOriginPersister:(id)arg1 destinationPersister:(id)arg2 ;
-(void)saveData:(id)arg1 ;
-(void)purgeData;
-(id)initWithOriginPersister:(id)arg1 destinationPersister:(id)arg2 userDefaults:(id)arg3 ;
-(id<IDSPersistentMapPersister>)originPersister;
-(void)setOriginPersister:(id<IDSPersistentMapPersister>)arg1 ;
-(id<IDSPersistentMapPersister>)destinationPersister;
-(void)setDestinationPersister:(id<IDSPersistentMapPersister>)arg1 ;
-(BOOL)migrated;
-(void)setMigrated:(BOOL)arg1 ;
-(NSString *)migrationDefaultKey;
-(void)setMigrationDefaultKey:(NSString *)arg1 ;
@end

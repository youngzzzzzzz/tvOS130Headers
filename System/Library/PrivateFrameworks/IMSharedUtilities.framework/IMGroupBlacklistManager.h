/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface IMGroupBlacklistManager : NSObject {

	NSDate* _lastModifiedDate;

}

@property (retain) NSDate * lastModifiedDate;              //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
+(id)sharedInstance;
+(id)groupsBlacklistFilename;
-(id)init;
-(NSDate *)lastModifiedDate;
-(void)save;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(void)loadData;
-(void)reloadIfNeeded;
-(id)initFromFile:(id)arg1 ;
-(void)loadFromFile:(id)arg1 ;
-(BOOL)isFeatureDisabled;
-(void)_updateLastModifiedDate:(id)arg1 ;
-(BOOL)hasFileChanged;
-(void)blacklistGroupId:(id)arg1 ;
-(BOOL)isGroupInBlacklist:(id)arg1 ;
@end


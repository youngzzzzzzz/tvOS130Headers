/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, CKServerChangeToken;


@protocol SCKDatabaseStore
@property (nonatomic,copy) NSDate * lastSyncDate; 
@property (nonatomic,copy) NSDate * lastDirtyDate; 
@property (nonatomic,copy) CKServerChangeToken * serverChangeToken; 
@property (assign,getter=isCloudBackupEnabled,nonatomic) BOOL cloudBackupEnabled; 
@required
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(id)arg1;
-(NSDate *)lastSyncDate;
-(void)setLastSyncDate:(id)arg1;
-(void)setCloudBackupEnabled:(BOOL)arg1;
-(BOOL)isCloudBackupEnabled;
-(id)zoneStoreForSchema:(id)arg1;
-(NSDate *)lastDirtyDate;
-(void)setLastDirtyDate:(id)arg1;

@end


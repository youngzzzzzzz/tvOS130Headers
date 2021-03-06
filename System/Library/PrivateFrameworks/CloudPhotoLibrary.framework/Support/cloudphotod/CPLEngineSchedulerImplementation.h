/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CPLSyncSession;


@protocol CPLEngineSchedulerImplementation <CPLPlatformImplementation,CPLEngineComponent>
@property (nonatomic,readonly) CPLSyncSession * persistedInitialSyncSession; 
@required
-(void)noteScopeNeedsToPushToTransport;
-(void)noteClientNeedsToPull;
-(void)noteServerHasChanges;
-(void)noteSyncSessionSucceeded:(id)arg1;
-(CPLSyncSession *)persistedInitialSyncSession;
-(void)noteSyncSession:(id)arg1 failedWithError:(id)arg2;
-(BOOL)shouldCoalesceServerChangesNotification;
-(void)unscheduleSyncSession:(id)arg1;
-(id)scheduleNextSyncSessionAtDate:(id)arg1;
-(BOOL)shouldStartSyncSessionFromState:(unsigned long long)arg1;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/cloudphotod-Structs.h>
#import <cloudphotod/CPLCloudKitTransportTask.h>
#import <cloudphotod/CPLEngineTransportFetchScopeListChangesTask.h>

@class CPLCloudKitScopeListSyncAnchor, NSString;

@interface CPLCloudKitFetchScopeListChangesTask : CPLCloudKitTransportTask <CPLEngineTransportFetchScopeListChangesTask> {

	CPLCloudKitScopeListSyncAnchor* _ckScopeListSyncAnchor;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL foreground; 
@property (assign,getter=isHighPriorityBackground,nonatomic) BOOL highPriorityBackground; 
@property (assign,getter=isForcedTask,nonatomic) BOOL forcedTask; 
@property (assign,getter=isBackgroundTask,nonatomic) BOOL backgroundTask; 
@property (nonatomic,retain) id<CPLEngineTransportGroup> transportGroup; 
+(id)descriptionForScopeListSyncAnchor:(NSData*)arg1 ;
-(void)runOperations;
-(void)_launchOperationForSharedDatabase:(BOOL)arg1 ;
-(id)initWithController:(id)arg1 scopeListSyncAnchor:(NSData*)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end


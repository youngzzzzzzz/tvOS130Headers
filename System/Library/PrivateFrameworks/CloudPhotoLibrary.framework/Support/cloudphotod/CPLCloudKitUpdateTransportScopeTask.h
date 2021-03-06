/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/CPLCloudKitTransportTask.h>
#import <cloudphotod/CPLEngineTransportUpdateTransportScopeTask.h>

@class CPLCloudKitScope, CPLEngineScope, CPLLibraryInfo, NSString;

@interface CPLCloudKitUpdateTransportScopeTask : CPLCloudKitTransportTask <CPLEngineTransportUpdateTransportScopeTask> {

	/*^block*/id _completionHandler;
	CPLCloudKitScope* _cloudKitScope;
	CPLEngineScope* _scope;
	CPLLibraryInfo* _libraryInfo;

}

@property (nonatomic,readonly) CPLCloudKitScope * cloudKitScope;                                       //@synthesize cloudKitScope=_cloudKitScope - In the implementation block
@property (nonatomic,readonly) CPLEngineScope * scope;                                                 //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) CPLLibraryInfo * libraryInfo;                                           //@synthesize libraryInfo=_libraryInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL foreground; 
@property (assign,getter=isHighPriorityBackground,nonatomic) BOOL highPriorityBackground; 
@property (assign,getter=isForcedTask,nonatomic) BOOL forcedTask; 
@property (assign,getter=isBackgroundTask,nonatomic) BOOL backgroundTask; 
@property (nonatomic,retain) id<CPLEngineTransportGroup> transportGroup; 
-(CPLEngineScope *)scope;
-(CPLLibraryInfo *)libraryInfo;
-(void)runOperations;
-(CPLCloudKitScope *)cloudKitScope;
-(id)_errorForUpdateError:(id)arg1 ;
-(id)initWithController:(id)arg1 cloudKitScope:(id)arg2 scope:(id)arg3 libraryInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end


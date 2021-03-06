/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/IXAppInstallObserverDelegate.h>
#import <appstored/IXAppInstallCoordinatorObserver.h>

@protocol OS_dispatch_queue;
@class AppInstallsDatabaseStore, NSObject, TaskQueue, IXAppInstallObserver, AppInstallScheduler, NSString;

@interface AppInstallObserver : NSObject <IXAppInstallObserverDelegate, IXAppInstallCoordinatorObserver> {

	AppInstallsDatabaseStore* _databaseStore;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	TaskQueue* _policyQueue;
	IXAppInstallObserver* _installObserver;
	AppInstallScheduler* _installScheduler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3 ;
-(void)coordinatorDidCompleteSuccessfully:(id)arg1 ;
-(void)coordinatorShouldPrioritize:(id)arg1 ;
-(void)coordinatorShouldResume:(id)arg1 ;
-(void)coordinatorShouldPause:(id)arg1 ;
-(void)shouldPrioritizeAppWithBundleID:(id)arg1 ;
-(void)_handleAppMayBeUninstalledNotification:(id)arg1 ;
-(BOOL)_prioritizeRestoreInstallEntity:(id)arg1 transaction:(id)arg2 reason:(id)arg3 ;
-(void)_reviewCellularPolicyForInstallID:(long long)arg1 usingDownload:(id)arg2 coordinator:(id)arg3 ;
-(void)_reviewConstrainedPolicyForInstallID:(long long)arg1 usingDownload:(id)arg2 coordinator:(id)arg3 ;
-(void)_applicationInstallsDidPrioritize:(id)arg1 coordinator:(id)arg2 ;
-(void)_presentNetworkDialogWithProxy:(id)arg1 ;
-(void)_pauseCoordinator:(id)arg1 withLogKey:(id)arg2 ;
@end


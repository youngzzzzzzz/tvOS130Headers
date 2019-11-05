/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneLibrary/SSDownloadManagerObserver.h>
#import <ToneLibrary/SSPurchaseManagerDelegate.h>
#import <ToneLibrary/TLToneStoreDownloadController.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSHashTable, NSMutableDictionary, SSDownloadManager, SSPurchaseManager;

@interface TLToneStoreDownloadStoreServicesController : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, TLToneStoreDownloadController> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	NSHashTable* _observers;
	NSString* _storeAccountName;
	NSMutableDictionary* _toneStoreDownloadsByStoreDownloadPersistentIdentifiers;
	SSDownloadManager* _storeDownloadManager;
	SSPurchaseManager* _storePurchaseManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * storeAccountName; 
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2 ;
-(void)_handleAccountStoreDidChangeNotification:(id)arg1 ;
-(void)_updateStoreAccountName;
-(void)_performBlockOnAccessQueue:(/*^block*/id)arg1 ;
-(void)_handleToneManagerContentsDidChangeNotification:(id)arg1 ;
-(void)_assertRunningOnAccessQueue;
-(void)_notifyObserversOfUpdatedStoreAccountName:(id)arg1 ;
-(void)_openToneStoreWithStoreItemKind:(id)arg1 ;
-(void)_notifyObserversOfStartedToneStoreDownloads:(id)arg1 progressedToneStoreDownload:(id)arg2 finishedToneStoreDownloads:(id)arg3 ;
-(void)_notifyObserversOfCheckingForDownloadsFinishedWithoutNeedToIssueAnyDownload;
-(void)openAlertToneStore;
-(void)openRingtoneStore;
-(void)redownloadAllTones;
-(NSString *)storeAccountName;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:43:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/Support/bookassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLPurchaseManagerDelegate, OS_dispatch_queue, BLOSTransactionCoordinating;
@class NSObject, BLDatabaseManager, BLDownloadPolicyManager;

@interface BLPurchaseManager : NSObject {

	id<BLPurchaseManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BLDatabaseManager* _databaseManager;
	BLDownloadPolicyManager* _downloadPolicyManager;
	id<BLOSTransactionCoordinating> _transactionCoordinator;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                                 //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic,__weak) BLDatabaseManager * databaseManager;                                 //@synthesize databaseManager=_databaseManager - In the implementation block
@property (assign,nonatomic,__weak) BLDownloadPolicyManager * downloadPolicyManager;                     //@synthesize downloadPolicyManager=_downloadPolicyManager - In the implementation block
@property (assign,nonatomic,__weak) id<BLOSTransactionCoordinating> transactionCoordinator;              //@synthesize transactionCoordinator=_transactionCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<BLPurchaseManagerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
-(id<BLPurchaseManagerDelegate>)delegate;
-(void)setDelegate:(id<BLPurchaseManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BLDatabaseManager *)databaseManager;
-(void)setDatabaseManager:(BLDatabaseManager *)arg1 ;
-(void)purchaseWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDatabaseManager:(id)arg1 downloadPolicyManager:(id)arg2 transactionCoordinator:(id)arg3 ;
-(void)requestDownloadWithMetadata:(id)arg1 isRestore:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BLDownloadPolicyManager *)downloadPolicyManager;
-(void)setDownloadPolicyManager:(BLDownloadPolicyManager *)arg1 ;
-(id<BLOSTransactionCoordinating>)transactionCoordinator;
-(void)setTransactionCoordinator:(id<BLOSTransactionCoordinating>)arg1 ;
-(void)dq_performPurchaseWithRequest:(id)arg1 downloadID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)p_downloadIDForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dq_performDownloadWithPermlink:(id)arg1 title:(id)arg2 clientIdentifier:(id)arg3 downloadID:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)p_downloadIDForPermlink:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dq_performDownloadDownloadMetadata:(id)arg1 downloadID:(id)arg2 clientIdentifier:(id)arg3 isRestoreItem:(BOOL)arg4 ;
-(id)dq_writeMetadata:(id)arg1 clientIdentifier:(id)arg2 downloadID:(id)arg3 ;
-(void)dq_triggerDownloadForDownloadID:(id)arg1 urlToAsset:(id)arg2 ;
-(id)dq_writeSinf:(id)arg1 downloadID:(id)arg2 ;
-(id)dq_writeArtworkWithURL:(id)arg1 downloadID:(id)arg2 ;
-(void)downloadWithPermlink:(id)arg1 title:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_sendPurchaseFailureNotificationWithPurchase:(id)arg1 downloadID:(id)arg2 ;
@end

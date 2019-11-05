/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:18 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MZKeyValueStoreOperationDelegate.h>
#import <Podcasts/MZKeyValueStoreDeserializeOperationDelegate.h>
#import <Podcasts/NSURLSessionTaskDelegate.h>
#import <Podcasts/AMSURLProtocolDelegate.h>

@protocol MZKeyValueStoreControllerDelegate, OS_dispatch_queue;
@class NSURL, NSString, MZKeyValueStoreAuthenticationController, NSMutableArray, MZKeyValueStoreTransaction, MZKeyValueStoreDeserializer, NSObject, MZTaskAssertion, IMURLRequestService;

@interface MZKeyValueStoreController : NSObject <MZKeyValueStoreOperationDelegate, MZKeyValueStoreDeserializeOperationDelegate, NSURLSessionTaskDelegate, AMSURLProtocolDelegate> {

	NSURL* _defaultGetURL;
	NSURL* _defaultSetURL;
	NSString* _defaultDomain;
	BOOL _enabled;
	MZKeyValueStoreAuthenticationController* _authenticationController;
	BOOL _canRequestStoreSignIn;
	BOOL _resolvingError;
	id<MZKeyValueStoreControllerDelegate> _delegate;
	NSMutableArray* _pendingTransactions;
	MZKeyValueStoreTransaction* _currentTransaction;
	MZKeyValueStoreDeserializer* _currentDeserializer;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	MZTaskAssertion* _backgroundTaskAssertion;
	IMURLRequestService* _urlRequestService;

}

@property (nonatomic,retain) NSMutableArray * pendingTransactions;                                  //@synthesize pendingTransactions=_pendingTransactions - In the implementation block
@property (nonatomic,retain) MZKeyValueStoreTransaction * currentTransaction;                       //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (nonatomic,retain) IMURLRequestService * urlRequestService;                               //@synthesize urlRequestService=_urlRequestService - In the implementation block
@property (nonatomic,retain) MZKeyValueStoreDeserializer * currentDeserializer;                     //@synthesize currentDeserializer=_currentDeserializer - In the implementation block
@property (assign,getter=isResolvingError,nonatomic) BOOL resolvingError;                           //@synthesize resolvingError=_resolvingError - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                            //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSURL * defaultGetURL;                                                 //@synthesize defaultGetURL=_defaultGetURL - In the implementation block
@property (nonatomic,retain) NSURL * defaultSetURL;                                                 //@synthesize defaultSetURL=_defaultSetURL - In the implementation block
@property (nonatomic,copy) NSString * defaultDomain;                                                //@synthesize defaultDomain=_defaultDomain - In the implementation block
@property (nonatomic,retain) MZTaskAssertion * backgroundTaskAssertion;                             //@synthesize backgroundTaskAssertion=_backgroundTaskAssertion - In the implementation block
@property (__weak) id<MZKeyValueStoreControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL canRequestStoreSignIn;                                                      //@synthesize canRequestStoreSignIn=_canRequestStoreSignIn - In the implementation block
@property (getter=isEnabled,readonly) BOOL enabled;                                                 //@synthesize enabled=_enabled - In the implementation block
@property (retain) MZKeyValueStoreAuthenticationController * authenticationController;              //@synthesize authenticationController=_authenticationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id<MZKeyValueStoreControllerDelegate>)delegate;
-(void)setDelegate:(id<MZKeyValueStoreControllerDelegate>)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)reset;
-(BOOL)isEnabled;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(MZKeyValueStoreAuthenticationController *)authenticationController;
-(void)setAuthenticationController:(MZKeyValueStoreAuthenticationController *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_endBackgroundTask;
-(void)_beginBackgroundTask;
-(NSMutableArray *)pendingTransactions;
-(void)setPendingTransactions:(NSMutableArray *)arg1 ;
-(BOOL)isIdle;
-(void)_networkTypeChangedNotification:(id)arg1 ;
-(void)scheduleTransaction:(id)arg1 ;
-(BOOL)_delegateShouldScheduleTransaction:(id)arg1 error:(id*)arg2 ;
-(MZTaskAssertion *)backgroundTaskAssertion;
-(void)_delegateTransactionDidFinish:(id)arg1 ;
-(BOOL)_delegateTransactionDidFail:(id)arg1 withError:(id)arg2 ;
-(void)_resolveError:(id)arg1 resolution:(int)arg2 ;
-(void)_delegateTransactionDidCancel:(id)arg1 withError:(id)arg2 ;
-(void)cancelScheduledTransaction:(id)arg1 ;
-(void)cancelAllTransactions;
-(void)cancelAllTransactionsCancelCode:(long long)arg1 ;
-(MZKeyValueStoreTransaction *)currentTransaction;
-(void)setCurrentTransaction:(MZKeyValueStoreTransaction *)arg1 ;
-(BOOL)isResolvingError;
-(void)setBackgroundTaskAssertion:(MZTaskAssertion *)arg1 ;
-(BOOL)AMSURLSession:(id)arg1 task:(id)arg2 shouldFailWithServerError:(id)arg3 ;
-(BOOL)AMSURLSession:(id)arg1 shouldHandleAuthenticationForAccount:(id)arg2 dialogDictionary:(id)arg3 ;
-(void)setCanRequestStoreSignIn:(BOOL)arg1 ;
-(BOOL)canRequestStoreSignIn;
-(id)initWithDomain:(id)arg1 baseURLForGETAll:(id)arg2 baseURLForPUTAll:(id)arg3 ;
-(NSString *)defaultDomain;
-(NSURL *)defaultGetURL;
-(NSURL *)defaultSetURL;
-(void)resolveError:(id)arg1 resolution:(int)arg2 ;
-(void)_processPendingTransactions;
-(void)_cancelAllPendingTransactions:(id)arg1 ;
-(id)clampsController;
-(id)_scheduleTransactionWithType:(int)arg1 sinceDomainVersion:(id)arg2 URL:(id)arg3 keys:(id)arg4 processor:(id)arg5 ;
-(void)_scheduleTransaction:(id)arg1 ;
-(void)_transactionDidFail:(id)arg1 withError:(id)arg2 ;
-(void)_cancelTransaction:(id)arg1 error:(id)arg2 ;
-(void)_transactionDidCancel:(id)arg1 withError:(id)arg2 ;
-(void)_processCurrentTransaction;
-(BOOL)_authenticationCanProcessTransaction:(id)arg1 error:(id*)arg2 ;
-(id)_requestForTransaction:(id)arg1 ;
-(BOOL)_canScheduleTransaction:(id)arg1 error:(id*)arg2 ;
-(void)_addPendingTransaction:(id)arg1 ;
-(BOOL)_isEnabledForTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isTransactionValid:(id)arg1 error:(id*)arg2 ;
-(BOOL)_clampsCanScheduleTransaction:(id)arg1 error:(id*)arg2 ;
-(void)setCurrentDeserializer:(MZKeyValueStoreDeserializer *)arg1 ;
-(void)_processOperationOutput:(id)arg1 forRequest:(id)arg2 ;
-(void)setResolvingError:(BOOL)arg1 ;
-(void)_errorResolutionRetry:(id)arg1 ;
-(void)_errorResolutionCancel:(id)arg1 ;
-(void)_errorResolutionDefault:(id)arg1 ;
-(void)_enqueueStoreRequest:(id)arg1 withUrlRequest:(id)arg2 ;
-(void)_currentTransactionDidFinish;
-(MZKeyValueStoreDeserializer *)currentDeserializer;
-(void)keyValueStoreOperation:(id)arg1 scheduleURLRequest:(id)arg2 ;
-(void)keyValueStoreOperationOperationDidFinish:(id)arg1 ;
-(void)deserializeOperationDidFinish:(id)arg1 shouldReschedule:(BOOL)arg2 ;
-(void)setDefaultDomain:(NSString *)arg1 ;
-(void)setDefaultGetURL:(NSURL *)arg1 ;
-(void)setDefaultSetURL:(NSURL *)arg1 ;
-(id)scheduleGetAllTransactionWithSinceDomainVersion:(id)arg1 processor:(id)arg2 ;
-(id)scheduleGetTransactionWithKeys:(id)arg1 processor:(id)arg2 ;
-(id)scheduleSetTransactionWithKeys:(id)arg1 processor:(id)arg2 ;
-(IMURLRequestService *)urlRequestService;
-(void)setUrlRequestService:(IMURLRequestService *)arg1 ;
-(id)scheduleApnSubscriptionTransactionWithDictionary:(id)arg1 ;
@end

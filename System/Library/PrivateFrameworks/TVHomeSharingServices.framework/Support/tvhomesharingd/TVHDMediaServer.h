/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/Support/tvhomesharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class TVHSMediaServerIdentifier, NSString, TVHDBonjourServiceConfiguration, NSObject, TVHDMediaServerLoginSession, TVHDMediaServerRequestSession, TVSStateMachine, NSCache, TVHDMediaServerResolveOperation, TVHDMediaServerConnectOperation, TVHDMediaServerDAAPRevisionOperation, TVHDMediaServerDPAPRevisionOperation, TVHSURLRequestOperation, NSOperationQueue, TVHDMediaServerState;

@interface TVHDMediaServer : NSObject {

	BOOL _supportsDRMContent;
	TVHSMediaServerIdentifier* _identifier;
	unsigned long long _type;
	NSString* _homeSharingGroupIdentifier;
	NSString* _keybagPath;
	NSString* _displayName;
	TVHDBonjourServiceConfiguration* _bonjourServiceConfiguration;
	NSObject*<OS_dispatch_queue> _completionQueue;
	TVHDMediaServerLoginSession* _loginSession;
	TVHDMediaServerRequestSession* _requestSession;
	TVSStateMachine* _stateMachine;
	NSCache* _DAAPPlaybackURLCache;
	NSCache* _DPAPPlaybackURLCache;
	TVHDMediaServerResolveOperation* _resolveOperation;
	TVHDMediaServerConnectOperation* _connectOperation;
	TVHDMediaServerDAAPRevisionOperation* _DAAPRevisionOperation;
	TVHDMediaServerDPAPRevisionOperation* _DPAPRevisionOperation;
	TVHSURLRequestOperation* _logoutOperation;
	NSOperationQueue* _privateOperationQueue;
	NSOperationQueue* _rentalOperationQueue;

}

@property (nonatomic,retain) TVHSMediaServerIdentifier * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * homeSharingGroupIdentifier;                                       //@synthesize homeSharingGroupIdentifier=_homeSharingGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSString * keybagPath;                                                       //@synthesize keybagPath=_keybagPath - In the implementation block
@property (nonatomic,copy) TVHDMediaServerLoginSession * loginSession;                                  //@synthesize loginSession=_loginSession - In the implementation block
@property (assign,nonatomic) BOOL supportsDRMContent;                                                   //@synthesize supportsDRMContent=_supportsDRMContent - In the implementation block
@property (nonatomic,retain) TVHDMediaServerRequestSession * requestSession;                            //@synthesize requestSession=_requestSession - In the implementation block
@property (nonatomic,retain) TVSStateMachine * stateMachine;                                            //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) NSCache * DAAPPlaybackURLCache;                                            //@synthesize DAAPPlaybackURLCache=_DAAPPlaybackURLCache - In the implementation block
@property (nonatomic,retain) NSCache * DPAPPlaybackURLCache;                                            //@synthesize DPAPPlaybackURLCache=_DPAPPlaybackURLCache - In the implementation block
@property (nonatomic,retain) TVHDMediaServerResolveOperation * resolveOperation;                        //@synthesize resolveOperation=_resolveOperation - In the implementation block
@property (nonatomic,retain) TVHDMediaServerConnectOperation * connectOperation;                        //@synthesize connectOperation=_connectOperation - In the implementation block
@property (nonatomic,retain) TVHDMediaServerDAAPRevisionOperation * DAAPRevisionOperation;              //@synthesize DAAPRevisionOperation=_DAAPRevisionOperation - In the implementation block
@property (nonatomic,retain) TVHDMediaServerDPAPRevisionOperation * DPAPRevisionOperation;              //@synthesize DPAPRevisionOperation=_DPAPRevisionOperation - In the implementation block
@property (nonatomic,retain) TVHSURLRequestOperation * logoutOperation;                                 //@synthesize logoutOperation=_logoutOperation - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateOperationQueue;                                  //@synthesize privateOperationQueue=_privateOperationQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * rentalOperationQueue;                                   //@synthesize rentalOperationQueue=_rentalOperationQueue - In the implementation block
@property (nonatomic,copy,readonly) TVHDMediaServerState * state; 
@property (nonatomic,copy) NSString * displayName;                                                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) TVHDBonjourServiceConfiguration * bonjourServiceConfiguration;               //@synthesize bonjourServiceConfiguration=_bonjourServiceConfiguration - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;                              //@synthesize completionQueue=_completionQueue - In the implementation block
+(id)_playbackURLCacheKeyWithItemID:(id)arg1 itemFormat:(id)arg2 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(TVHSMediaServerIdentifier *)identifier;
-(id)_baseURL;
-(TVHDMediaServerState *)state;
-(unsigned long long)_connectionState;
-(void)setIdentifier:(TVHSMediaServerIdentifier *)arg1 ;
-(void)disconnect;
-(NSString *)displayName;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)_setupStateMachine;
-(TVSStateMachine *)stateMachine;
-(void)setStateMachine:(TVSStateMachine *)arg1 ;
-(NSString *)keybagPath;
-(void)setKeybagPath:(NSString *)arg1 ;
-(void)_tearDownConnection;
-(void)setLoginSession:(TVHDMediaServerLoginSession *)arg1 ;
-(TVHDMediaServerLoginSession *)loginSession;
-(BOOL)supportsDRMContent;
-(NSOperationQueue *)privateOperationQueue;
-(void)setPrivateOperationQueue:(NSOperationQueue *)arg1 ;
-(NSString *)homeSharingGroupIdentifier;
-(void)_startResolving;
-(void)_stopResolving;
-(void)_registerStateMachineHandlers;
-(id)_stateMachineName;
-(TVHDMediaServerRequestSession *)requestSession;
-(void)setRequestSession:(TVHDMediaServerRequestSession *)arg1 ;
-(void)_handleRequestError:(id)arg1 ;
-(void)_dispatchBlockOnCompletionQueue:(/*^block*/id)arg1 ;
-(id)_completionOperationWithBlock:(/*^block*/id)arg1 ;
-(id)_performDRMWorkWithBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_performRentalWorkWithItem:(id)arg1 checkin:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSCache *)DAAPPlaybackURLCache;
-(NSCache *)DPAPPlaybackURLCache;
-(id)_DMAPPlaybackURLStringWithItemID:(id)arg1 databaseID:(unsigned)arg2 itemFormat:(id)arg3 ;
-(id)_signedURLWithURLPathString:(id)arg1 ;
-(void)_startConnecting;
-(void)_connectionEstablishedWithLoginSession:(id)arg1 ;
-(TVHDMediaServerResolveOperation *)resolveOperation;
-(TVHDBonjourServiceConfiguration *)bonjourServiceConfiguration;
-(void)setResolveOperation:(TVHDMediaServerResolveOperation *)arg1 ;
-(void)setHomeSharingGroupIdentifier:(NSString *)arg1 ;
-(TVHDMediaServerConnectOperation *)connectOperation;
-(void)setConnectOperation:(TVHDMediaServerConnectOperation *)arg1 ;
-(void)_updateStateAndNotifyWithLoginSession:(id)arg1 ;
-(void)_startMonitoringDAAPRevisionChange;
-(void)_startMonitoringDPAPRevisionChange;
-(void)_startMonitoringDRMRevisionChange;
-(void)_startKeybagSynchronization;
-(void)_logoutIfNeeded;
-(void)_stopConnecting;
-(void)_clearPlaybackURLCaches;
-(void)_updateStateAndNotifyWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_canMakeSessionRequests;
-(void)setLogoutOperation:(TVHSURLRequestOperation *)arg1 ;
-(void)_updateDAAPSessionWithRevision:(unsigned)arg1 ;
-(void)_fetchDPAPStateWithNewRevision:(unsigned)arg1 ;
-(void)_updateDPAPSessionWithRevision:(unsigned)arg1 databaseID:(unsigned)arg2 databasePersistentID:(unsigned long long)arg3 basePlaylistID:(unsigned)arg4 basePlaylistPersistentID:(unsigned long long)arg5 isImportingDatabase:(BOOL)arg6 ;
-(id)synchronizeKeybagWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSOperationQueue *)rentalOperationQueue;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 displayName:(id)arg3 homeSharingGroupIdentifier:(id)arg4 ;
-(void)startConnecting;
-(id)enqueueRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)verifyIsAvailableWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)checkoutRentalItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)checkinRentalItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)playbackURLWithItemID:(id)arg1 itemFormat:(id)arg2 protocol:(unsigned long long)arg3 ;
-(id)URLsForRequests:(id)arg1 ;
-(void)playbackDidTimeout;
-(void)setBonjourServiceConfiguration:(TVHDBonjourServiceConfiguration *)arg1 ;
-(void)setSupportsDRMContent:(BOOL)arg1 ;
-(void)setDAAPPlaybackURLCache:(NSCache *)arg1 ;
-(void)setDPAPPlaybackURLCache:(NSCache *)arg1 ;
-(TVHDMediaServerDAAPRevisionOperation *)DAAPRevisionOperation;
-(void)setDAAPRevisionOperation:(TVHDMediaServerDAAPRevisionOperation *)arg1 ;
-(TVHDMediaServerDPAPRevisionOperation *)DPAPRevisionOperation;
-(void)setDPAPRevisionOperation:(TVHDMediaServerDPAPRevisionOperation *)arg1 ;
-(TVHSURLRequestOperation *)logoutOperation;
-(void)setRentalOperationQueue:(NSOperationQueue *)arg1 ;
@end


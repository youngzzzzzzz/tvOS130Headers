/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class INCDisplayLayoutMonitorObserver, INWatchdogTimer, NSObject, INCExtensionTransaction, INCAppProxy, NSArray, INIntent;

@interface INCExtensionConnection : NSObject {

	INCDisplayLayoutMonitorObserver* _layoutObserver;
	INWatchdogTimer* _requestTimer;
	BOOL _shouldObserveLayout;
	NSObject*<OS_dispatch_queue> _queue;
	INCExtensionTransaction* _transaction;
	INCAppProxy* _appProxy;
	long long _supportedExtensionTypes;
	NSArray* _extensionInputItems;
	double _requestTimeoutInterval;
	/*^block*/id _timeoutHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _remoteExtensionProxyProvider;

}

@property (assign,setter=_setShouldObserveLayout:,nonatomic) BOOL _shouldObserveLayout;              //@synthesize shouldObserveLayout=_shouldObserveLayout - In the implementation block
@property (nonatomic,copy) id remoteExtensionProxyProvider;                                          //@synthesize remoteExtensionProxyProvider=_remoteExtensionProxyProvider - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _queue;                                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) INCExtensionTransaction * _transaction;                               //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) INCAppProxy * appProxy;                                               //@synthesize appProxy=_appProxy - In the implementation block
@property (nonatomic,readonly) long long supportedExtensionTypes;                                    //@synthesize supportedExtensionTypes=_supportedExtensionTypes - In the implementation block
@property (nonatomic,retain) INIntent * intent; 
@property (nonatomic,retain) NSArray * extensionInputItems;                                          //@synthesize extensionInputItems=_extensionInputItems - In the implementation block
@property (assign,nonatomic) double requestTimeoutInterval;                                          //@synthesize requestTimeoutInterval=_requestTimeoutInterval - In the implementation block
@property (nonatomic,copy) id timeoutHandler;                                                        //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                                   //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (assign,nonatomic) BOOL requiresTCC; 
+(void)initialize;
-(NSObject*<OS_dispatch_queue>)_queue;
-(void)setInterruptionHandler:(id)arg1 ;
-(INCExtensionTransaction *)_transaction;
-(void)reset;
-(id)interruptionHandler;
-(INIntent *)intent;
-(void)setIntent:(INIntent *)arg1 ;
-(id)initWithIntent:(id)arg1 ;
-(id)timeoutHandler;
-(void)setTimeoutHandler:(id)arg1 ;
-(void)resumeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setExtensionInputItems:(NSArray *)arg1 ;
-(NSArray *)extensionInputItems;
-(BOOL)requiresTCC;
-(void)setRequiresTCC:(BOOL)arg1 ;
-(BOOL)_shouldObserveLayout;
-(id)initWithIntent:(id)arg1 remoteProxyProvider:(/*^block*/id)arg2 ;
-(id)initWithIntent:(id)arg1 supportedExtensionTypes:(long long)arg2 remoteProxyProvider:(/*^block*/id)arg3 ;
-(id)initWithIntent:(id)arg1 supportedExtensionTypes:(long long)arg2 donateInteraction:(BOOL)arg3 groupIdentifier:(id)arg4 remoteProxyProvider:(/*^block*/id)arg5 ;
-(void)_setShouldObserveLayout:(BOOL)arg1 ;
-(void)_startRequestTimerWithExtensionProxy:(id)arg1 ;
-(double)_timeoutIntervalForTransactionState:(id)arg1 ;
-(BOOL)_cancelRequestTimer;
-(INCAppProxy *)appProxy;
-(long long)supportedExtensionTypes;
-(double)requestTimeoutInterval;
-(void)setRequestTimeoutInterval:(double)arg1 ;
-(id)remoteExtensionProxyProvider;
-(void)setRemoteExtensionProxyProvider:(id)arg1 ;
@end


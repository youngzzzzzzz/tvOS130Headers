/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKPaymentQueueDelegate;
@class NSString, SKPaymentQueueClient, NSMutableDictionary, NSMutableArray, SKXPCConnection;

@interface SKPaymentQueueInternal : NSObject {

	BOOL _checkedIn;
	BOOL _isRefreshing;
	BOOL _restoreFinishedDuringRefresh;
	BOOL _restoringCompletedTransactions;
	NSString* _identifier;
	SKPaymentQueueClient* _client;
	NSMutableDictionary* _downloads;
	NSMutableArray* _localTransactions;
	NSMutableArray* _transactions;
	NSMutableArray* _weakObservers;
	SKXPCConnection* _requestConnection;
	SKXPCConnection* _responseConnection;
	id<SKPaymentQueueDelegate> _delegate;

}
-(id)init;
-(void)dealloc;
@end


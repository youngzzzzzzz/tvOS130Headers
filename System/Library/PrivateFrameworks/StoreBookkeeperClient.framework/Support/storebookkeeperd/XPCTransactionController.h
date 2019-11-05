/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface XPCTransactionController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _openTransactions;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) NSMutableArray * openTransactions;               //@synthesize openTransactions=_openTransactions - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_init;
-(void)endTransaction:(id)arg1 ;
-(BOOL)isInTransaction;
-(id)beginTransactionWithIdentifier:(id)arg1 ;
-(NSMutableArray *)openTransactions;
@end

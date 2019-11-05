/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifySubscriptionsOperation : CKDatabaseOperation {

	/*^block*/id _modifySubscriptionsCompletionBlock;
	NSArray* _subscriptionsToSave;
	NSArray* _subscriptionIDsToDelete;
	NSMutableArray* _savedSubscriptions;
	NSMutableArray* _deletedSubscriptionIDs;
	NSMutableDictionary* _subscriptionsBySubscriptionIDs;
	NSMutableDictionary* _subscriptionErrors;

}

@property (nonatomic,retain) NSMutableArray * savedSubscriptions;                               //@synthesize savedSubscriptions=_savedSubscriptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedSubscriptionIDs;                           //@synthesize deletedSubscriptionIDs=_deletedSubscriptionIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionsBySubscriptionIDs;              //@synthesize subscriptionsBySubscriptionIDs=_subscriptionsBySubscriptionIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionErrors;                          //@synthesize subscriptionErrors=_subscriptionErrors - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionsToSave;                                       //@synthesize subscriptionsToSave=_subscriptionsToSave - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionIDsToDelete;                                   //@synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete - In the implementation block
@property (nonatomic,copy) id modifySubscriptionsCompletionBlock;                               //@synthesize modifySubscriptionsCompletionBlock=_modifySubscriptionsCompletionBlock - In the implementation block
-(id)init;
-(id)initWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2 ;
-(void)setModifySubscriptionsCompletionBlock:(id)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSArray *)subscriptionsToSave;
-(void)setSubscriptionsToSave:(NSArray *)arg1 ;
-(NSArray *)subscriptionIDsToDelete;
-(void)setSubscriptionIDsToDelete:(NSArray *)arg1 ;
-(id)modifySubscriptionsCompletionBlock;
-(NSMutableDictionary *)subscriptionsBySubscriptionIDs;
-(NSMutableDictionary *)subscriptionErrors;
-(NSMutableArray *)deletedSubscriptionIDs;
-(NSMutableArray *)savedSubscriptions;
-(void)setSavedSubscriptions:(NSMutableArray *)arg1 ;
-(void)setDeletedSubscriptionIDs:(NSMutableArray *)arg1 ;
-(void)setSubscriptionsBySubscriptionIDs:(NSMutableDictionary *)arg1 ;
-(void)setSubscriptionErrors:(NSMutableDictionary *)arg1 ;
@end

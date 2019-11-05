/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, HFCameraClipPosition, HMCameraClipManager, NSDictionary, HFUniqueArrayDiff;

@interface HFCameraClipPlayerQueueUpdate : NSObject {

	BOOL _hasQueueChanges;
	BOOL _queueChangesRequireRebuild;
	NSArray* _clips;
	HFCameraClipPosition* _targetPosition;
	NSArray* _initialQueuedItems;
	unsigned long long _queueLimit;
	NSArray* _updatedClipQueue;
	HMCameraClipManager* _clipManager;
	NSDictionary* _initialQueuedItemsByClipID;
	HFUniqueArrayDiff* _queueDiff;

}

@property (nonatomic,readonly) HMCameraClipManager * clipManager;                      //@synthesize clipManager=_clipManager - In the implementation block
@property (nonatomic,readonly) NSDictionary * initialQueuedItemsByClipID;              //@synthesize initialQueuedItemsByClipID=_initialQueuedItemsByClipID - In the implementation block
@property (nonatomic,retain) HFUniqueArrayDiff * queueDiff;                            //@synthesize queueDiff=_queueDiff - In the implementation block
@property (nonatomic,retain) NSArray * updatedClipQueue;                               //@synthesize updatedClipQueue=_updatedClipQueue - In the implementation block
@property (assign,nonatomic) BOOL hasQueueChanges;                                     //@synthesize hasQueueChanges=_hasQueueChanges - In the implementation block
@property (assign,nonatomic) BOOL queueChangesRequireRebuild;                          //@synthesize queueChangesRequireRebuild=_queueChangesRequireRebuild - In the implementation block
@property (nonatomic,readonly) NSArray * clips;                                        //@synthesize clips=_clips - In the implementation block
@property (nonatomic,readonly) HFCameraClipPosition * targetPosition;                  //@synthesize targetPosition=_targetPosition - In the implementation block
@property (nonatomic,readonly) NSArray * initialQueuedItems;                           //@synthesize initialQueuedItems=_initialQueuedItems - In the implementation block
@property (nonatomic,readonly) unsigned long long queueLimit;                          //@synthesize queueLimit=_queueLimit - In the implementation block
-(HFCameraClipPosition *)targetPosition;
-(HMCameraClipManager *)clipManager;
-(void)_computeQueueDiff;
-(NSArray *)initialQueuedItems;
-(BOOL)hasQueueChanges;
-(HFUniqueArrayDiff *)queueDiff;
-(NSArray *)updatedClipQueue;
-(NSDictionary *)initialQueuedItemsByClipID;
-(id)_buildNewClipQueueForPosition:(id)arg1 ;
-(void)setUpdatedClipQueue:(NSArray *)arg1 ;
-(void)setQueueChangesRequireRebuild:(BOOL)arg1 ;
-(BOOL)queueChangesRequireRebuild;
-(void)setQueueDiff:(HFUniqueArrayDiff *)arg1 ;
-(void)setHasQueueChanges:(BOOL)arg1 ;
-(NSArray *)clips;
-(unsigned long long)queueLimit;
-(id)initWithClipManager:(id)arg1 clips:(id)arg2 targetPosition:(id)arg3 queuedItems:(id)arg4 queueLimit:(unsigned long long)arg5 ;
-(void)performUpdatesOnQueue:(id)arg1 ;
@end

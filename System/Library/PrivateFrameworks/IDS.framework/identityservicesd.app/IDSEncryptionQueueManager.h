/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSEncryptionQueue;

@interface IDSEncryptionQueueManager : NSObject {

	IDSEncryptionQueue* _syncQueue;
	IDSEncryptionQueue* _defaultQueue;
	IDSEncryptionQueue* _urgentQueue;

}

@property (nonatomic,retain) IDSEncryptionQueue * syncQueue;                 //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) IDSEncryptionQueue * defaultQueue;              //@synthesize defaultQueue=_defaultQueue - In the implementation block
@property (nonatomic,retain) IDSEncryptionQueue * urgentQueue;               //@synthesize urgentQueue=_urgentQueue - In the implementation block
-(id)init;
-(IDSEncryptionQueue *)defaultQueue;
-(IDSEncryptionQueue *)syncQueue;
-(void)setDefaultQueue:(IDSEncryptionQueue *)arg1 ;
-(void)setSyncQueue:(IDSEncryptionQueue *)arg1 ;
-(id)_queueForPriority:(long long)arg1 ;
-(id)asyncQueueForPriority:(long long)arg1 ;
-(id)syncQueueForPriority:(long long)arg1 ;
-(IDSEncryptionQueue *)urgentQueue;
-(void)setUrgentQueue:(IDSEncryptionQueue *)arg1 ;
@end

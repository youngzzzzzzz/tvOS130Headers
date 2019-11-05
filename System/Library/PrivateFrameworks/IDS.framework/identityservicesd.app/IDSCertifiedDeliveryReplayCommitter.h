/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IDSCertifiedDeliveryReplayCommitter : NSObject {

	NSMutableDictionary* _backingCache;

}

@property (nonatomic,retain) NSMutableDictionary * backingCache;              //@synthesize backingCache=_backingCache - In the implementation block
-(id)init;
-(id)decryptedDataForKey:(id)arg1 ;
-(void)holdCommitBlock:(/*^block*/id)arg1 andDecryptedData:(id)arg2 forKey:(id)arg3 ;
-(void)commitStateForKey:(id)arg1 ;
-(NSMutableDictionary *)backingCache;
-(void)setBackingCache:(NSMutableDictionary *)arg1 ;
@end

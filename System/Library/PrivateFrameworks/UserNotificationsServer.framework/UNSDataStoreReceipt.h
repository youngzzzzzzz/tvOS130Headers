/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface UNSDataStoreReceipt : NSObject {

	NSArray* _addedObjects;
	NSArray* _replacedObjects;
	NSArray* _replacementObjects;
	NSArray* _removedObjects;

}

@property (nonatomic,readonly) NSArray * addedObjects;                    //@synthesize addedObjects=_addedObjects - In the implementation block
@property (nonatomic,readonly) NSArray * replacedObjects;                 //@synthesize replacedObjects=_replacedObjects - In the implementation block
@property (nonatomic,readonly) NSArray * replacementObjects;              //@synthesize replacementObjects=_replacementObjects - In the implementation block
@property (nonatomic,readonly) NSArray * removedObjects;                  //@synthesize removedObjects=_removedObjects - In the implementation block
+(id)receiptWithAddedObjects:(id)arg1 replacedObjects:(id)arg2 replacementObjects:(id)arg3 removedObjects:(id)arg4 ;
-(BOOL)hasChanges;
-(NSArray *)removedObjects;
-(NSArray *)addedObjects;
-(NSArray *)replacedObjects;
-(NSArray *)replacementObjects;
-(id)initWithAddedObjects:(id)arg1 replacedObjects:(id)arg2 replacementObjects:(id)arg3 removedObjects:(id)arg4 ;
@end

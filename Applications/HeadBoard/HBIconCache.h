/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:09 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoard/PBSAppInfoControllerObserver.h>
#import <HeadBoard/PBSMigrationHandling.h>

@protocol OS_dispatch_queue;
@class NSObject, HBIconCacheDebounceTimer, NSMutableSet, NSString;

@interface HBIconCache : NSObject <PBSAppInfoControllerObserver, PBSMigrationHandling> {

	NSObject*<OS_dispatch_queue> _writeSerialQueue;
	NSObject*<OS_dispatch_queue> _preheatQueue;
	HBIconCacheDebounceTimer* _preheatDebounceTimer;
	NSMutableSet* _pendingItems;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> writeSerialQueue;              //@synthesize writeSerialQueue=_writeSerialQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> preheatQueue;                  //@synthesize preheatQueue=_preheatQueue - In the implementation block
@property (nonatomic,retain) HBIconCacheDebounceTimer * preheatDebounceTimer;              //@synthesize preheatDebounceTimer=_preheatDebounceTimer - In the implementation block
@property (nonatomic,readonly) NSMutableSet * pendingItems;                                //@synthesize pendingItems=_pendingItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(unsigned long long)migrateWithContext:(id)arg1 error:(id*)arg2 ;
+(id)_iconFileURLForApplication:(id)arg1 ;
+(id)_iconFileURLForFolder:(id)arg1 ;
+(id)_appIconCacheDirectoryURL;
+(id)_iconContainerURLForApplication:(id)arg1 ;
+(id)_folderIconCacheDirectoryURL;
-(id)_init;
-(NSMutableSet *)pendingItems;
-(NSObject*<OS_dispatch_queue>)preheatQueue;
-(void)appInfoController:(id)arg1 didUpdate:(id)arg2 ;
-(void)_prepareAppIconCache;
-(void)setPreheatDebounceTimer:(HBIconCacheDebounceTimer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)writeSerialQueue;
-(HBIconCacheDebounceTimer *)preheatDebounceTimer;
-(void)_writeIconFileForApplication:(id)arg1 toURL:(id)arg2 ;
-(void)_writeIconFileForFolder:(id)arg1 toURL:(id)arg2 ;
-(id)iconFileForApplicationItem:(id)arg1 ;
-(id)flattenedIconForApplication:(id)arg1 ;
-(id)iconFileForFolderItem:(id)arg1 ;
-(void)prepareCacheForFolderItems:(id)arg1 ;
-(void)requestCacheForFolderItem:(id)arg1 completion:(/*^block*/id)arg2 ;
@end


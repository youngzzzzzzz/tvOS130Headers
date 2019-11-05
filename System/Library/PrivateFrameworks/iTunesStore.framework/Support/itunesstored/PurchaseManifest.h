/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString, NSArray;

@interface PurchaseManifest : NSObject {

	NSMutableDictionary* _dictionary;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _path;

}

@property (readonly) NSString * path; 
@property (readonly) NSArray * purchaseManifestItems; 
+(void)jetsam;
+(id)_sharedManifestWithManifestType:(long long)arg1 ;
+(void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(void)getPathsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)rebuildWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)removeItemWithMessage:(id)arg1 connection:(id)arg2 ;
+(id)sharedManifestForDownloadKind:(id)arg1 ;
+(void)observeXPCServer:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)path;
-(id)_dictionary;
-(id)initWithPurchaseDirectory:(id)arg1 ;
-(void)jetsam;
-(BOOL)_writeToFile;
-(NSArray *)purchaseManifestItems;
-(void)rebuildManifest;
-(id)removeItemsWithAssetPaths:(id)arg1 error:(id*)arg2 ;
-(void)addCompletedItem:(id)arg1 ;
@end

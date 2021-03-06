/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:42 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/installd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSDictionary;

@interface MIUninstalledAppList : NSObject {

	NSObject*<OS_dispatch_queue> _listQueue;
	NSMutableDictionary* _uninstalledList;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> listQueue;              //@synthesize listQueue=_listQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * uninstalledList;                 //@synthesize uninstalledList=_uninstalledList - In the implementation block
@property (nonatomic,readonly) NSDictionary * uninstalledDictionary; 
+(id)sharedList;
-(id)init;
-(void)addIdentifier:(id)arg1 ;
-(void)removeIdentifiers:(id)arg1 ;
-(NSDictionary *)uninstalledDictionary;
-(void)preflightUninstalledMap;
-(NSMutableDictionary *)uninstalledList;
-(id)_mapPath;
-(void)setUninstalledList:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)listQueue;
-(id)_onQueue_uninstalledList;
-(void)_onQueue_setUninstalledList:(id)arg1 ;
@end


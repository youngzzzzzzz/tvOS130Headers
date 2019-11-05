/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSDictionary, NSXPCStoreServerPerConnectionCache;

@interface NSXPCStoreConnectionInfo : NSObject {

	NSDictionary* _entitlements;
	NSXPCStoreServerPerConnectionCache* _cache;
	SCD_Struct_NS5 _token;
	id _userInfo;
	int _lock;

}
-(id)description;
-(void)dealloc;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(SCD_Struct_NS5)auditToken;
-(id)cache;
-(id)entitlements;
-(id)persistentStoreCoordinator;
-(id)initForToken:(SCD_Struct_NS5)arg1 entitlementNames:(id)arg2 cache:(id)arg3 ;
@end

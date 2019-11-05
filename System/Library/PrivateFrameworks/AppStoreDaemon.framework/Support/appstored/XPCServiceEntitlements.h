/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <appstored/appstored-Structs.h>
@class NSArray;

@interface XPCServiceEntitlements : NSObject {

	NSArray* _entitlements;
	SecTaskRef _task;
	int _pid;

}
+(id)_copyEntitlementsForTask:(SecTaskRef)arg1 withPID:(int)arg2 ;
+(BOOL)_hasLegacyEntitlement:(id)arg1 forTask:(SecTaskRef)arg2 withPID:(int)arg3 ;
-(void)dealloc;
-(BOOL)hasEntitlement:(ASDServiceEntitlement)arg1 ;
-(id)initWithAuditToken:(SCD_Struct_XP21)arg1 forPID:(int)arg2 ;
@end

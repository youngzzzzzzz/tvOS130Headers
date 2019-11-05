/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/XPCServices/AXMediaUtilitiesService.xpc/AXMediaUtilitiesService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilitiesService/AXMServiceXPCServerDelegate.h>
#import <AXMediaUtilitiesService/AXMIdleManagerDelegate.h>

@class AXMServiceXPCServer, NSMutableDictionary, AXMIdleManager, NSString;

@interface AXMServiceInstance : NSObject <AXMServiceXPCServerDelegate, AXMIdleManagerDelegate> {

	AXMServiceXPCServer* _xpcServer;
	NSMutableDictionary* _engineCache;
	AXMIdleManager* _idleManager;

}

@property (nonatomic,retain) AXMServiceXPCServer * xpcServer;                //@synthesize xpcServer=_xpcServer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * engineCache;              //@synthesize engineCache=_engineCache - In the implementation block
@property (nonatomic,retain) AXMIdleManager * idleManager;                   //@synthesize idleManager=_idleManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)run;
-(void)prewarmVisionEngineService;
-(void)visionEngine:(id)arg1 evaluateSource:(id)arg2 context:(id)arg3 options:(long long)arg4 result:(/*^block*/id)arg5 ;
-(AXMServiceXPCServer *)xpcServer;
-(void)setXpcServer:(AXMServiceXPCServer *)arg1 ;
-(void)setEngineCache:(NSMutableDictionary *)arg1 ;
-(void)setIdleManager:(AXMIdleManager *)arg1 ;
-(AXMIdleManager *)idleManager;
-(NSMutableDictionary *)engineCache;
-(void)_removeEngineFromCache:(id)arg1 ;
-(id)_cachedEngineForEngine:(id)arg1 ;
-(void)willBecomeIdle:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

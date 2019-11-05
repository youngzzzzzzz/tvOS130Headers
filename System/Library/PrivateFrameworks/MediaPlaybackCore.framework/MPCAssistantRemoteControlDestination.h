/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/NSMutableCopying.h>

@class NSString, NSArray;

@interface MPCAssistantRemoteControlDestination : NSObject <NSMutableCopying> {

	NSString* _appBundleID;
	NSString* _playerID;
	void* _origin;
	NSArray* _outputDeviceUIDs;
	NSArray* _hashedOutputDeviceUIDs;
	NSArray* _outputGroups;
	NSString* _outputGroupID;
	BOOL _singleGroup;

}

@property (nonatomic,readonly) NSString * appBundleID;                        //@synthesize appBundleID=_appBundleID - In the implementation block
@property (nonatomic,readonly) NSString * playerID;                           //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,readonly) void* origin;                                  //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) NSArray * outputDeviceUIDs;                    //@synthesize outputDeviceUIDs=_outputDeviceUIDs - In the implementation block
@property (nonatomic,readonly) NSArray * hashedOutputDeviceUIDs;              //@synthesize hashedOutputDeviceUIDs=_hashedOutputDeviceUIDs - In the implementation block
@property (nonatomic,readonly) NSArray * outputGroups;                        //@synthesize outputGroups=_outputGroups - In the implementation block
@property (nonatomic,readonly) NSString * outputGroupID;                      //@synthesize outputGroupID=_outputGroupID - In the implementation block
@property (nonatomic,readonly) BOOL singleGroup;                              //@synthesize singleGroup=_singleGroup - In the implementation block
+(id)systemMediaApplicationDestination;
+(id)watchRadioApplicationDestination;
+(id)podcastsApplicationDestination;
+(id)iBooksApplicationDestination;
+(id)nowPlayingApplicationDestination;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSString *)appBundleID;
-(void*)origin;
-(NSArray *)outputDeviceUIDs;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(NSString *)playerID;
-(id)initWithAppBundleID:(id)arg1 ;
-(void*)createPlayerPath;
-(BOOL)singleGroup;
-(NSArray *)outputGroups;
-(id)initWithAppBundleID:(id)arg1 playerID:(id)arg2 origin:(void*)arg3 ;
-(void)resolveWithHashedRouteIdentifiers:(id)arg1 audioRoutingInfo:(SCD_Struct_MP5)arg2 completion:(/*^block*/id)arg3 ;
-(void)resolveWithQueue:(id)arg1 hashedRouteIdentifiers:(id)arg2 localPlaybackPermitted:(BOOL)arg3 audioRoutingInfo:(SCD_Struct_MP5)arg4 completion:(/*^block*/id)arg5 ;
-(void)resolveWithRouteIdentifiers:(id)arg1 audioRoutingInfo:(SCD_Struct_MP5)arg2 completion:(/*^block*/id)arg3 ;
-(void)resolveWithQueue:(id)arg1 routeIdentifiers:(id)arg2 localPlaybackPermitted:(BOOL)arg3 audioRoutingInfo:(SCD_Struct_MP5)arg4 completion:(/*^block*/id)arg5 ;
-(void)resolveWithHashedRouteIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveWithRouteIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveWithQueue:(id)arg1 hashedRouteIdentifiers:(id)arg2 localPlaybackPermitted:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)resolveWithQueue:(id)arg1 routeIdentifiers:(id)arg2 localPlaybackPermitted:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_getCompanionOrigin:(/*^block*/id)arg1 ;
-(NSArray *)hashedOutputDeviceUIDs;
-(NSString *)outputGroupID;
@end

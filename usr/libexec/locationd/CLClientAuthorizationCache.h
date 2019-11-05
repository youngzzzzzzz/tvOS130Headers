/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:47 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LocationSupport/CLIntersiloService.h>
#import <locationd/CLClientAuthorizationCacheProtocol.h>

@class NSDictionary, NSMutableArray, NSString;

@interface CLClientAuthorizationCache : CLIntersiloService <CLClientAuthorizationCacheProtocol> {

	NSDictionary* _clients;
	NSMutableArray* _cachePopulationReplyBlocks;

}

@property (nonatomic,retain) NSDictionary * clients;                                   //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachePopulationReplyBlocks;              //@synthesize cachePopulationReplyBlocks=_cachePopulationReplyBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(void)setClients:(NSDictionary *)arg1 ;
-(NSDictionary *)clients;
-(void)beginService;
-(void)endService;
-(void)setClientsAuthorizationMap:(id)arg1 ;
-(int)syncgetAuthorizationOfClient:(id)arg1 forServiceMask:(unsigned long long)arg2 ;
-(id)syncgetAuthorizationContextOfClient:(id)arg1 ;
-(void)notifyWhenCacheIsPopulatedWithReply:(/*^block*/id)arg1 ;
-(void)getAuthorizationContextOfClient:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)getAuthorizationOfClientForClientName:(id)arg1 forServiceMask:(unsigned long long)arg2 withReply:(/*^block*/id)arg3 ;
-(NSMutableArray *)cachePopulationReplyBlocks;
-(void)setCachePopulationReplyBlocks:(NSMutableArray *)arg1 ;
@end

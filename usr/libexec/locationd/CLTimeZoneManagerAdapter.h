/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:45 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <LocationSupport/CLIntersiloService.h>
#import <locationd/CLTimeZoneManagerProtocol.h>

@class NSString;

@interface CLTimeZoneManagerAdapter : CLIntersiloService <CLTimeZoneManagerProtocol> {

	CLTimeZoneManager* _manager;

}

@property (assign,nonatomic) CLTimeZoneManager* manager;              //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(BOOL)isSupported;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(CLTimeZoneManager*)manager;
-(void)setManager:(CLTimeZoneManager*)arg1 ;
-(void)beginService;
-(void)endService;
@end

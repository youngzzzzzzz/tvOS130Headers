/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:46 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LocationSupport/CLIntersiloService.h>
#import <locationd/CLWeatherServiceProtocol.h>

@class NSMutableSet, NSString;

@interface CLWeatherService : CLIntersiloService <CLWeatherServiceProtocol> {

	NSMutableSet* _clients;

}

@property (nonatomic,retain) NSMutableSet * clients;                //@synthesize clients=_clients - In the implementation block
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
-(void)setClients:(NSMutableSet *)arg1 ;
-(NSMutableSet *)clients;
-(void)beginService;
-(void)endService;
-(void)weatherForecastUpdated:(id)arg1 airQualityConditions:(id)arg2 hourlyForecasts:(id)arg3 dailyForecasts:(id)arg4 location:(id)arg5 ;
-(void)registerForWeatherUpdates:(R)arg1 :(id)arg2 ;
-(void)unregisterForWeatherUpdates:(R)arg1 :(id)arg2 ;
-(void)localLocationForecastUpdatedForConditions:(id)arg1 ;
@end


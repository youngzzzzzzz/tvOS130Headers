/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:46 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLWeatherServiceProtocol <CLIntersiloServiceProtocol>
@required
-(void)weatherForecastUpdated:(id)arg1 airQualityConditions:(id)arg2 hourlyForecasts:(id)arg3 dailyForecasts:(id)arg4 location:(id)arg5;
-(void)registerForWeatherUpdates:(byref id)arg1;
-(void)unregisterForWeatherUpdates:(byref id)arg1;

@end


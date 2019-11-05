/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:46 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <locationd/CLDuetMonitorClientProtocol.h>
#import <locationd/CLRoutineMonitorClientProtocol.h>
#import <locationd/CLATVAirplayMonitorClientProtocol.h>

@class NSString;

@interface CLMicroLocationIntersiloDelegate : NSObject <CLDuetMonitorClientProtocol, CLRoutineMonitorClientProtocol, CLATVAirplayMonitorClientProtocol> {

	CLMicroLocationNotifier* _microLocationNotifier;
	BOOL _valid;

}

@property (assign,nonatomic) BOOL valid;                            //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(void)duetMonitorDeviceFirstWakeOfDay:(id)arg1 ;
-(void)duetMonitor:(id)arg1 foregroundAppDidLaunch:(id)arg2 ;
-(void)duetMonitor:(id)arg1 homekitSceneDidChange:(id)arg2 ;
-(void)duetMonitor:(id)arg1 homekitAccessoryDidChange:(id)arg2 ;
-(void)duetMonitor:(id)arg1 nowPlayingDidChange:(id)arg2 ;
-(void)onVisit:(id)arg1 ;
-(void)onLowConfidenceVisit:(id)arg1 ;
-(void)clATVAirplayMonitorService:(id)arg1 didFindDevices:(id)arg2 ;
-(id)initWithMicroLocationNotifier:(CLMicroLocationNotifier*)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:47 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WPZoneTrackerDelegate <NSObject>
@optional
-(void)zoneTracker:(id)arg1 enteredZoneInfo:(id)arg2;

@required
-(void)zoneTracker:(id)arg1 enteredZone:(id)arg2;
-(void)zoneTracker:(id)arg1 exitedZone:(id)arg2;
-(void)zoneTracker:(id)arg1 didFailToRegisterZones:(id)arg2 withError:(id)arg3;
-(void)zoneTrackerDidUpdateState:(id)arg1;

@end

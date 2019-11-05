/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:44 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <locationd/GEONavigationListenerDelegate.h>

@protocol CLIntersiloUniverse;
@class GEONavigationListener, CLDispatchSilo, NSString;

@interface CLRouteListener : NSObject <GEONavigationListenerDelegate> {

	BOOL _enabled;
	GEONavigationListener* _geoNavListener;
	double _lastEtaInSeconds;
	double _lastEtaAbsTime;
	SCD_Struct_CL46 _lastCoordinate;
	INotifier* _parentNotifier;
	unique_ptr<CLDarwinNotifier_Type::Client, std::__1::default_delete<CLDarwinNotifier_Type::Client> >* _darwinNotifierClient;
	id<CLIntersiloUniverse> _universe;
	CLDispatchSilo* _silo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)disable;
-(void)enable;
-(void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2 ;
-(void)navigationListener:(id)arg1 didUpdateTransitSummary:(id)arg2 ;
-(void)navigationListener:(id)arg1 didUpdateGuidanceState:(id)arg2 ;
-(void)logRoute:(id)arg1 ;
-(void)logTransitRoute:(id)arg1 ;
-(void)logState:(id)arg1 ;
-(id)initInUniverse:(id)arg1 withDelegate:(INotifier*)arg2 ;
-(void)clearLocationData;
-(void)notifyFromLastInfo;
-(void)onDarwinNotification:(int)arg1 data:(NotificationData)arg2 ;
@end

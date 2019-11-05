/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction, SDAirDropControllerDelegate;
@class SDStatusMonitor, NSMutableDictionary, SFUserAlert, NSObject;

@interface SDAirDropController : NSObject {

	BOOL _started;
	SDStatusMonitor* _monitor;
	NSMutableDictionary* _properties;
	SFUserAlert* _phUserNotification;
	SFUserAlert* _radiosUserNotification;
	NSObject*<OS_os_transaction> _transaction;
	id<SDAirDropControllerDelegate> _delegate;

}

@property (__weak) id<SDAirDropControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<SDAirDropControllerDelegate>)delegate;
-(void)setDelegate:(id<SDAirDropControllerDelegate>)arg1 ;
-(void)setProperty:(void*)arg1 forKey:(id)arg2 ;
-(void)start;
-(void)stop;
-(void)addObservers;
-(void)removeObservers;
-(void)somethingChanged:(id)arg1 ;
-(void)presentEnableRadiosAlertForBluetooth:(BOOL)arg1 andWLAN:(BOOL)arg2 ;
-(void)configureSettingsForAirDrop;
-(void)setStatusAndNotify;
-(void)presentDisablePersonalHotspotAlert;
@end

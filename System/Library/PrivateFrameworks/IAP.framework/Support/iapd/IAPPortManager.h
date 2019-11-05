/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iapd/iapd-Structs.h>
@class NSNumber;

@interface IAPPortManager : NSObject {

	unsigned _service;
	IONotificationPortRef _notificationPortRef;
	unsigned _notification;
	NSNumber* _portNumber;
	int _accessoryPowerState;
	char _supportsUltraHighPowerMode;
	char _supportsPowerModeOnAcrossSleep;
	unsigned short _reserveCurrentForAccInMa;
	BOOL _sendReserveCurrentNotification;

}

@property (nonatomic,readonly) unsigned service;                                      //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSNumber * portNumber;                                 //@synthesize portNumber=_portNumber - In the implementation block
@property (nonatomic,readonly) BOOL supportsUltraHighPowerMode; 
@property (nonatomic,readonly) BOOL supportsPowerModeOnAcrossSleep; 
@property (assign,nonatomic) int accessoryPowerState;                                 //@synthesize accessoryPowerState=_accessoryPowerState - In the implementation block
@property (assign,nonatomic) BOOL accessoryPowerModeOnDuringSleep; 
@property (assign,nonatomic) unsigned short availableCurrentFromAccInMa; 
@property (assign,nonatomic) unsigned short reserveCurrentForAccInMa; 
@property (assign,nonatomic) unsigned short maxInputCurrentFromAccInMa; 
@property (assign,nonatomic) BOOL internalBatteryChargingState; 
@property (assign,nonatomic) BOOL sendReserveCurrentNotification;                     //@synthesize sendReserveCurrentNotification=_sendReserveCurrentNotification - In the implementation block
-(void)dealloc;
-(unsigned)service;
-(BOOL)isLowPowerModeSupported;
-(NSNumber *)portNumber;
-(id)initWithService:(unsigned)arg1 andNotificationPort:(IONotificationPortRef)arg2 ;
-(BOOL)isDeviceInLowPowerMode;
-(BOOL)supportsUltraHighPowerMode;
-(BOOL)supportsPowerModeOnAcrossSleep;
-(void)setAccessoryPowerState:(int)arg1 ;
-(int)accessoryPowerState;
-(void)setAccessoryPowerModeOnDuringSleep:(BOOL)arg1 ;
-(BOOL)accessoryPowerModeOnDuringSleep;
-(unsigned)ultraHighPowerModeCurrentLimit;
-(void)setAvailableCurrentFromAccInMa:(unsigned short)arg1 ;
-(unsigned short)availableCurrentFromAccInMa;
-(void)restoreAvailableCurrentFromAcc;
-(void)setReserveCurrentForAccInMa:(unsigned short)arg1 ;
-(unsigned short)reserveCurrentForAccInMa;
-(void)setInternalBatteryChargingState:(BOOL)arg1 ;
-(BOOL)internalBatteryChargingState;
-(void)setMaxInputCurrentFromAccInMa:(unsigned short)arg1 ;
-(unsigned short)maxInputCurrentFromAccInMa;
-(BOOL)sendReserveCurrentNotification;
-(void)setSendReserveCurrentNotification:(BOOL)arg1 ;
@end

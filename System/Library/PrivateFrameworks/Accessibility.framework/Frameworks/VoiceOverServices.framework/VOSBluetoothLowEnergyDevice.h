/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceOverServices/VOSBluetoothConnectableDevice.h>

@class CBPeripheral, CBCentralManager, NSString;

@interface VOSBluetoothLowEnergyDevice : NSObject <VOSBluetoothConnectableDevice> {

	CBPeripheral* _peripheral;
	CBCentralManager* _centralManager;

}

@property (nonatomic,readonly) CBPeripheral * peripheral;                      //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,readonly) CBCentralManager * centralManager;              //@synthesize centralManager=_centralManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)name;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(long long)compare:(id)arg1 ;
-(id)identifier;
-(void)disconnect;
-(void)connect;
-(BOOL)connected;
-(CBPeripheral *)peripheral;
-(BOOL)paired;
-(void)unpair;
-(CBCentralManager *)centralManager;
-(id)initWithPeripheral:(id)arg1 manager:(id)arg2 ;
@end


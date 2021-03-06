/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFNetworkListRecord <NSObject>
@required
-(unsigned long long)uniqueIdentifier;
-(BOOL)isSecure;
-(id)title;
-(id)subtitle;
-(long long)rssi;
-(id)ssid;
-(BOOL)isKnown;
-(BOOL)isInstantHotspot;
-(BOOL)canBeDisplayedAsCurrent;
-(BOOL)isAdhoc;
-(BOOL)isUnconfiguredAccessory;
-(BOOL)isPopular;
-(BOOL)iOSHotspot;
-(id)hotspotBatteryLife;
-(id)hotspotCellularProtocol;
-(id)hotspotSignalStrength;
-(float)scaledRSSI;
-(unsigned long long)signalBars;
-(BOOL)isEnterprise;
-(BOOL)prominentDisplay;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Setup/Setup-Structs.h>
@interface BuddyWifiAutoJoiner : NSObject {

	WiFiManagerClientRef _wifiManagerRef;

}
+(id)_sharedInstance;
+(void)beginAutojoiningWiFiNetworks;
+(void)stopAutojoiningWiFiNetworks;
-(void)dealloc;
-(void)beginAutojoiningWiFiNetworks;
-(void)stopAutojoiningWiFiNetworks;
-(WiFiNetworkRef)createNetworkWithSSID:(id)arg1 ;
-(CFArrayRef)_copyAutoJoinableWiFiNetworks;
@end


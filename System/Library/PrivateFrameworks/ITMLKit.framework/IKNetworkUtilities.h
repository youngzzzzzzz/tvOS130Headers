/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/RadiosPreferencesDelegate.h>

@class RadiosPreferences, NSString;

@interface IKNetworkUtilities : NSObject <RadiosPreferencesDelegate> {

	id _isNetworkTypeChangedToken;
	id _networkReachabilityChangedToken;
	RadiosPreferences* _radioPrefs;

}

@property (getter=isAirplaneModeEnabled,nonatomic,readonly) BOOL airplaneModeEnabled; 
@property (getter=isNetworkReachable,nonatomic,readonly) BOOL networkReachable; 
@property (nonatomic,readonly) NSString * networkType; 
@property (nonatomic,readonly) double lastNetworkChangedTime; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isNetworkReachable;
-(void)airplaneModeChanged;
-(BOOL)isAirplaneModeEnabled;
-(NSString *)networkType;
-(void)_notifyObservers;
-(double)lastNetworkChangedTime;
@end


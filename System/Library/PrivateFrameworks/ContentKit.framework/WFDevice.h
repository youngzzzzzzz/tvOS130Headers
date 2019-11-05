/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContentKit/ContentKit-Structs.h>
@class NSArray, NSString;

@interface WFDevice : NSObject {

	NSArray* _capabilities;

}

@property (nonatomic,readonly) CGRect screenBounds; 
@property (nonatomic,readonly) double screenScale; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * localizedModel; 
@property (nonatomic,readonly) NSString * systemName; 
@property (nonatomic,readonly) long long idiom; 
@property (nonatomic,readonly) long long platform; 
@property (nonatomic,readonly) NSArray * capabilities;                           //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) NSString * localizedWiFiDisplayName; 
+(id)currentDevice;
-(NSString *)name;
-(NSString *)systemVersion;
-(NSString *)model;
-(NSArray *)capabilities;
-(long long)platform;
-(long long)idiom;
-(double)screenScale;
-(NSString *)localizedModel;
-(NSString *)systemName;
-(BOOL)hasCapability:(id)arg1 ;
-(id)_deviceInfoForKey:(CFStringRef)arg1 ;
-(CGRect)screenBounds;
-(NSString *)localizedWiFiDisplayName;
@end

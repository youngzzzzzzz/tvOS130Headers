/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl.h>

@class NSArray, NSString;

@interface AVFigRouteDescriptorOutputDeviceDiscoverySessionAvailableOutputDevicesImpl : NSObject <AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl> {

	NSArray* _routeDescriptors;
	OpaqueFigRouteDiscovererRef _routeDiscoverer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * allDevices; 
-(id)init;
-(void)dealloc;
-(NSArray *)allDevices;
-(id)initWithRouteDescriptors:(id)arg1 routeDiscoverer:(OpaqueFigRouteDiscovererRef)arg2 ;
@end

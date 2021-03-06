/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebGeolocationPositionInternal;

@interface WebGeolocationPosition : NSObject {

	WebGeolocationPositionInternal* _internal;

}
-(void)dealloc;
-(id)initWithTimestamp:(double)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4 ;
-(id)initWithGeolocationPosition:(GeolocationPosition*)arg1 ;
@end


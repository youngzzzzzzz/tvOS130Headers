/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOServiceRequester.h>

@interface GEOSpatialLookupRequester : GEOServiceRequester
+(id)sharedInstance;
-(void)cancelRequest:(id)arg1 ;
-(id)_validateResponse:(id)arg1 ;
-(void)startWithRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

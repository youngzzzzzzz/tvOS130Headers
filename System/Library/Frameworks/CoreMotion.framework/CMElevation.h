/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMAltimeterInternal;

@interface CMElevation : NSObject {

	CMAltimeterInternal* _internal;

}

@property (nonatomic,readonly) CMAltimeterInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isElevationAvailable;
-(id)init;
-(void)dealloc;
-(CMAltimeterInternal *)_internal;
-(void)startElevationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopElevationUpdates;
@end


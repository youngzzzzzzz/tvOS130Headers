/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:47 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLIntersiloUniverse, OS_dispatch_queue;
#import <locationd/locationd-Structs.h>
@class NSMutableDictionary, NSObject, NSMutableArray, NSDate;

@interface CLFallLoggerManager : NSObject {

	BOOL fLoggingEnabled;
	NSMutableDictionary* fLoggers;
	id<CLIntersiloUniverse> fUniverse;
	NSObject*<OS_dispatch_queue> fQueue;
	NSMutableArray* fEventTimes;
	NSDate* fLastEvent;
	CLGizmoOrientation fOrientation;

}

@property (assign,setter=setLoggingEnabled:,getter=isLoggingEnabled,nonatomic) BOOL loggingEnabled; 
@property (assign,nonatomic) CLGizmoOrientation orientation; 
+(id)encodeBinaryLog:(const BinaryData*)arg1 ;
+(id)encodePressure:(const Pressure*)arg1 ;
+(id)encodeHeartRate:(const CLCatherineData*)arg1 ;
+(id)loggerDataTypeString:(unsigned char)arg1 ;
+(unsigned char)loggerDataTypeFrom:(unsigned char)arg1 ;
+(id)encodeFilteredPressure:(const FilteredPressure*)arg1 ;
-(void)dealloc;
-(CLGizmoOrientation)orientation;
-(void)setOrientation:(CLGizmoOrientation)arg1 ;
-(BOOL)isLoggingEnabled;
-(void)setLoggingEnabled:(BOOL)arg1 ;
-(id)initInUniverse:(id)arg1 ;
-(void)stopLogging;
-(void)clearAllLogs;
-(id)addLogger:(unsigned char)arg1 ;
-(void)logSensorType:(unsigned char)arg1 data:(id)arg2 startTime:(double)arg3 timestamp:(unsigned long long)arg4 ;
-(void)logImpactEvent:(const ImpactEvent*)arg1 ;
-(void)logImpactEventState:(const ImpactEvent*)arg1 ;
-(void)flushData:(/*^block*/id)arg1 userProfile:(id)arg2 ;
-(void)logImpactSensorData:(const ImpactData*)arg1 ;
-(void)logFalsePositiveSuppressionFeatures:(const FalsePositiveSuppressionFeatures*)arg1 ;
-(void)logPressure:(const Pressure*)arg1 ;
-(void)logHeartRate:(const CLCatherineData*)arg1 ;
-(void)logFilteredPressure:(const FilteredPressure*)arg1 ;
-(void)_addLogger:(id)arg1 type:(unsigned char)arg2 ;
-(void)_forEachLogger:(/*^block*/id)arg1 ;
-(void)_forEachLoggerWithType:(unsigned char)arg1 logData:(id)arg2 ;
-(void)_forEachLoggerWithType:(unsigned char)arg1 logItem:(const BinaryData*)arg2 ;
-(id)addLogger:(unsigned char)arg1 toDirectory:(id)arg2 prefix:(id)arg3 rotation:(long long)arg4 ;
@end


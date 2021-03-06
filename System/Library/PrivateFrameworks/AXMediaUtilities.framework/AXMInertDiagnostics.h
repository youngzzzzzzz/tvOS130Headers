/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMDiagnostics.h>

@interface AXMInertDiagnostics : AXMDiagnostics
+(id)sharedInstance;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)metrics;
-(void)clearMetrics;
-(void)setDiagnosticsEnabled:(BOOL)arg1 ;
-(BOOL)diagnosticsEnabled;
-(id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(/*^block*/id)arg3 ;
-(void)addMetric:(id)arg1 ;
-(id)startMeasurement:(long long)arg1 name:(id)arg2 ;
-(void)appendVisionObservations:(id)arg1 ;
-(id)visionObservations;
@end


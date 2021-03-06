/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AggregateDictionary.framework/Support/addaily
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ADConfig, NSMutableDictionary;

@interface ADReport : NSObject {

	ADConfig* _config;
	NSMutableDictionary* _scalarsOutput;
	NSMutableDictionary* _distributionsOutput;
	NSMutableDictionary* _histogramsOutput;
	NSMutableDictionary* _metadataOutput;

}
-(id)init;
-(long long)addScalar:(long long)arg1 forKey:(id)arg2 withOptions:(id)arg3 ;
-(void)computeAndAddDistribution:(id)arg1 forKey:(id)arg2 withOptions:(id)arg3 ;
-(void)serializeWithDate:(int)arg1 andAppInfo:(id)arg2 ;
-(void)addInstalledAppInfo;
-(void)addMetadataKeys;
-(void)reportDatabaseSize;
-(void)reportCPUUptime;
-(void)reportVMStats;
-(unsigned)determineHistBucketForValue:(double)arg1 withIntervals:(id)arg2 ;
-(id)histogramDictForIntervals:(id)arg1 withHistCounts:(unsigned long long*)arg2 ;
-(void)addScalarForKey:(id)arg1 byExecutingBlock:(/*^block*/id)arg2 ;
-(void)writeLogForYesterday:(int)arg1 withAppInfo:(id)arg2 ;
@end


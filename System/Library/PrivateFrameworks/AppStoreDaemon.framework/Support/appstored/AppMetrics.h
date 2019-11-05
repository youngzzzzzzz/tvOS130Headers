/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSMetrics;

@interface AppMetrics : NSObject {

	AMSMetrics* _metrics;

}
+(id)sharedInstance;
+(double)_collectionChance;
+(BOOL)shouldCollectAppInstallationMetrics;
-(void)flushMetricsWithReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)insertEventsIntoDatabase:(id)arg1 ;
-(void)insertEventIntoDatabase:(id)arg1 ;
-(id)_amsMetrics;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsExitEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSString * exitType; 
@property (nonatomic,retain) NSString * exitURL; 
-(id)description;
-(id)init;
-(NSString *)exitType;
-(void)setExitType:(NSString *)arg1 ;
-(NSString *)exitURL;
-(void)setExitTypeWithSuspendReason:(long long)arg1 ;
-(void)setExitURL:(NSString *)arg1 ;
@end

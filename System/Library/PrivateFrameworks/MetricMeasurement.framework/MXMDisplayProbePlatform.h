/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MXMDisplayProbePlatform <NSObject>
@property (assign,nonatomic,__weak) id<MXMDisplayProbePlatformDelegate> delegate; 
@required
+(id)_allDescriptors;
-(id<MXMDisplayProbePlatformDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)_start;
-(void)_stop;
-(id)initPrivateWithDescriptor:(id)arg1 queue:(id)arg2;

@end


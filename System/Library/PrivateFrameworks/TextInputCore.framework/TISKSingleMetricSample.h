/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/NSSecureCoding.h>

@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject <NSSecureCoding> {

	NSMutableArray* _samples;

}

@property (nonatomic,retain) NSMutableArray * samples;              //@synthesize samples=_samples - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)makeMetric;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)size;
-(NSMutableArray *)samples;
-(double)variance;
-(double)average;
-(void)merge:(id)arg1 ;
-(void)addSample:(id)arg1 ;
-(void)setSamples:(NSMutableArray *)arg1 ;
-(id)generateDataForSR:(id)arg1 dropSampleSize:(BOOL)arg2 ;
@end

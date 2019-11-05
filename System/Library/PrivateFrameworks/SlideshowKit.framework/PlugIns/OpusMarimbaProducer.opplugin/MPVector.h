/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
@interface MPVector : NSObject {

	double _vector[4];
	long long _length;

}
+(id)vectorFromString:(id)arg1 ;
+(id)vectorWithValues:(id)arg1 ;
+(id)vectorFromCGColor:(CGColorRef)arg1 ;
+(id)vectorFromMCVector:(SCD_Struct_MC24)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)string;
-(long long)count;
-(void)setValues:(id)arg1 ;
-(id)values;
-(CGColorRef)CGColor;
-(double)valueAtIndex:(long long)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(SCD_Struct_MC24)vector;
-(void)setVector:(SCD_Struct_MC24)arg1 ;
-(id)CIColorString;
@end

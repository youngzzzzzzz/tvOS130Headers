/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetectedObjectObservation.h>

@class NSArray;

@interface VNRecognizedObjectObservation : VNDetectedObjectObservation {

	NSArray* _labels;

}

@property (nonatomic,copy,readonly) NSArray * labels;              //@synthesize labels=_labels - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)labels;
-(id)initWithRequestRevision:(unsigned long long)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 boundingBox:(CGRect)arg2 confidence:(float)arg3 labels:(id)arg4 ;
@end

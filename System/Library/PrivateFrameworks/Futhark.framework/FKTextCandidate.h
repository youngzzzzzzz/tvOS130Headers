/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FKTextCandidate : NSObject {

	float _confidence;
	NSString* _text;

}

@property (nonatomic,copy,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
@property (readonly) float confidence;                            //@synthesize confidence=_confidence - In the implementation block
-(float)confidence;
-(NSString *)text;
-(id)initWithText:(id)arg1 confidence:(float)arg2 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PGCurationTrait : NSObject {

	double _minimumScore;

}

@property (assign,nonatomic) double minimumScore;                    //@synthesize minimumScore=_minimumScore - In the implementation block
@property (nonatomic,readonly) BOOL isMatchingRequired; 
@property (nonatomic,readonly) BOOL isActive; 
@property (readonly) NSString * niceDescription; 
-(id)debugDescription;
-(id)init;
-(BOOL)isActive;
-(BOOL)isMatchingRequired;
-(NSString *)niceDescription;
-(double)minimumScore;
-(void)setMinimumScore:(double)arg1 ;
@end


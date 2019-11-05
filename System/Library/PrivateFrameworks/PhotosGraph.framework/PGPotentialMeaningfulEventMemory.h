/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@protocol PGGraphMeaningfulEvent;
@interface PGPotentialMeaningfulEventMemory : PGPotentialMemory {

	id<PGGraphMeaningfulEvent> _meaningfulEvent;
	unsigned long long _meaning;

}

@property (readonly) id<PGGraphMeaningfulEvent> meaningfulEvent;              //@synthesize meaningfulEvent=_meaningfulEvent - In the implementation block
@property (readonly) unsigned long long meaning;                              //@synthesize meaning=_meaning - In the implementation block
-(id<PGGraphMeaningfulEvent>)meaningfulEvent;
-(unsigned long long)meaning;
-(id)initWithCategory:(unsigned long long)arg1 meaningfulEvent:(id)arg2 meaning:(unsigned long long)arg3 controller:(id)arg4 ;
@end

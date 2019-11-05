/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNImageBufferProviding.h>

@class VNRequestPerformer, VNImageBuffer, NSMapTable, VNObservationsCache, VNRequestForensics;

@interface VNRequestPerformingContext : NSObject <VNImageBufferProviding> {

	unsigned _qosClass;
	VNRequestPerformer* _requestPerformer_DO_NOT_DIRECTLY_ACCESS;
	VNImageBuffer* _imageBuffer_DO_NOT_DIRECTLY_ACCESS;
	NSMapTable* _requestToObservationsCacheKeyMap;
	VNObservationsCache* _observationsCache;
	VNRequestForensics* _requestForensics;

}
-(unsigned)qosClass;
-(id)imageBufferAndReturnError:(id*)arg1 ;
-(void)setModelRequestHandler:(id)arg1 ;
-(id)modelRequestHandlerAndReturnError:(id*)arg1 ;
-(void)recordSequencedObservationsForRequest:(id)arg1 ;
-(id)previousSequencedObservationsForRequest:(id)arg1 ;
-(id)initWithRequestPerformer:(id)arg1 imageBuffer:(id)arg2 forensics:(id)arg3 observationsCache:(id)arg4 ;
-(id)initWithRequestPerformer:(id)arg1 imageBuffer:(id)arg2 forensics:(id)arg3 observationsCache:(id)arg4 qosClass:(unsigned)arg5 ;
-(id)_observationsCacheKeyForRequest:(id)arg1 ;
-(id)requestPerformerAndReturnError:(id*)arg1 ;
-(BOOL)performDependentRequests:(id)arg1 onBehalfOfRequest:(id)arg2 error:(id*)arg3 ;
-(id)requestForensics;
-(BOOL)cacheObservationsForRequest:(id)arg1 ;
-(id)cachedObservationsForRequest:(id)arg1 ;
@end

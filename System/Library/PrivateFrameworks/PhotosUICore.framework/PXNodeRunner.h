/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSOperationQueue;

@interface PXNodeRunner : NSObject {

	NSOperationQueue* _operationQueue;

}

@property (assign) long long maxConcurrentRunNodeCount; 
@property (assign) long long qualityOfService; 
-(id)init;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(void)processGraphForRunNode:(id)arg1 ;
-(long long)maxConcurrentRunNodeCount;
-(void)setMaxConcurrentRunNodeCount:(long long)arg1 ;
-(void)_processRunGraph:(NSArray*)arg1 ;
@end

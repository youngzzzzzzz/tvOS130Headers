/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXTileAnimator.h>

@class NSString;

@interface PXBasicTileAnimator : NSObject <PXTileAnimator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareTile:(id)arg1 withGeometry:(PXTileGeometry*)arg2 userData:(id)arg3 ;
-(void)animateTile:(id)arg1 toGeometry:(PXTileGeometry*)arg2 userData:(id)arg3 withOptions:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)suspendAnimationsForTile:(id)arg1 ;
-(void)resumeAnimationsForTile:(id)arg1 ;
@end


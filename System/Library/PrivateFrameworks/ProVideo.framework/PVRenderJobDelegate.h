/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PVVideoCompositingContext;


@protocol PVRenderJobDelegate <NSObject>
@property (readonly) unsigned jobTypeTag; 
@property (readonly) PVVideoCompositingContext * videoCompositingContext; 
@optional
-(int)jobPriority;
-(int)graphBuildThreadPriority;
-(int)renderContextPriority;
-(int)renderThreadPriority;
-(unsigned long long)packedFamilyCode;

@required
+(unsigned)jobTypeTag;
-(PVVideoCompositingContext *)videoCompositingContext;
-(unsigned)jobTypeTag;
-(void)buildGraph:(vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3;
-(void)setupDestinationBuffers:(vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3;
-(void)finishCompletedJob;
-(void)finishCancelledJob;
-(void)renderJobFinished:(HGRef<PVRenderJob>*)arg1;

@end

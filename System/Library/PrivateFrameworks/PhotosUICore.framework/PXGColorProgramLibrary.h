/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableArray;

@interface PXGColorProgramLibrary : NSObject {

	NSMutableArray* _programs;
	os_unfair_lock_s _lock;
	id<MTLDevice> _device;
	CGColorSpaceRef _destinationColorSpace;

}

@property (nonatomic,readonly) id<MTLDevice> device;                               //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) CGColorSpaceRef destinationColorSpace;              //@synthesize destinationColorSpace=_destinationColorSpace - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(id<MTLDevice>)device;
-(CGColorSpaceRef)destinationColorSpace;
-(id)initWithDevice:(id)arg1 destinationColorSpace:(CGColorSpaceRef)arg2 ;
-(id)colorProgramForSourceColorSpace:(CGColorSpaceRef)arg1 flags:(unsigned long long)arg2 ;
@end

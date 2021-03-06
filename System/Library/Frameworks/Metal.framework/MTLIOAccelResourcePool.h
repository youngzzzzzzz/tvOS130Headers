/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
#import <Metal/Metal-Structs.h>
@class MTLIOAccelDevice;

@interface MTLIOAccelResourcePool : NSObject {

	MTLIOAccelResourcePoolPrivate* _priv;
	Class _resourceClass;
	MTLIOAccelDevice*<MTLDevice> _device;
	IOAccelNewResourceArgs* _resourceArgs;
	unsigned _resourceArgsSize;
	unsigned long long age_to_purge;
	unsigned generation;

}

@property (readonly) IOAccelNewResourceArgs* resourceArgs;              //@synthesize resourceArgs=_resourceArgs - In the implementation block
@property (readonly) unsigned resourceArgsSize;                         //@synthesize resourceArgsSize=_resourceArgsSize - In the implementation block
-(void)dealloc;
-(void)purgeWithLock;
-(id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 resourceArgs:(const IOAccelNewResourceArgs*)arg3 resourceArgsSize:(unsigned)arg4 options:(id)arg5 ;
-(void)setResourceArgs:(const IOAccelNewResourceArgs*)arg1 resourceArgsSize:(unsigned)arg2 ;
-(int)availableCount;
-(void)purge;
-(BOOL)updateResourcePurgeability;
-(IOAccelNewResourceArgs*)resourceArgs;
-(unsigned)resourceArgsSize;
@end


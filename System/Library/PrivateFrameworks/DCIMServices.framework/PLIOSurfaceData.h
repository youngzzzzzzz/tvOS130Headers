/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DCIMServices/DCIMServices-Structs.h>
#import <CoreFoundation/NSData.h>

@interface PLIOSurfaceData : NSData {

	IOSurfaceRef _surface;
	const void* _bytes;
	unsigned long long _length;

}
+(id)dataWithIOSurface:(void*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithIOSurface:(void*)arg1 ;
-(id)initWithIOSurface:(void*)arg1 length:(unsigned long long)arg2 ;
@end

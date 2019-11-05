/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPipe.h>

@class NSFileHandle;

@interface NSConcretePipe : NSPipe {

	NSFileHandle* _readHandle;
	NSFileHandle* _writeHandle;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)fileHandleForWriting;
-(id)fileHandleForReading;
-(void)_closeOnDealloc;
@end

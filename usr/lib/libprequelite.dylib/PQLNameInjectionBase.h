/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:16:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/lib/libprequelite.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@class NSData;

@interface PQLNameInjectionBase : NSData {

	unsigned long long _length;
	char* _bytes;

}

@property (nonatomic,readonly) NSData * sql; 
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)sql;
@end


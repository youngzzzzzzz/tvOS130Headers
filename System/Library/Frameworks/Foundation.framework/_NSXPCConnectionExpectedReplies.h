/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSXPCConnectionExpectedReplies : NSObject {

	CFDictionaryRef _replyTable;
	opaque_pthread_mutex_t _lock;
	unsigned long long _sequence;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)sequenceForProgress:(id)arg1 ;
-(void)removeProgressSequence:(unsigned long long)arg1 ;
-(id)progressForSequence:(unsigned long long)arg1 ;
@end


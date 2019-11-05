/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/NSCopying.h>

@interface IDSMPIdentity : NSObject <NSCopying> {

	void* _backingValue;

}

@property (nonatomic,readonly) void* backingValue;              //@synthesize backingValue=_backingValue - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)initWithBackingValue:(void*)arg1 ;
-(void*)backingValue;
@end

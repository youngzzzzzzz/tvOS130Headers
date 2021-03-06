/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BoardServices/BoardServices-Structs.h>
#import <BoardServices/NSCopying.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface _BSServiceOutgoingEndpoint : NSObject <NSCopying> {

	NSObject*<OS_xpc_object> _endpoint;
	NSString* _eDesc;
	unsigned _invalidationGeneration;

}
+(id)_wrapXPCEndpoint:(id)arg1 withDescription:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
@end


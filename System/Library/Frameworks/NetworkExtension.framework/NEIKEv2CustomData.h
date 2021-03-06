/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NSCopying.h>

@class NSData;

@interface NEIKEv2CustomData : NSObject <NSCopying> {

	unsigned long long _customType;
	NSData* _customData;

}

@property (assign) unsigned long long customType;              //@synthesize customType=_customType - In the implementation block
@property (retain) NSData * customData;                        //@synthesize customData=_customData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)customType;
-(NSData *)customData;
-(void)setCustomType:(unsigned long long)arg1 ;
-(void)setCustomData:(NSData *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NSCopying.h>
#import <NanoRegistry/NSSecureCoding.h>

@class NSData;

@interface NRMiniUUIDSet : NSObject <NSCopying, NSSecureCoding> {

	vector<unsigned int, std::__1::allocator<unsigned int> >* _miniUUIDs;
	NSData* _data;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(BOOL)hasUUID:(id)arg1 ;
-(id)initWithUUIDSet:(id)arg1 ;
@end

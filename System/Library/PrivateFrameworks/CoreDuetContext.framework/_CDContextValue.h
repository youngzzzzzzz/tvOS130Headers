/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuetContext/CoreDuetContext-Structs.h>
#import <CoreDuetContext/NSCopying.h>
#import <CoreDuetContext/NSSecureCoding.h>

@class NSMutableDictionary, NSDate;

@interface _CDContextValue : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _metadata;

}

@property (nonatomic,retain) NSMutableDictionary * metadata;                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSObject*<NSCopying>*<NSSecureCoding> value; 
@property (nonatomic,retain) NSDate * lastModifiedDate; 
+(BOOL)supportsSecureCoding;
+(id)supportedContextValueClasses;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<NSCopying>*<NSSecureCoding>)value;
-(void)setValue:(NSObject*<NSCopying>*<NSSecureCoding>)arg1 ;
-(NSMutableDictionary *)metadata;
-(NSDate *)lastModifiedDate;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
@end

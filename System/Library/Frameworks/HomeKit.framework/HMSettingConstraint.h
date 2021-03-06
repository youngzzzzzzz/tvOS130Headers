/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/NSSecureCoding.h>
#import <HomeKit/NSCopying.h>

@protocol NSCopyingNSSecureCoding;
@class NSUUID;

@interface HMSettingConstraint : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	long long _type;
	id<NSCopying><NSSecureCoding> _value;

}

@property (readonly) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (readonly) long long type;                                        //@synthesize type=_type - In the implementation block
@property (copy,readonly) id<NSCopying><NSSecureCoding> value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)supportedValueClasses;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id<NSCopying><NSSecureCoding>)value;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(id)shortDescription;
-(id)descriptionWithPointer:(BOOL)arg1 ;
@end


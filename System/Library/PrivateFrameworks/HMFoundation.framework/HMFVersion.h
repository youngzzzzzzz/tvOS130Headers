/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLocalizable.h>
#import <HMFoundation/NSCopying.h>
#import <HMFoundation/NSSecureCoding.h>

@class NSString;

@interface HMFVersion : HMFObject <HMFLocalizable, NSCopying, NSSecureCoding> {

	unsigned long long _majorVersion;
	unsigned long long _minorVersion;
	unsigned long long _updateVersion;

}

@property (readonly) unsigned long long majorVersion;                   //@synthesize majorVersion=_majorVersion - In the implementation block
@property (readonly) unsigned long long minorVersion;                   //@synthesize minorVersion=_minorVersion - In the implementation block
@property (readonly) unsigned long long updateVersion;                  //@synthesize updateVersion=_updateVersion - In the implementation block
@property (copy,readonly) NSString * versionString; 
@property (copy,readonly) NSString * localizedDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)localizedDescription;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)majorVersion;
-(unsigned long long)minorVersion;
-(NSString *)versionString;
-(unsigned long long)updateVersion;
-(id)initWithVersionString:(id)arg1 ;
-(id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 ;
-(BOOL)isEqualToVersion:(id)arg1 ;
-(BOOL)isAtLeastVersion:(id)arg1 ;
-(BOOL)isGreaterThanVersion:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKDiscoveryTrigger.h>
#import <PassKitCore/NSSecureCoding.h>
#import <PassKitCore/NSCopying.h>

@interface PKDiscoveryLocationTrigger : PKDiscoveryTrigger <NSSecureCoding, NSCopying> {

	double _longitude;
	double _latitude;
	double _radius;

}

@property (nonatomic,readonly) double longitude;              //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double radius;                 //@synthesize radius=_radius - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(double)latitude;
-(double)longitude;
-(double)radius;
@end


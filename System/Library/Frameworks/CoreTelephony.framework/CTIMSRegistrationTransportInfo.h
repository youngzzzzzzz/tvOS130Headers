/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <CoreTelephony/NSCopying.h>
#import <CoreTelephony/NSSecureCoding.h>

@interface CTIMSRegistrationTransportInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isRegistered;
	int _contextType;
	int _transportType;

}

@property (assign,nonatomic) BOOL isRegistered;              //@synthesize isRegistered=_isRegistered - In the implementation block
@property (assign,nonatomic) int contextType;                //@synthesize contextType=_contextType - In the implementation block
@property (assign,nonatomic) int transportType;              //@synthesize transportType=_transportType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isRegistered;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)contextType;
-(void)setContextType:(int)arg1 ;
-(int)transportType;
-(void)setIsRegistered:(BOOL)arg1 ;
-(void)setTransportType:(int)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolboxCore/NSSecureCoding.h>

@class NSString;

@interface AUAudioUnitProperty : NSObject <NSSecureCoding> {

	NSString* _key;
	unsigned _scope;
	unsigned _element;

}
+(BOOL)supportsSecureCoding;
+(id)propertyWithKey:(id)arg1 ;
+(id)propertyWithKey:(id)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKey:(id)arg1 ;
-(id)initWithKey:(id)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
@end


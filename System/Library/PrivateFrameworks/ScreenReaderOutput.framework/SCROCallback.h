/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderOutput/NSSecureCoding.h>

@protocol NSSecureCoding;
@interface SCROCallback : NSObject <NSSecureCoding> {

	int _key;
	id<NSSecureCoding> _object;
	BOOL _isAtomic;

}
+(BOOL)supportsSecureCoding;
-(int)key;
-(id)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKey:(int)arg1 object:(id)arg2 ;
-(BOOL)isAtomic;
-(void)postToHandler:(id)arg1 ;
-(void)setIsAtomic:(BOOL)arg1 ;
@end


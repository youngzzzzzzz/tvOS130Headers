/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextPosition.h>

@interface _UITextKitTextPosition : UITextPosition {

	long long _offset;
	long long _affinity;

}

@property (assign) long long offset;                //@synthesize offset=_offset - In the implementation block
@property (assign) long long affinity;              //@synthesize affinity=_affinity - In the implementation block
+(id)positionWithOffset:(long long)arg1 ;
+(id)positionWithOffset:(long long)arg1 affinity:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(long long)offset;
-(void)setOffset:(long long)arg1 ;
-(long long)affinity;
-(void)setAffinity:(long long)arg1 ;
@end

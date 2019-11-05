/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/NSSecureCoding.h>
#import <BackBoardServices/NSCopying.h>

@class BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventDispatchingTarget : NSObject <NSSecureCoding, NSCopying> {

	BKSHIDEventDeferringEnvironment* _environment;
	int _pid;

}

@property (nonatomic,readonly) int pid;                                                                  //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventDeferringEnvironment * deferringEnvironment;              //@synthesize environment=_environment - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)systemTarget;
+(id)keyboardFocusTarget;
+(id)targetForDeferringEnvironment:(id)arg1 ;
+(id)targetForPID:(int)arg1 environment:(id)arg2 ;
+(id)focusTargetForPID:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)pid;
-(id)_initWithEnvironment:(id)arg1 pid:(int)arg2 ;
-(BKSHIDEventDeferringEnvironment *)deferringEnvironment;
@end

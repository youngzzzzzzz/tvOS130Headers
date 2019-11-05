/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSDate;

@interface HMDCameraRecordingFragmentContext : HMFObject {

	BOOL _motionActive;
	BOOL _doorbellActive;
	NSDate* _effectiveCreationDate;

}

@property (getter=isMotionActive,readonly) BOOL motionActive;                  //@synthesize motionActive=_motionActive - In the implementation block
@property (getter=isDoorbellActive,readonly) BOOL doorbellActive;              //@synthesize doorbellActive=_doorbellActive - In the implementation block
@property (copy,readonly) NSDate * effectiveCreationDate;                      //@synthesize effectiveCreationDate=_effectiveCreationDate - In the implementation block
-(id)attributeDescriptions;
-(BOOL)isMotionActive;
-(BOOL)isDoorbellActive;
-(NSDate *)effectiveCreationDate;
-(id)initWithEffectiveCreationDate:(id)arg1 doorbellActive:(BOOL)arg2 motionActive:(BOOL)arg3 ;
@end

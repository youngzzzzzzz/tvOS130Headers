/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDSetupEndPointWrite.h>
#import <HomeKitDaemon/NSSecureCoding.h>

@class NSNumber;

@interface HMDSetupEndPointRead : HMDSetupEndPointWrite <NSSecureCoding> {

	unsigned long long _responseStatus;
	NSNumber* _videoSSRC;
	NSNumber* _audioSSRC;

}

@property (nonatomic,readonly) unsigned long long responseStatus;              //@synthesize responseStatus=_responseStatus - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * videoSSRC;                      //@synthesize videoSSRC=_videoSSRC - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * audioSSRC;                      //@synthesize audioSSRC=_audioSSRC - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)responseStatus;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSNumber *)videoSSRC;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(BOOL)_parseFromTLVDataOnSuccess;
-(BOOL)_parseFromTLVDataOnFailure;
-(NSNumber *)audioSSRC;
-(id)initWithSessionIdentifier:(id)arg1 address:(id)arg2 videoSrtpParameters:(id)arg3 audioSrtpParameters:(id)arg4 responseStatus:(unsigned long long)arg5 videoSSRC:(id)arg6 audioSSRC:(id)arg7 ;
@end


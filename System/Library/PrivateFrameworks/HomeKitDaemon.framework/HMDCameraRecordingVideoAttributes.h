/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <HomeKitDaemon/HMDTLVCreateParse.h>
#import <HomeKitDaemon/NSSecureCoding.h>

@class NSNumber;

@interface HMDCameraRecordingVideoAttributes : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	NSNumber* _imageWidth;
	NSNumber* _imageHeight;
	long long _resolution;
	NSNumber* _frameRate;

}

@property (nonatomic,copy,readonly) NSNumber * imageWidth;               //@synthesize imageWidth=_imageWidth - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * imageHeight;              //@synthesize imageHeight=_imageHeight - In the implementation block
@property (nonatomic,readonly) long long resolution;                     //@synthesize resolution=_resolution - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * frameRate;                //@synthesize frameRate=_frameRate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)resolution;
-(NSNumber *)imageWidth;
-(NSNumber *)imageHeight;
-(NSNumber *)frameRate;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(id)initWithImageWidth:(id)arg1 imageHeight:(id)arg2 frameRate:(id)arg3 ;
-(id)initWithResolution:(long long)arg1 frameRate:(id)arg2 ;
@end


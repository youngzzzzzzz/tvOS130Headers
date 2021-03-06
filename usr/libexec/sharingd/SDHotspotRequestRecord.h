/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:54 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString, SFRemoteHotspotDevice;

@interface SDHotspotRequestRecord : NSObject {

	NSDate* _startTime;
	NSString* _requestID;
	SFRemoteHotspotDevice* _remoteHotspotDevice;

}

@property (retain) NSDate * startTime;                                       //@synthesize startTime=_startTime - In the implementation block
@property (retain) NSString * requestID;                                     //@synthesize requestID=_requestID - In the implementation block
@property (retain) SFRemoteHotspotDevice * remoteHotspotDevice;              //@synthesize remoteHotspotDevice=_remoteHotspotDevice - In the implementation block
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(id)initWithHotspotDevice:(id)arg1 startTime:(id)arg2 requestID:(id)arg3 ;
-(SFRemoteHotspotDevice *)remoteHotspotDevice;
-(void)setRemoteHotspotDevice:(SFRemoteHotspotDevice *)arg1 ;
@end


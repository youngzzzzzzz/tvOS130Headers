/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface IDSCloudKitKeyTransparencyDeviceRecord : NSObject {

	NSData* _deviceData;
	NSData* _deviceMetadata;

}

@property (nonatomic,readonly) NSData * deviceData;                  //@synthesize deviceData=_deviceData - In the implementation block
@property (nonatomic,readonly) NSData * deviceMetadata;              //@synthesize deviceMetadata=_deviceMetadata - In the implementation block
+(id)recordWithDeviceData:(id)arg1 deviceMetadata:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)deviceMetadata;
-(NSData *)deviceData;
-(id)initWithDeviceData:(id)arg1 deviceMetadata:(id)arg2 ;
-(BOOL)isEqualToCloudKitKeyTransparencyDeviceRecord:(id)arg1 ;
@end

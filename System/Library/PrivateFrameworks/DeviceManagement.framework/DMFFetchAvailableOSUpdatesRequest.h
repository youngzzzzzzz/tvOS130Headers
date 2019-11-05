/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFFetchAvailableOSUpdatesRequest : DMFTaskRequest {

	BOOL _useDelay;
	NSString* _productVersion;

}

@property (nonatomic,copy) NSString * productVersion;              //@synthesize productVersion=_productVersion - In the implementation block
@property (assign,nonatomic) BOOL useDelay;                        //@synthesize useDelay=_useDelay - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)productVersion;
-(void)setProductVersion:(NSString *)arg1 ;
-(BOOL)useDelay;
-(void)setUseDelay:(BOOL)arg1 ;
@end

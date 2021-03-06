/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMClient/NSSecureCoding.h>

@class NSString;

@interface FMClient.AuthenticationCredential : NSObject <NSSecureCoding> {

	 authToken;
	 personId;
	 hostName;

}

@property (readonly,nonatomic) NSString * authToken; 
@property (readonly,nonatomic) NSString * personId; 
@property (readonly,nonatomic) NSString * hostName; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)hostName;
-(NSString *)authToken;
-(NSString *)personId;
-(id)initWithAuthToken:(id)arg1 personId:(id)arg2 hostName:(id)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMClient/NSSecureCoding.h>

@class NSString;

@interface FMClient.VoiceAssistantDeviceName : NSObject <NSSecureCoding> {

	 deviceName;
	 ownerFirstName;
	 ownerLastName;
	 $__lazy_storage_$_syncAnchor;

}

@property (readonly,nonatomic) NSString * deviceName; 
@property (readonly,nonatomic) NSString * ownerFirstName; 
@property (readonly,nonatomic) NSString * ownerLastName; 
@property (copy,nonatomic) NSString * syncAnchor; 
@property (readonly,nonatomic) long long hash; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(long long)hash;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)deviceName;
-(NSString *)syncAnchor;
-(void)setSyncAnchor:(NSString *)arg1 ;
-(NSString *)ownerFirstName;
-(NSString *)ownerLastName;
-(id)initWithDeviceName:(id)arg1 ownerFirstName:(id)arg2 ownerLastName:(id)arg3 ;
@end

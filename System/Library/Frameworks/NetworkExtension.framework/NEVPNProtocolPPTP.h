/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPNProtocolPPP.h>

@interface NEVPNProtocolPPTP : NEVPNProtocolPPP {

	long long _encryptionLevel;

}

@property (assign) long long encryptionLevel;              //@synthesize encryptionLevel=_encryptionLevel - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(SCNetworkInterfaceRef)createInterface;
-(long long)encryptionLevel;
-(void)setEncryptionLevel:(long long)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/BSXPCCoding.h>
#import <FrontBoardServices/NSCopying.h>
#import <FrontBoardServices/NSSecureCoding.h>

@class NSString;

@interface FBSDisplayIdentity : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {

	long long _type;
	unsigned _displayID;
	unsigned _connectionSeed;
	int _pid;
	BOOL _external;
	NSString* _uniqueIdentifier;
	BOOL _secure;
	FBSDisplayIdentity* _rootIdentity;

}

@property (getter=isSecure,nonatomic,readonly) BOOL secure;                                            //@synthesize secure=_secure - In the implementation block
@property (nonatomic,readonly) int pid;                                                                //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) FBSDisplayIdentity * rootIdentity; 
@property (nonatomic,readonly) BOOL isRootIdentity; 
@property (getter=isMainDisplay,nonatomic,readonly) BOOL mainDisplay; 
@property (getter=isExternal,nonatomic,readonly) BOOL external;                                        //@synthesize external=_external - In the implementation block
@property (getter=isCarDisplay,nonatomic,readonly) BOOL carDisplay; 
@property (getter=isCarInstrumentsDisplay,nonatomic,readonly) BOOL carInstrumentsDisplay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(BOOL)isSecure;
-(int)pid;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)_initWithType:(long long)arg1 displayID:(unsigned)arg2 connectionSeed:(unsigned)arg3 pid:(int)arg4 external:(BOOL)arg5 uniqueIdentifier:(id)arg6 secure:(BOOL)arg7 root:(id)arg8 ;
-(BOOL)isRootIdentity;
-(BOOL)isMainDisplay;
-(FBSDisplayIdentity *)rootIdentity;
-(BOOL)isCarDisplay;
-(BOOL)isCarInstrumentsDisplay;
-(BOOL)expectsSecureRendering;
-(unsigned)displayID;
-(unsigned)connectionSeed;
-(BOOL)isMainRootDisplay;
-(BOOL)isAirPlayDisplay;
-(BOOL)isRestrictedAirPlayDisplay;
-(BOOL)isiPodOnlyDisplay;
-(BOOL)isMusicOnlyDisplay;
-(BOOL)isExternal;
@end

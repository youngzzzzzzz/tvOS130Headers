/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HomeKitBackingStore/NSCopying.h>
#import <HomeKitBackingStore/NSSecureCoding.h>

@class NSUUID, CKUserIdentityLookupInfo;

@interface HMBShareInvitationContext : HMFObject <NSCopying, NSSecureCoding> {

	BOOL _shouldGrantWriteAccess;
	NSUUID* _participantClientIdentifier;
	CKUserIdentityLookupInfo* _lookupInfo;

}

@property (readonly) CKUserIdentityLookupInfo * lookupInfo;                  //@synthesize lookupInfo=_lookupInfo - In the implementation block
@property (copy,readonly) NSUUID * participantClientIdentifier;              //@synthesize participantClientIdentifier=_participantClientIdentifier - In the implementation block
@property (assign) BOOL shouldGrantWriteAccess;                              //@synthesize shouldGrantWriteAccess=_shouldGrantWriteAccess - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKUserIdentityLookupInfo *)lookupInfo;
-(id)attributeDescriptions;
-(id)initWithParticipantClientIdentifier:(id)arg1 emailAddress:(id)arg2 ;
-(id)initWithParticipantClientIdentifier:(id)arg1 phoneNumber:(id)arg2 ;
-(void)setShouldGrantWriteAccess:(BOOL)arg1 ;
-(id)initWithParticipantClientIdentifier:(id)arg1 lookupInfo:(id)arg2 ;
-(NSUUID *)participantClientIdentifier;
-(BOOL)shouldGrantWriteAccess;
-(id)initWithParticipantClientIdentifier:(id)arg1 cloudShareID:(id)arg2 ;
@end


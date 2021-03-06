/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEConfigurationValidating.h>
#import <NetworkExtension/NEPrettyDescription.h>
#import <NetworkExtension/NEConfigurationLegacySupport.h>
#import <NetworkExtension/NSSecureCoding.h>
#import <NetworkExtension/NSCopying.h>

@class NSString, NSArray;

@interface NEAppRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	BOOL _noRestriction;
	BOOL _noDivertDNS;
	NSString* _matchSigningIdentifier;
	NSString* _matchDesignatedRequirement;
	NSString* _matchPath;
	NSArray* _matchDomains;
	NSArray* _additionalExecutables;
	NSArray* _matchAccountIdentifiers;

}

@property (copy) NSArray * additionalExecutables;                        //@synthesize additionalExecutables=_additionalExecutables - In the implementation block
@property (assign) BOOL noRestriction;                                   //@synthesize noRestriction=_noRestriction - In the implementation block
@property (copy) NSArray * matchAccountIdentifiers;                      //@synthesize matchAccountIdentifiers=_matchAccountIdentifiers - In the implementation block
@property (assign) BOOL noDivertDNS;                                     //@synthesize noDivertDNS=_noDivertDNS - In the implementation block
@property (readonly) NSString * matchSigningIdentifier;                  //@synthesize matchSigningIdentifier=_matchSigningIdentifier - In the implementation block
@property (readonly) NSString * matchDesignatedRequirement;              //@synthesize matchDesignatedRequirement=_matchDesignatedRequirement - In the implementation block
@property (copy) NSString * matchPath;                                   //@synthesize matchPath=_matchPath - In the implementation block
@property (copy) NSArray * matchDomains;                                 //@synthesize matchDomains=_matchDomains - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSString *)matchSigningIdentifier;
-(NSString *)matchPath;
-(NSArray *)matchDomains;
-(NSArray *)matchAccountIdentifiers;
-(BOOL)noDivertDNS;
-(id)initWithSigningIdentifier:(id)arg1 ;
-(void)setMatchPath:(NSString *)arg1 ;
-(void)setMatchDomains:(NSArray *)arg1 ;
-(void)setMatchAccountIdentifiers:(NSArray *)arg1 ;
-(void)setNoDivertDNS:(BOOL)arg1 ;
-(BOOL)signingIdentifierAllowed:(id)arg1 domainsRequired:(out BOOL*)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(BOOL)overlapsWithRule:(id)arg1 ;
-(BOOL)matchesProcessWithAuditToken:(id)arg1 ;
-(NSString *)matchDesignatedRequirement;
-(NSArray *)additionalExecutables;
-(void)setAdditionalExecutables:(NSArray *)arg1 ;
-(BOOL)noRestriction;
-(void)setNoRestriction:(BOOL)arg1 ;
@end


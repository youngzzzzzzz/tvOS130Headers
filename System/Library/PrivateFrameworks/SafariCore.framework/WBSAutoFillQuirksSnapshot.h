/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariCore/WBSRemotePlistSnapshot.h>

@class NSDictionary, NSArray, NSSet, NSString;

@interface WBSAutoFillQuirksSnapshot : NSObject <WBSRemotePlistSnapshot> {

	NSDictionary* _autoFillQuirks;
	NSArray* _domainsWithAssociatedCredentials;
	NSDictionary* _passwordRequirementsByDomain;
	NSArray* _domainsIneligibleForPasswordAuditing;
	NSSet* _domainsIneligibleForAutomaticLogin;

}

@property (nonatomic,copy,readonly) NSDictionary * passwordRequirementsByDomain;                 //@synthesize passwordRequirementsByDomain=_passwordRequirementsByDomain - In the implementation block
@property (nonatomic,copy,readonly) NSArray * domainsWithAssociatedCredentials;                  //@synthesize domainsWithAssociatedCredentials=_domainsWithAssociatedCredentials - In the implementation block
@property (nonatomic,copy,readonly) NSArray * domainsIneligibleForPasswordAuditing;              //@synthesize domainsIneligibleForPasswordAuditing=_domainsIneligibleForPasswordAuditing - In the implementation block
@property (nonatomic,copy,readonly) NSSet * domainsIneligibleForAutomaticLogin;                  //@synthesize domainsIneligibleForAutomaticLogin=_domainsIneligibleForAutomaticLogin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSDictionary *)passwordRequirementsByDomain;
-(id)_passwordRequirementsByDomainFromAutoFillQuirks:(id)arg1 error:(id*)arg2 ;
-(id)_domainsWithAssociatedCredentialsFromAutoFillQuirks:(id)arg1 error:(id*)arg2 ;
-(id)_domainsIneligibleForPasswordAuditingFromAutoFillQuirks:(id)arg1 error:(id*)arg2 ;
-(id)_domainsIneligibleForAutomaticLoginFromAutoFillQuirks:(id)arg1 error:(id*)arg2 ;
-(id)initWithPlistData:(id)arg1 error:(id*)arg2 ;
-(id)plistDataWithFormat:(unsigned long long)arg1 ;
-(NSArray *)domainsWithAssociatedCredentials;
-(NSArray *)domainsIneligibleForPasswordAuditing;
-(NSSet *)domainsIneligibleForAutomaticLogin;
@end


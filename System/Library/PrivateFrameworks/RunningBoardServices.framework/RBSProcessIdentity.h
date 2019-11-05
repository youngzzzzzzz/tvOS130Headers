/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <RunningBoardServices/RBSProcessMatching.h>
#import <RunningBoardServices/BSXPCSecureCoding.h>
#import <RunningBoardServices/BSDescriptionProviding.h>
#import <RunningBoardServices/NSSecureCoding.h>
#import <RunningBoardServices/NSCopying.h>

@class RBSXPCServiceIdentity, NSString, RBSProcessIdentifier;

@interface RBSProcessIdentity : NSObject <RBSProcessMatching, BSXPCSecureCoding, BSDescriptionProviding, NSSecureCoding, NSCopying> {

	unsigned long long _hash;
	int _instanceID;
	unsigned char _type;
	RBSXPCServiceIdentity* _serviceIdentity;
	unsigned _euid;
	NSString* _executablePath;
	NSString* _picoDesc;
	NSString* _description;
	NSString* _embeddedApplicationIdentifier;
	NSString* _daemonJobLabel;

}

@property (getter=isDefaultManaged,nonatomic,readonly) BOOL defaultManaged; 
@property (getter=isExtension,nonatomic,readonly) BOOL extension; 
@property (nonatomic,copy,readonly) NSString * executablePath;                                     //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,readonly) BOOL inheritsCoalitionBand; 
@property (nonatomic,readonly) unsigned euid;                                                      //@synthesize euid=_euid - In the implementation block
@property (nonatomic,readonly) NSString * picoDesc;                                                //@synthesize picoDesc=_picoDesc - In the implementation block
@property (getter=isEmbeddedApplication,nonatomic,readonly) BOOL embeddedApplication; 
@property (nonatomic,copy,readonly) NSString * embeddedApplicationIdentifier;                      //@synthesize embeddedApplicationIdentifier=_embeddedApplicationIdentifier - In the implementation block
@property (getter=isDaemon,nonatomic,readonly) BOOL daemon; 
@property (nonatomic,copy,readonly) NSString * daemonJobLabel;                                     //@synthesize daemonJobLabel=_daemonJobLabel - In the implementation block
@property (getter=isXPCService,nonatomic,readonly) BOOL XPCService; 
@property (nonatomic,copy,readonly) NSString * xpcServiceIdentifier; 
@property (nonatomic,copy,readonly) RBSProcessIdentity * hostIdentity; 
@property (nonatomic,copy,readonly) RBSProcessIdentifier * hostIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description;                                                  //@synthesize description=_description - In the implementation block
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsBSXPCSecureCoding;
+(id)identityOfCurrentProcess;
+(id)identityForEmbeddedApplicationIdentifier:(id)arg1 ;
+(id)identityForDaemonJobLabel:(id)arg1 ;
+(id)identityForXPCServiceProperties:(id)arg1 pid:(int)arg2 euid:(unsigned)arg3 host:(id)arg4 ;
+(id)identityForLaunchProperties:(id)arg1 pid:(int)arg2 euid:(unsigned)arg3 ;
+(id)identityForExecutablePath:(id)arg1 pid:(int)arg2 euid:(unsigned)arg3 ;
+(id)identityForEmbeddedApplicationIdentifier:(id)arg1 euid:(unsigned)arg2 ;
+(id)_identityForXPCServicePath:(id)arg1 properties:(id)arg2 pid:(int)arg3 euid:(unsigned)arg4 host:(id)arg5 ;
+(id)identityForDaemonPlistPath:(id)arg1 ;
+(id)identityForXPCServiceIdentifier:(id)arg1 ;
+(id)identityForXPCServicePath:(id)arg1 host:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(unsigned)euid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)executablePath;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(NSString *)picoDesc;
-(BOOL)isExtension;
-(RBSProcessIdentifier *)hostIdentifier;
-(NSString *)embeddedApplicationIdentifier;
-(NSString *)xpcServiceIdentifier;
-(BOOL)isXPCService;
-(BOOL)isDaemon;
-(BOOL)isEqualToIdentity:(id)arg1 ;
-(BOOL)isEmbeddedApplication;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)processPredicate;
-(NSString *)daemonJobLabel;
-(BOOL)isDefaultManaged;
-(id)copyWithEuid:(unsigned)arg1 ;
-(BOOL)inheritsCoalitionBand;
-(id)_initWithEmbeddedApplicationID:(id)arg1 xpcServiceID:(id)arg2 daemonJobLabel:(id)arg3 executablePath:(id)arg4 instanceID:(int)arg5 euid:(unsigned)arg6 ;
-(BOOL)isAnonymousExecutable;
-(void)_initPicoDesc;
-(BOOL)_matchesIdentity:(id)arg1 ;
-(RBSProcessIdentity *)hostIdentity;
@end

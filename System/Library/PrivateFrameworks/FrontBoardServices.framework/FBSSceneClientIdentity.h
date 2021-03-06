/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/NSCopying.h>
#import <FrontBoardServices/BSDescriptionProviding.h>

@class RBSProcessIdentity, NSString;

@interface FBSSceneClientIdentity : NSObject <NSCopying, BSDescriptionProviding> {

	BOOL _local;
	RBSProcessIdentity* _processIdentity;

}

@property (getter=isLocal,nonatomic,readonly) BOOL local;                              //@synthesize local=_local - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessIdentity * processIdentity;              //@synthesize processIdentity=_processIdentity - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identityForProcessIdentity:(id)arg1 ;
+(id)localIdentity;
+(id)identityForBundleID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(id)_init;
-(NSString *)bundleIdentifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(RBSProcessIdentity *)processIdentity;
-(BOOL)isLocal;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/itunescloudd-Structs.h>
#import <itunescloudd/NSCopying.h>

@class NSSet, ICConnectionConfiguration, NSString;

@interface ICDAccountManagerState : NSObject <NSCopying> {

	NSSet* _supportedConfigurations;
	NSSet* _supportedConfigurationsDSIDs;
	ICConnectionConfiguration* _activeConfiguration;
	NSString* _activeConfigurationDSID;

}

@property (nonatomic,copy) NSSet * supportedConfigurations;                              //@synthesize supportedConfigurations=_supportedConfigurations - In the implementation block
@property (nonatomic,copy) NSSet * supportedConfigurationsDSIDs;                         //@synthesize supportedConfigurationsDSIDs=_supportedConfigurationsDSIDs - In the implementation block
@property (nonatomic,copy) ICConnectionConfiguration * activeConfiguration;              //@synthesize activeConfiguration=_activeConfiguration - In the implementation block
@property (nonatomic,copy) NSString * activeConfigurationDSID;                           //@synthesize activeConfigurationDSID=_activeConfigurationDSID - In the implementation block
+(id)stateForAccounts:(id)arg1 baseConfiguration:(id)arg2 ;
+(id)restoredStatedWithFallbackAccounts:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)save;
-(void)setActiveConfiguration:(ICConnectionConfiguration *)arg1 ;
-(ICConnectionConfiguration *)activeConfiguration;
-(NSSet *)supportedConfigurations;
-(void)setSupportedConfigurations:(NSSet *)arg1 ;
-(id)_initWithAccounts:(id)arg1 activeAccount:(id)arg2 baseConfiguration:(id)arg3 ;
-(NSString *)activeConfigurationDSID;
-(NSSet *)supportedConfigurationsDSIDs;
-(id)_configurationForAccount:(id)arg1 baseConfiguration:(id)arg2 ;
-(void)_updateSupportedConfigurationsWithAccounts:(id)arg1 activeConfiguration:(id)arg2 ;
-(void)_updateSupportedConfigurationsDSIDs;
-(void)setSupportedConfigurationsDSIDs:(NSSet *)arg1 ;
-(id)_userIdentityForAccount:(id)arg1 ;
-(void)setActiveConfigurationDSID:(NSString *)arg1 ;
@end


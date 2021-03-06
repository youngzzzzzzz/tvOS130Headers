/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:35 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <dmd/DMDConfigurationSource.h>
@class NSString, NSXPCListenerEndpoint, DMFReportingRequirements;


@protocol DMDConfigurationSource <NSObject>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * organizationIdentifier; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSString * machServiceName; 
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint; 
@property (nonatomic,retain) DMFReportingRequirements * reportingRequirements; 
@required
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(NSString *)displayName;
-(NSString *)machServiceName;
-(void)setMachServiceName:(id)arg1;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(void)setDisplayName:(id)arg1;
-(void)setListenerEndpoint:(id)arg1;
-(NSString *)organizationIdentifier;
-(DMFReportingRequirements *)reportingRequirements;
-(void)setOrganizationIdentifier:(id)arg1;
-(void)setReportingRequirements:(id)arg1;

@end


@class NSString, NSXPCListenerEndpoint, DMFReportingRequirements, DMDConfigurationOrganization;

@interface DMDConfigurationSource : NSManagedObject <DMDConfigurationSource>

@property (nonatomic,retain) DMDConfigurationOrganization * organization; 
@property (nonatomic,copy) NSString * organizationIdentifier; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSString * machServiceName; 
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint; 
@property (nonatomic,retain) DMFReportingRequirements * reportingRequirements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)organizationIdentifier;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
@end


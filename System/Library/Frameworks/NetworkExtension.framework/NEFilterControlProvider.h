/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEFilterProvider.h>
#import <NetworkExtension/NSExtensionRequestHandling.h>

@class NSDictionary, NSString;

@interface NEFilterControlProvider : NEFilterProvider <NSExtensionRequestHandling> {

	NSDictionary* _remediationMap;
	NSDictionary* _URLAppendStringMap;

}

@property (copy) NSDictionary * remediationMap; 
@property (copy) NSDictionary * URLAppendStringMap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleNewFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)notifyRulesChanged;
-(NSDictionary *)remediationMap;
-(NSDictionary *)URLAppendStringMap;
-(void)handleRemediationForFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setRemediationMap:(NSDictionary *)arg1 ;
-(void)setURLAppendStringMap:(NSDictionary *)arg1 ;
@end


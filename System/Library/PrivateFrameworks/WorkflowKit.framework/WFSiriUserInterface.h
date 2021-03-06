/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol WFSiriUserInterface <WFUserInterface>
@property (nonatomic,copy,readonly) NSArray * airPlayRouteIDs; 
@property (nonatomic,readonly) long long executionContext; 
@required
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(long long)executionContext;
-(void)speakText:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)showInteractionIfNeeded:(id)arg1 requiringConfirmation:(BOOL)arg2 requiringAuthentication:(BOOL)arg3 executionStage:(long long)arg4 completionHandler:(/*^block*/id)arg5;
-(void)openInteractionInApp:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)openUserActivity:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)executeIntent:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)configureIntent:(id)arg1;
-(NSArray *)airPlayRouteIDs;

@end


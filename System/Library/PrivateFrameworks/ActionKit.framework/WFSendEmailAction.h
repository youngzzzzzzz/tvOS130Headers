/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFSendEmailAction : WFHandleCustomIntentAction
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2 ;
-(void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)populatesInputFromInputParameter;
-(id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2 ;
-(id)generatedAccessResource;
-(id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2 ;
-(void)getRecipientsFromParameterKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateContentForIntents:(/*^block*/id)arg1 ;
-(void)generateFilesFromCollection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateEmailHeaderFromParameters:(/*^block*/id)arg1 ;
-(void)generateEmailFromInput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)generateBodyFromCollection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendTextViaMailtoURL:(id)arg1 withUserInterface:(id)arg2 ;
@end

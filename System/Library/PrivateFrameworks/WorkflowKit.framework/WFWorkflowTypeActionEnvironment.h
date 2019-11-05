/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFActionEnvironment.h>

@class NSString;

@interface WFWorkflowTypeActionEnvironment : WFActionEnvironment {

	NSString* _workflowType;

}

@property (nonatomic,readonly) NSString * workflowType;              //@synthesize workflowType=_workflowType - In the implementation block
-(BOOL)isAppExtension;
-(BOOL)isMemoryConstrained;
-(id)initWithWorkflowType:(id)arg1 ;
-(BOOL)isWatchOS;
-(NSString *)workflowType;
@end

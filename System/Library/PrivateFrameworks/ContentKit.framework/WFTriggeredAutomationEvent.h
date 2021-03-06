/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFTriggeredAutomationEvent : WFEvent {

	BOOL _requiredRuntimeConfirmation;
	NSString* _key;
	NSString* _triggerType;

}

@property (nonatomic,copy) NSString * key;                                  //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * triggerType;                          //@synthesize triggerType=_triggerType - In the implementation block
@property (assign,nonatomic) BOOL requiredRuntimeConfirmation;              //@synthesize requiredRuntimeConfirmation=_requiredRuntimeConfirmation - In the implementation block
+(Class)codableEventClass;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setTriggerType:(NSString *)arg1 ;
-(NSString *)triggerType;
-(void)setRequiredRuntimeConfirmation:(BOOL)arg1 ;
-(BOOL)requiredRuntimeConfirmation;
@end


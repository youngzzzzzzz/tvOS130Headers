/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion : NSObject {

	NSString* _prompt;
	NSString* _actionIdentifier;
	NSString* _parameterKey;

}

@property (nonatomic,copy,readonly) NSString * prompt;                        //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * parameterKey;                  //@synthesize parameterKey=_parameterKey - In the implementation block
-(NSString *)actionIdentifier;
-(NSString *)prompt;
-(NSString *)parameterKey;
-(id)initWithPrompt:(id)arg1 actionIdentifier:(id)arg2 parameterKey:(id)arg3 ;
@end

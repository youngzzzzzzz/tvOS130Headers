/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateCoreSupport/NSSecureCoding.h>

@class NSString;

@interface SUCoreSimulateEvent : NSObject <NSSecureCoding> {

	int _count;
	int _startAt;
	int _endAt;
	long long _simAction;
	long long _simTrigger;
	NSString* _moduleName;
	NSString* _identityName;
	NSString* _fsmEvent;
	NSString* _fsmState;
	NSString* _alteration;

}

@property (assign,nonatomic) int count;                                     //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) long long simAction;                         //@synthesize simAction=_simAction - In the implementation block
@property (nonatomic,readonly) long long simTrigger;                        //@synthesize simTrigger=_simTrigger - In the implementation block
@property (nonatomic,retain,readonly) NSString * moduleName;                //@synthesize moduleName=_moduleName - In the implementation block
@property (nonatomic,retain,readonly) NSString * identityName;              //@synthesize identityName=_identityName - In the implementation block
@property (nonatomic,retain,readonly) NSString * fsmEvent;                  //@synthesize fsmEvent=_fsmEvent - In the implementation block
@property (nonatomic,retain,readonly) NSString * fsmState;                  //@synthesize fsmState=_fsmState - In the implementation block
@property (nonatomic,retain,readonly) NSString * alteration;                //@synthesize alteration=_alteration - In the implementation block
@property (nonatomic,readonly) int startAt;                                 //@synthesize startAt=_startAt - In the implementation block
@property (nonatomic,readonly) int endAt;                                   //@synthesize endAt=_endAt - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(int)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCount:(int)arg1 ;
-(id)summary;
-(id)_actionName;
-(NSString *)identityName;
-(NSString *)fsmState;
-(long long)simAction;
-(NSString *)moduleName;
-(id)initWithAction:(long long)arg1 onTrigger:(long long)arg2 forModule:(id)arg3 atFunction:(id)arg4 startAt:(int)arg5 endAt:(int)arg6 ;
-(id)initWithAction:(long long)arg1 onTrigger:(long long)arg2 forMachine:(id)arg3 atEvent:(id)arg4 inState:(id)arg5 alteration:(id)arg6 startAt:(int)arg7 endAt:(int)arg8 ;
-(long long)simTrigger;
-(NSString *)fsmEvent;
-(int)startAt;
-(int)endAt;
-(id)_initWithAction:(long long)arg1 onTrigger:(long long)arg2 forModule:(id)arg3 atIdentity:(id)arg4 atEvent:(id)arg5 inState:(id)arg6 alteration:(id)arg7 startAt:(int)arg8 endAt:(int)arg9 ;
-(id)_descriptionFSM;
-(id)_descriptionStandard;
-(id)_triggerName;
-(NSString *)alteration;
@end

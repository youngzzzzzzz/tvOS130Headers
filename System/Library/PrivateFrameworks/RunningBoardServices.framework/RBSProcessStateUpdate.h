/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RBSProcessHandle, RBSProcessState;

@interface RBSProcessStateUpdate : NSObject {

	RBSProcessHandle* _process;
	RBSProcessState* _state;
	RBSProcessState* _previousState;

}

@property (nonatomic,readonly) RBSProcessHandle * process;                   //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) RBSProcessState * state;                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) RBSProcessState * previousState;              //@synthesize previousState=_previousState - In the implementation block
+(id)updateWithState:(id)arg1 previousState:(id)arg2 ;
-(id)description;
-(RBSProcessState *)state;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(RBSProcessState *)previousState;
-(RBSProcessHandle *)process;
@end


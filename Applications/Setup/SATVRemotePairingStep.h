/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/SATVBaseStep.h>

@protocol SATVStepDelegate;
@class SATVRemoteController, NSTimer, NSString;

@interface SATVRemotePairingStep : NSObject <SATVBaseStep> {

	BOOL _hasAttemptedSilentActivation;
	SATVRemoteController* _pairRemoteController;
	id<SATVStepDelegate> stepDelegate;
	NSTimer* _touchlessSetupTimer;
	NSTimer* _TFDEPPollTimer;

}

@property (nonatomic,retain) NSTimer * touchlessSetupTimer;                                                           //@synthesize touchlessSetupTimer=_touchlessSetupTimer - In the implementation block
@property (nonatomic,retain) NSTimer * TFDEPPollTimer;                                                                //@synthesize TFDEPPollTimer=_TFDEPPollTimer - In the implementation block
@property (assign,nonatomic) BOOL hasAttemptedSilentActivation;                                                       //@synthesize hasAttemptedSilentActivation=_hasAttemptedSilentActivation - In the implementation block
@property (getter=_pairRemoteController,nonatomic,readonly) SATVRemoteController * pairRemoteController;              //@synthesize pairRemoteController=_pairRemoteController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SATVStepDelegate> stepDelegate; 
+(void)initialize;
+(id)stepPresentationRecordKey;
-(id)init;
-(BOOL)isTeslaEnrolled;
-(void)autoAdvance;
-(id<SATVStepDelegate>)stepDelegate;
-(BOOL)executeStepForContext:(id)arg1 ;
-(void)setStepDelegate:(id<SATVStepDelegate>)arg1 ;
-(void)_attemptSilentActivationIfPossible;
-(void)_startTFDEPPolling;
-(id)_pairRemoteController;
-(void)_presentRemotePairingController:(id)arg1 ;
-(BOOL)_isResumingTouchlessSetup;
-(void)_beginTouchlessSetupWithInvocation:(id)arg1 afterDelay:(double)arg2 ;
-(BOOL)hasAttemptedSilentActivation;
-(void)_retrieveCloudConfigurationDetails;
-(void)setHasAttemptedSilentActivation:(BOOL)arg1 ;
-(void)_autoAdvanceIfNeeded;
-(void)TFDEPPollTimerFired:(id)arg1 ;
-(void)_invalidateAllTimers;
-(void)_notifyDelegateAboutCompletionWithSuccessInfo:(BOOL)arg1 ;
-(void)_setupTouchlessTimerAfterDelay:(double)arg1 invocation:(id)arg2 ;
-(void)_invalidateTouchlessTimer;
-(void)_stopTFDEPPolling;
-(void)_autoAdvanceNow;
-(NSTimer *)touchlessSetupTimer;
-(void)setTouchlessSetupTimer:(NSTimer *)arg1 ;
-(NSTimer *)TFDEPPollTimer;
-(void)setTFDEPPollTimer:(NSTimer *)arg1 ;
@end


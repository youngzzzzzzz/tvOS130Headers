/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettings/TVSettings-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <TVSettings/PBSExternalControlIRLearningManagerDelegate.h>

@class PBSExternalControlIRLearningConfiguration, UILabel, UIProgressView, UIImageView, UIStackView, UIButton, UITapGestureRecognizer, PBSExternalControlIRLearningManager, NSSet, NSUUID, NSString;

@interface TVSettingsLearnRemoteViewController : UIViewController <PBSExternalControlIRLearningManagerDelegate> {

	struct {
		unsigned startLearningAttemptCount : 4;
		unsigned shouldCompleteOnViewDidAppear : 1;
		unsigned didFailFromError : 1;
		unsigned didFailFromInactivity : 1;
		unsigned shouldLearnNextActionOnButtonRelease : 1;
	}  _flags;
	PBSExternalControlIRLearningConfiguration* _configuration;
	/*^block*/id _completionHandler;
	UILabel* _titleLabel;
	UILabel* _instructionLabel;
	UILabel* _bottomTextLabel;
	UILabel* _activityLabel;
	UIProgressView* _progressView;
	UIImageView* _buttonImageView;
	UIStackView* _learningStackView;
	UIStackView* _learningHeaderStackView;
	UIStackView* _learningProgressStackView;
	UIButton* _focusButton;
	UITapGestureRecognizer* _leftTapGestureRecognizer;
	UITapGestureRecognizer* _rightTapGestureRecognizer;
	PBSExternalControlIRLearningManager* _learningManager;
	NSSet* _learnedActions;
	NSUUID* _learnedDeviceUUID;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * instructionLabel;                                             //@synthesize instructionLabel=_instructionLabel - In the implementation block
@property (nonatomic,retain) UILabel * bottomTextLabel;                                              //@synthesize bottomTextLabel=_bottomTextLabel - In the implementation block
@property (nonatomic,retain) UILabel * activityLabel;                                                //@synthesize activityLabel=_activityLabel - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                          //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIImageView * buttonImageView;                                          //@synthesize buttonImageView=_buttonImageView - In the implementation block
@property (nonatomic,retain) UIStackView * learningStackView;                                        //@synthesize learningStackView=_learningStackView - In the implementation block
@property (nonatomic,retain) UIStackView * learningHeaderStackView;                                  //@synthesize learningHeaderStackView=_learningHeaderStackView - In the implementation block
@property (nonatomic,retain) UIStackView * learningProgressStackView;                                //@synthesize learningProgressStackView=_learningProgressStackView - In the implementation block
@property (nonatomic,retain) UIButton * focusButton;                                                 //@synthesize focusButton=_focusButton - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * leftTapGestureRecognizer;                      //@synthesize leftTapGestureRecognizer=_leftTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * rightTapGestureRecognizer;                     //@synthesize rightTapGestureRecognizer=_rightTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) PBSExternalControlIRLearningManager * learningManager;                  //@synthesize learningManager=_learningManager - In the implementation block
@property (nonatomic,copy) NSSet * learnedActions;                                                   //@synthesize learnedActions=_learnedActions - In the implementation block
@property (nonatomic,retain) NSUUID * learnedDeviceUUID;                                             //@synthesize learnedDeviceUUID=_learnedDeviceUUID - In the implementation block
@property (nonatomic,retain) PBSExternalControlIRLearningConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PBSExternalControlIRLearningConfiguration *)configuration;
-(void)setConfiguration:(PBSExternalControlIRLearningConfiguration *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setActivityLabel:(UILabel *)arg1 ;
-(UILabel *)activityLabel;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UILabel *)titleLabel;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)preferredFocusEnvironments;
-(UIProgressView *)progressView;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UILabel *)instructionLabel;
-(NSSet *)learnedActions;
-(void)irLearningManager:(id)arg1 willStartLearningAction:(int)arg2 ;
-(void)irLearningManager:(id)arg1 didLearnAction:(int)arg2 withProgress:(double)arg3 ;
-(void)irLearningManager:(id)arg1 didCompleteLearningAction:(int)arg2 withResult:(BOOL)arg3 error:(id)arg4 ;
-(void)irLearningManager:(id)arg1 didFinishLearningAction:(int)arg2 ;
-(void)irLearningManager:(id)arg1 didFailToStartLearningWithError:(id)arg2 ;
-(void)irLearningManager:(id)arg1 didSaveLearnedActions:(id)arg2 forDeviceWithUUID:(id)arg3 ;
-(void)irLearningManagerDidCancel:(id)arg1 ;
-(void)setLearnedActions:(NSSet *)arg1 ;
-(void)setFocusButton:(UIButton *)arg1 ;
-(UIButton *)focusButton;
-(void)setInstructionLabel:(UILabel *)arg1 ;
-(void)setLearningHeaderStackView:(UIStackView *)arg1 ;
-(UIStackView *)learningHeaderStackView;
-(void)setLearningProgressStackView:(UIStackView *)arg1 ;
-(UIStackView *)learningProgressStackView;
-(void)setButtonImageView:(UIImageView *)arg1 ;
-(UIImageView *)buttonImageView;
-(void)setLearningStackView:(UIStackView *)arg1 ;
-(UIStackView *)learningStackView;
-(void)setBottomTextLabel:(UILabel *)arg1 ;
-(UILabel *)bottomTextLabel;
-(void)_learnPreviousAction:(id)arg1 ;
-(void)setLeftTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_learnNextAction:(id)arg1 ;
-(void)setRightTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(NSUUID *)learnedDeviceUUID;
-(PBSExternalControlIRLearningManager *)learningManager;
-(void)_hideProgressView;
-(void)setLearnedDeviceUUID:(NSUUID *)arg1 ;
-(id)_imageForAction:(int)arg1 ;
-(void)_updateProgressViewWithProgress:(double)arg1 animated:(BOOL)arg2 ;
-(UITapGestureRecognizer *)leftTapGestureRecognizer;
-(UITapGestureRecognizer *)rightTapGestureRecognizer;
-(void)setLearningManager:(PBSExternalControlIRLearningManager *)arg1 ;
@end

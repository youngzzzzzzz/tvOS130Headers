/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:23 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <TVSettings/PBSOSUpdateServiceDelegate.h>

@class TVSUIOSUpdateView, UITapGestureRecognizer, NSString;

@interface TVSettingsOSRestoreViewController : UIViewController <PBSOSUpdateServiceDelegate> {

	BOOL _cancelOnExit;
	TVSUIOSUpdateView* _progressView;
	UITapGestureRecognizer* _menuRecognizer;

}

@property (nonatomic,retain) TVSUIOSUpdateView * progressView;                     //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic) BOOL cancelOnExit;                                    //@synthesize cancelOnExit=_cancelOnExit - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * menuRecognizer;              //@synthesize menuRecognizer=_menuRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UITapGestureRecognizer *)menuRecognizer;
-(void)setMenuRecognizer:(UITapGestureRecognizer *)arg1 ;
-(TVSUIOSUpdateView *)progressView;
-(void)setProgressView:(TVSUIOSUpdateView *)arg1 ;
-(void)_menuButtonAction:(id)arg1 ;
-(void)osUpdateServiceDidStartCheckWithData:(id)arg1 ;
-(void)osUpdateServiceDidFinishCheckWithData:(id)arg1 ;
-(void)osUpdateServiceDidStartDownloadWithData:(id)arg1 ;
-(void)osUpdateServiceDidUpdateDownloadProgressWithData:(id)arg1 ;
-(void)osUpdateServiceDidFinishDownloadWithData:(id)arg1 ;
-(void)osUpdateServiceDidStartRedownloadWithData:(id)arg1 ;
-(void)osUpdateServiceDidStartApplyWithData:(id)arg1 ;
-(void)osUpdateServiceDidUpdateApplyProgressWithData:(id)arg1 ;
-(void)osUpdateServiceDidEncounterSlowUpdateWithData:(id)arg1 ;
-(void)osUpdateServiceDidFinishApplyWithData:(id)arg1 ;
-(BOOL)cancelOnExit;
-(void)setCancelOnExit:(BOOL)arg1 ;
@end

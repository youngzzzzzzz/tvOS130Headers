/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKitCore/UIView.h>
#import <Setup/SATVPulsingAnimationDelegate.h>
#import <Setup/SATVCyclingView.h>

@protocol OS_dispatch_source;
@class NSObject, NSArray, SATVPulsingFooterView, SATVFooterView, NSString;

@interface SATVCyclingFooterView : UIView <SATVPulsingAnimationDelegate, SATVCyclingView> {

	NSObject*<OS_dispatch_source> _autoAdvanceTimer;
	double _autoAdvanceInterval;
	BOOL _manualMode;
	NSArray* _contentStrings;
	NSArray* _languageCodes;
	SATVPulsingFooterView* _firstPulsingFooterView;
	SATVPulsingFooterView* _secondPulsingFooterView;
	SATVFooterView* _manualFooterView;
	unsigned long long _currentStringIndex;

}

@property (nonatomic,retain) NSArray * contentStrings;                                     //@synthesize contentStrings=_contentStrings - In the implementation block
@property (nonatomic,retain) NSArray * languageCodes;                                      //@synthesize languageCodes=_languageCodes - In the implementation block
@property (nonatomic,retain) SATVPulsingFooterView * firstPulsingFooterView;               //@synthesize firstPulsingFooterView=_firstPulsingFooterView - In the implementation block
@property (nonatomic,retain) SATVPulsingFooterView * secondPulsingFooterView;              //@synthesize secondPulsingFooterView=_secondPulsingFooterView - In the implementation block
@property (nonatomic,retain) SATVFooterView * manualFooterView;                            //@synthesize manualFooterView=_manualFooterView - In the implementation block
@property (assign,nonatomic) unsigned long long currentStringIndex;                        //@synthesize currentStringIndex=_currentStringIndex - In the implementation block
@property (assign,nonatomic) BOOL manualMode;                                              //@synthesize manualMode=_manualMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(NSArray *)contentStrings;
-(BOOL)_supportsCycling;
-(BOOL)manualMode;
-(void)_startAutoAdvanceTimer;
-(void)_stopAutoAdvanceTimer;
-(void)_cycleAtBeginTime:(double)arg1 ;
-(void)setManualMode:(BOOL)arg1 ;
-(unsigned long long)currentStringIndex;
-(unsigned long long)_nextUniqueStringIndex;
-(void)setCurrentStringIndex:(unsigned long long)arg1 ;
-(NSArray *)languageCodes;
-(void)didFinishAnimationPulsingAnimation:(id)arg1 ;
-(void)cycleAtBeginTime:(double)arg1 ;
-(void)cycleWithInterval:(double)arg1 ;
-(void)setLanguageCodes:(NSArray *)arg1 ;
-(SATVFooterView *)manualFooterView;
-(SATVPulsingFooterView *)firstPulsingFooterView;
-(SATVPulsingFooterView *)secondPulsingFooterView;
-(id)initWithStrings:(id)arg1 languageCodes:(id)arg2 ;
-(void)setManualAttributedString:(id)arg1 ;
-(void)setContentStrings:(NSArray *)arg1 ;
-(void)setFirstPulsingFooterView:(SATVPulsingFooterView *)arg1 ;
-(void)setSecondPulsingFooterView:(SATVPulsingFooterView *)arg1 ;
-(void)setManualFooterView:(SATVFooterView *)arg1 ;
@end


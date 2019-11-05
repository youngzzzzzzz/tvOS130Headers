/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIInputViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol UIPredictiveViewController;
@class UIViewController, UIView, UITextInputAssistantItem, NSMutableDictionary, TUISystemInputAssistantView, NSString;

@interface UISystemInputAssistantViewController : UIInputViewController <UIPopoverPresentationControllerDelegate> {

	UIViewController*<UIPredictiveViewController> _centerViewController;
	UIView* _popoverSourceView;
	UITextInputAssistantItem* _observedInputAssistantItem;
	NSMutableDictionary* _cachedPredictiveViewControllers;

}

@property (assign,nonatomic,__weak) UIView * popoverSourceView;                                               //@synthesize popoverSourceView=_popoverSourceView - In the implementation block
@property (assign,nonatomic,__weak) UITextInputAssistantItem * observedInputAssistantItem;                    //@synthesize observedInputAssistantItem=_observedInputAssistantItem - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedPredictiveViewControllers;                           //@synthesize cachedPredictiveViewControllers=_cachedPredictiveViewControllers - In the implementation block
@property (nonatomic,retain) UIViewController*<UIPredictiveViewController> centerViewController;              //@synthesize centerViewController=_centerViewController - In the implementation block
@property (nonatomic,readonly) TUISystemInputAssistantView * systemInputAssistantView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_requiresProxyInterface;
+(double)preferredHeightForTraitCollection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)_canShowWhileLocked;
-(UIView *)popoverSourceView;
-(void)setPopoverSourceView:(UIView *)arg1 ;
-(void)setCachedPredictiveViewControllers:(NSMutableDictionary *)arg1 ;
-(BOOL)_isAssistantPreferenceEnabled;
-(UIViewController*<UIPredictiveViewController>)centerViewController;
-(void)automaticallySetCenterViewControllerBasedOnInputDelegate:(id)arg1 ;
-(id)_inputDelegateAsResponder:(id)arg1 ;
-(id)_currentInputDelegate;
-(BOOL)layoutHasBuiltinAssistantView;
-(BOOL)_assistantItemsVisibleForResponder:(id)arg1 ;
-(BOOL)_centerPredictionViewVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(BOOL)shouldBeShownForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(void)_showCandidates;
-(void)_expandBarItems;
-(void)updateCenterViewVisibilityStateForInputDelegate:(id)arg1 ;
-(TUISystemInputAssistantView *)systemInputAssistantView;
-(void)setInputAssistantButtonItemsForResponder:(id)arg1 ;
-(id)predictionViewController;
-(id)candidateViewController;
-(void)setCenterViewController:(UIViewController*<UIPredictiveViewController>)arg1 ;
-(UITextInputAssistantItem *)observedInputAssistantItem;
-(void)setObservedInputAssistantItem:(UITextInputAssistantItem *)arg1 ;
-(NSMutableDictionary *)cachedPredictiveViewControllers;
@end

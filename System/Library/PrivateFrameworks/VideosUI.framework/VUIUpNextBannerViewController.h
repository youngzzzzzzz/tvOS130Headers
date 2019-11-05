/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <VideosUI/__TVShelfViewControllerDelegate.h>
#import <VideosUI/TVMediaProviding.h>
#import <VideosUI/TVAppTemplateImpressionable.h>

@class TVMediaInfo, IKViewElement, _TVShelfViewController, TVObservableEventController, UIView, NSString;

@interface VUIUpNextBannerViewController : UIViewController <__TVShelfViewControllerDelegate, TVMediaProviding, TVAppTemplateImpressionable> {

	unsigned long long _host;
	IKViewElement* _viewElement;
	_TVShelfViewController* _shelfViewController;
	TVMediaInfo* _selectedMediaInfo;
	TVObservableEventController* _observableEventController;

}

@property (nonatomic,retain) IKViewElement * viewElement;                                          //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) _TVShelfViewController * shelfViewController;                         //@synthesize shelfViewController=_shelfViewController - In the implementation block
@property (nonatomic,retain) TVMediaInfo * selectedMediaInfo;                                      //@synthesize selectedMediaInfo=_selectedMediaInfo - In the implementation block
@property (nonatomic,retain) TVObservableEventController * observableEventController;              //@synthesize observableEventController=_observableEventController - In the implementation block
@property (nonatomic,readonly) unsigned long long host;                                            //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) UIView * visualEffectView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)host;
-(void)removeObserver:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(IKViewElement *)viewElement;
-(UIView *)visualEffectView;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(_TVShelfViewController *)shelfViewController;
-(void)setShelfViewController:(_TVShelfViewController *)arg1 ;
-(void)addObserver:(id)arg1 forEvent:(id)arg2 ;
-(void)removeObserver:(id)arg1 forEvent:(id)arg2 ;
-(TVObservableEventController *)observableEventController;
-(TVMediaInfo *)selectedMediaInfo;
-(void)setObservableEventController:(TVObservableEventController *)arg1 ;
-(void)shelfViewController:(id)arg1 didSettleOnItemAtIndexPath:(id)arg2 ;
-(void)shelfViewController:(id)arg1 didPlayItemAtIndexPath:(id)arg2 ;
-(void)shelfViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setSelectedMediaInfo:(TVMediaInfo *)arg1 ;
-(id)initWithHost:(unsigned long long)arg1 ;
-(void)updateWithElement:(id)arg1 ;
-(id)_selectedMediaInfoForEvent:(id)arg1 forElementAtIndex:(long long)arg2 ;
-(id)_focusedMediaInfoForElementAtIndex:(long long)arg1 ;
@end

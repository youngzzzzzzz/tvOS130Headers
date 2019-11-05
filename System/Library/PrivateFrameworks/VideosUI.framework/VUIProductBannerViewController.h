/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <VideosUI/TVAppTemplateImpressionable.h>

@class IKViewElement, VUIProductBannerView, NSString;

@interface VUIProductBannerViewController : UIViewController <TVAppTemplateImpressionable> {

	IKViewElement* _viewElement;
	VUIProductBannerView* _bannerView;

}

@property (nonatomic,retain) VUIProductBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                    //@synthesize viewElement=_viewElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)preferredFocusEnvironments;
-(IKViewElement *)viewElement;
-(VUIProductBannerView *)bannerView;
-(void)setBannerView:(VUIProductBannerView *)arg1 ;
-(void)tv_setShowcaseConfig:(TVShowcaseConfig)arg1 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)_configureViewSubviews;
@end

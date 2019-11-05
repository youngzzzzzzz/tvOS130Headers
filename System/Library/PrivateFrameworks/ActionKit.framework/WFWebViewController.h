/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol WFWebViewControllerDelegate;
@class WKWebView;

@interface WFWebViewController : UIViewController {

	id<WFWebViewControllerDelegate> _delegate;
	WKWebView* _webView;

}

@property (nonatomic,retain) WKWebView * webView;                                          //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) id<WFWebViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<WFWebViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFWebViewControllerDelegate>)arg1 ;
-(void)cancel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)done;
-(WKWebView *)webView;
-(id)initWithWebView:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)updateNavigationItems;
@end

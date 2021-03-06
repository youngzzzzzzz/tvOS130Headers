/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebKitLegacy/WebGeolocationProvider.h>

@class NSString;

@interface WebGeolocationProviderIOS : NSObject <WebGeolocationProvider> {

	RetainPtr<WebGeolocationCoreLocationProvider>* _coreLocationProvider;
	RetainPtr<_WebCoreLocationUpdateThreadingProxy>* _coreLocationUpdateListenerProxy;
	BOOL _enableHighAccuracy;
	BOOL _isSuspended;
	BOOL _shouldResetOnResume;
	HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > >* _webViewsWaitingForCoreLocationAuthorization;
	HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> >* _pendingInitialPositionWebView;
	HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> >* _registeredWebViews;
	HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> >* _trackedWebViews;
	RetainPtr<NSTimer>* _sendLastPositionAsynchronouslyTimer;
	RetainPtr<WebGeolocationPosition>* _lastPosition;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedGeolocationProvider;
-(void)dealloc;
-(void)resume;
-(void)suspend;
-(void)registerWebView:(id)arg1 ;
-(void)unregisterWebView:(id)arg1 ;
-(void)setEnableHighAccuracy:(BOOL)arg1 ;
-(void)initializeGeolocationForWebView:(id)arg1 listener:(id)arg2 ;
-(id)lastPosition;
-(void)geolocationAuthorizationDenied;
-(void)geolocationAuthorizationGranted;
-(void)resetGeolocation;
-(void)positionChanged:(id)arg1 ;
-(void)errorOccurred:(id)arg1 ;
-(void)_handlePendingInitialPosition:(id)arg1 ;
-(void)stopTrackingWebView:(id)arg1 ;
@end


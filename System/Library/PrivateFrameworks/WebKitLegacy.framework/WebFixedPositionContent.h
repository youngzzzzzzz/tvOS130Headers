/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@interface WebFixedPositionContent : NSObject {

	WebFixedPositionContentData* _private;

}
-(void)dealloc;
-(void)setViewportConstrainedLayers:(HashMap<CALayer *, std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> >, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> > > >*)arg1 stickyContainerMap:(const HashMap<CALayer *, CALayer *, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<CALayer *> >*)arg2 ;
-(id)initWithWebView:(id)arg1 ;
-(void)scrollOrZoomChanged:(CGRect)arg1 ;
-(void)overflowScrollPositionForLayer:(id)arg1 changedTo:(CGPoint)arg2 ;
-(void)didFinishScrollingOrZooming;
-(BOOL)hasFixedOrStickyPositionLayers;
@end

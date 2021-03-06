/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVMLKit/CAAnimationDelegate.h>

@protocol OS_dispatch_group;
@class __TVImageLoaderQueue, NSObject, UIVisualEffectView, NSArray, NSString;

@interface _TVScrollingGridView : UIView <CAAnimationDelegate> {

	__TVImageLoaderQueue* _loaderQueue;
	BOOL _isAnimating;
	NSObject*<OS_dispatch_group> _animationGroup;
	UIVisualEffectView* _visualEffectView;
	NSArray* _imageProxies;
	NSArray* _imageViews;
	CGSize _cellSize;

}

@property (nonatomic,copy) NSArray * imageViews;                    //@synthesize imageViews=_imageViews - In the implementation block
@property (assign,nonatomic) CGSize cellSize;                       //@synthesize cellSize=_cellSize - In the implementation block
@property (nonatomic,copy) NSArray * imageProxies;                  //@synthesize imageProxies=_imageProxies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resume;
-(void)pause;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)cellSize;
-(void)layoutSubviews;
-(void)setCellSize:(CGSize)arg1 ;
-(NSArray *)imageProxies;
-(void)setImageProxies:(NSArray *)arg1 ;
-(void)_stopAnimating;
-(void)setImageViews:(NSArray *)arg1 ;
-(void)_imageWithImages:(id)arg1 cellSize:(CGSize)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_startAnimating;
-(NSArray *)imageViews;
@end


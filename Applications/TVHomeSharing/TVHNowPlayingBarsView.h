/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:49:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVHomeSharing.app/TVHomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharing/TVHomeSharing-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface TVHNowPlayingBarsView : UIView {

	float _repeatCount;
	NSArray* _barViews;

}

@property (nonatomic,copy) NSArray * barViews;               //@synthesize barViews=_barViews - In the implementation block
@property (assign,nonatomic) float repeatCount;              //@synthesize repeatCount=_repeatCount - In the implementation block
-(float)repeatCount;
-(void)setRepeatCount:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)stopAnimating;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_addAnimations;
-(void)_removeAnimations;
-(void)_addAnimationsWithRepeatCount:(float)arg1 ;
-(void)resumeAnimating;
-(void)updateColorsWithUserInterfaceStyle:(long long)arg1 ;
-(void)_setBarViewHeights:(double)arg1 ;
-(NSArray *)barViews;
-(void)setBarViews:(NSArray *)arg1 ;
@end


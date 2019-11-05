/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class TVLBasketballScoreboardView, TVLBasketballCourtView;

@interface TVLBasketballPreviewView : UIView {

	TVLBasketballScoreboardView* _scoreboardView;
	TVLBasketballCourtView* _courtView;

}

@property (nonatomic,retain) TVLBasketballScoreboardView * scoreboardView;              //@synthesize scoreboardView=_scoreboardView - In the implementation block
@property (nonatomic,retain) TVLBasketballCourtView * courtView;                        //@synthesize courtView=_courtView - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(void)layoutSubviews;
-(TVLBasketballScoreboardView *)scoreboardView;
-(void)setScoreboardView:(TVLBasketballScoreboardView *)arg1 ;
-(TVLBasketballCourtView *)courtView;
-(void)setCourtView:(TVLBasketballCourtView *)arg1 ;
@end

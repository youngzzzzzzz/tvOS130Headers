/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUIScorecardViewDelegate <NSObject>
@optional
-(id)backgroundImageForScorecardViewMaterial:(id)arg1;
-(int)backgroundBlendModeForScoreValueInRow:(long long)arg1 atIndex:(long long)arg2;

@required
-(long long)styleForScorecardView:(id)arg1;
-(long long)numberOfRowsInScorecardView:(id)arg1;
-(long long)numberOfScoreValuesForScorecardView:(id)arg1 inRow:(long long)arg2;
-(id)scoreValue:(id)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;
-(double)maximumWidthForScorecardView:(id)arg1;

@end

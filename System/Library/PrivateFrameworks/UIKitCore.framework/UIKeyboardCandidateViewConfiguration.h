/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIKeyboardCandidateViewConfiguration : NSObject {

	BOOL _darkKeyboard;
	BOOL _shouldAlwaysShowSortControl;
	BOOL _shouldUsePredictionViewSecureRenderTraits;

}

@property (assign,nonatomic) BOOL darkKeyboard;                                                //@synthesize darkKeyboard=_darkKeyboard - In the implementation block
@property (nonatomic,readonly) unsigned long long rowsToExtend; 
@property (nonatomic,readonly) unsigned long long maxNumberOfProactiveCandidates; 
@property (nonatomic,readonly) BOOL shouldResizeKeyboardBackdrop; 
@property (nonatomic,readonly) BOOL shouldAlwaysShowSortControl;                               //@synthesize shouldAlwaysShowSortControl=_shouldAlwaysShowSortControl - In the implementation block
@property (nonatomic,readonly) BOOL shouldUsePredictionViewSecureRenderTraits;                 //@synthesize shouldUsePredictionViewSecureRenderTraits=_shouldUsePredictionViewSecureRenderTraits - In the implementation block
@property (nonatomic,readonly) BOOL willCoverKeyboardLayout; 
@property (nonatomic,readonly) BOOL allowsPullDownGesture; 
@property (nonatomic,readonly) CGSize preferredInlineFloatingViewSize; 
+(id)configuration;
-(id)initialState;
-(id)extendedState;
-(id)extendedScrolledState;
-(BOOL)darkKeyboard;
-(void)setDarkKeyboard:(BOOL)arg1 ;
-(BOOL)shouldAlwaysShowSortControl;
-(unsigned long long)rowsToExtend;
-(CGSize)preferredInlineFloatingViewSize;
-(BOOL)shouldResizeKeyboardBackdrop;
-(BOOL)willCoverKeyboardLayout;
-(BOOL)allowsPullDownGesture;
-(unsigned long long)maxNumberOfProactiveCandidates;
-(BOOL)shouldUsePredictionViewSecureRenderTraits;
-(double)candidateDefaultFontSize;
-(id)candidateFontWithSize:(double)arg1 ;
-(BOOL)usesReducedFontSize;
@end


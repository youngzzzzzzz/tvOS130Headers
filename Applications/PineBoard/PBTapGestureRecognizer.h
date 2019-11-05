/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:27 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITapGestureRecognizer.h>

@interface PBTapGestureRecognizer : UITapGestureRecognizer {

	BOOL _recognizeOnPressDown;
	unsigned long long _numberOfTaps;

}

@property (nonatomic,readonly) unsigned long long numberOfTaps;                               //@synthesize numberOfTaps=_numberOfTaps - In the implementation block
@property (assign,nonatomic,__weak) id<PBTapGestureRecognizerDelegate> delegate; 
@property (assign,nonatomic) BOOL recognizeOnPressDown;                                       //@synthesize recognizeOnPressDown=_recognizeOnPressDown - In the implementation block
-(void)reset;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)recognizeOnPressDown;
-(void)setRecognizeOnPressDown:(BOOL)arg1 ;
-(unsigned long long)numberOfTaps;
@end

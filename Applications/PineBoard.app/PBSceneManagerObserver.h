/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:27 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBSceneManagerObserver <NSObject>
@optional
-(void)sceneManager:(id)arg1 didChangeFocusFromScene:(id)arg2 toScene:(id)arg3;
-(void)sceneManager:(id)arg1 didChangeIdleTimerStateForScene:(id)arg2;
-(void)sceneManager:(id)arg1 didChangeHiliteStateForScene:(id)arg2;
-(void)sceneManager:(id)arg1 defaultKioskScene:(id)arg2 didUpdateAppGridHidden:(BOOL)arg3;

@end

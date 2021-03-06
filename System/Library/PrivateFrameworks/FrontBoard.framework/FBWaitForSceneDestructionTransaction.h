/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>
#import <FrontBoard/FBSceneManagerObserver.h>

@class FBSceneManager, FBScene, NSString;

@interface FBWaitForSceneDestructionTransaction : FBTransaction <FBSceneManagerObserver> {

	FBSceneManager* _sceneManager;
	FBScene* _sceneToWaitForDeath;

}

@property (nonatomic,readonly) FBScene * scene;                     //@synthesize sceneToWaitForDeath=_sceneToWaitForDeath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(void)_didComplete;
-(FBScene *)scene;
-(id)initWithScene:(id)arg1 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:30 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSTransaction.h>

@class FBSSceneIdentity;

@interface PBForegroundSceneTransaction : BSTransaction {

	BOOL _backgroundAllOtherScenes;
	FBSSceneIdentity* _sceneIdentity;

}

@property (nonatomic,readonly) FBSSceneIdentity * sceneIdentity;              //@synthesize sceneIdentity=_sceneIdentity - In the implementation block
@property (nonatomic,readonly) BOOL backgroundAllOtherScenes;                 //@synthesize backgroundAllOtherScenes=_backgroundAllOtherScenes - In the implementation block
-(void)_begin;
-(BOOL)backgroundAllOtherScenes;
-(id)initWithSceneIdentity:(id)arg1 backgroundAllOtherScenes:(BOOL)arg2 ;
-(FBSSceneIdentity *)sceneIdentity;
@end


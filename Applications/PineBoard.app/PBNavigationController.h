/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:29 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@interface PBNavigationController : UINavigationController {

	/*^block*/id _dismissLastViewControllerBlock;

}

@property (nonatomic,copy) id dismissLastViewControllerBlock;              //@synthesize dismissLastViewControllerBlock=_dismissLastViewControllerBlock - In the implementation block
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_delegateDidDismissViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_lastViewController;
-(id)dismissLastViewControllerBlock;
-(void)setDismissLastViewControllerBlock:(id)arg1 ;
@end

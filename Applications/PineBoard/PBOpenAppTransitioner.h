/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:28 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PBOpenAppTransition;


@protocol PBOpenAppTransitioner <NSObject>
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) PBOpenAppTransition * activeTransition; 
@required
-(void)removeObserver:(id)arg1;
-(void)addObserver:(id)arg1;
-(BOOL)isTransitioning;
-(PBOpenAppTransition *)activeTransition;
-(void)handleFocusedAppRequestDeactivationFromFailure:(BOOL)arg1;
-(void)addOpenAppTransition:(id)arg1;

@end


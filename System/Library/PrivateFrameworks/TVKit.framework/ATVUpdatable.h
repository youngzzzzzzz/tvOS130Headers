/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATVUpdatable
@optional
-(id)currentState;
-(void)updateWithFeedElement:(id)arg1 state:(id)arg2 forceReload:(BOOL)arg3;
-(void)restoreState:(id)arg1;
-(void)reloadPage;

@required
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1;

@end


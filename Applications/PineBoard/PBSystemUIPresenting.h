/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:28 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBSystemUIPresenting <NSObject>
@required
-(void)presentSystemUI:(id)arg1 withContext:(id)arg2 animated:(BOOL)arg3 transitionBlock:(/*^block*/id)arg4;
-(void)dismissSystemUIAtLevel:(long long)arg1 animated:(BOOL)arg2 transitionBlock:(/*^block*/id)arg3;
-(void)hideSystemUIAtLevel:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)unhideSystemUIAtLevel:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)invalidateSystemUIAtLevel:(long long)arg1;

@end


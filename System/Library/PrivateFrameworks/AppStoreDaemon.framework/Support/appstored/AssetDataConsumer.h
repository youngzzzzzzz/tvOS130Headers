/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AssetDataConsumer <NSObject>
@required
-(void)resetWithCompletionHandler:(/*^block*/id)arg1;
-(void)finishWithCompletionHandler:(/*^block*/id)arg1;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1;
-(void)consumeData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)truncateWithCompletionHandler:(/*^block*/id)arg1;
-(void)suspendWithCompletionHandler:(/*^block*/id)arg1;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DNDSSyncService <NSObject>
@property (assign,nonatomic,__weak) id<DNDSSyncServiceDelegate> delegate; 
@required
-(id<DNDSSyncServiceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)resume;
-(void)sendMessage:(id)arg1 withVersionNumber:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;

@end

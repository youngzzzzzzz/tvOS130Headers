/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ODRiTunesStoreDaemonProtocol <NSObject>
@required
-(void)applicationDownloadInitiatedForApplication:(id)arg1 manifestURL:(id)arg2 reason:(long long)arg3 jobID:(long long)arg4 replyBlock:(/*^block*/id)arg5;
-(void)pauseDownloadsForApplicationWithAdamID:(id)arg1 replyBlock:(/*^block*/id)arg2;
-(void)resumeDownloadsForApplicationWithAdamID:(id)arg1 replyBlock:(/*^block*/id)arg2;
-(void)cancelDownloadsForApplicationWithAdamID:(id)arg1 replyBlock:(/*^block*/id)arg2;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/DownloadAgentTransitionContext.h>

@class NSError, NSNumber;

@interface DownloadStateRestartingAgentTransitionContext : DownloadAgentTransitionContext {

	long long _assetPID;
	NSError* _error;
	NSNumber* _reason;

}
+(id)forAgentState:(id)arg1 ;
-(BOOL)applyToEntity:(id)arg1 inTransaction:(id)arg2 ;
-(id)__apply__error:(id)arg1 retryAssetPID:(long long)arg2 ;
-(id)__apply__error:(id)arg1 blockAssetPID:(long long)arg2 withReason:(id)arg3 ;
@end


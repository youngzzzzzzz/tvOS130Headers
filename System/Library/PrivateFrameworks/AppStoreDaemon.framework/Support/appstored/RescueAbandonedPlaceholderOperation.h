/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/Task.h>

@class NSString;

@interface RescueAbandonedPlaceholderOperation : Task {

	NSString* _bundleID;
	/*^block*/id _outputBlock;

}

@property (nonatomic,copy) id outputBlock; 
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)initWithBundleID:(id)arg1 ;
-(id)_fetchAppProxyForBundleID:(id)arg1 error:(id*)arg2 ;
-(BOOL)_canRescueInstallTypeForBundleID:(id)arg1 proxy:(id)arg2 error:(id*)arg3 ;
-(void)_attemptRescueForBundleID:(id)arg1 ;
@end

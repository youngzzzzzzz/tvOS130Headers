/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CompatibilityUpdateRequest : NSObject {

	NSArray* _bundleIDs;
	BOOL _userInitiated;

}
+(BOOL)_isOSThinnedVariantID:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cancelUpdatePendingForCompanionApp:(id)arg1 ;
-(id)_appleIDForApp:(id)arg1 error:(id*)arg2 ;
-(void)_notifyCompatibilityUpdateUnavailableForBundleID:(id)arg1 ;
-(id)initWithBundleIDs:(id)arg1 userInitiated:(BOOL)arg2 ;
@end


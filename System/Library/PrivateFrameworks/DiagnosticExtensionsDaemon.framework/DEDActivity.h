/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_activity;
@class NSObject;

@interface DEDActivity : NSObject {

	NSObject*<OS_os_activity> _cleanup;

}

@property (retain) NSObject*<OS_os_activity> cleanup;              //@synthesize cleanup=_cleanup - In the implementation block
+(id)sharedInstance;
-(NSObject*<OS_os_activity>)cleanup;
-(id)currentCleanupActivity;
-(void)setCleanup:(NSObject*<OS_os_activity>)arg1 ;
-(id)newCleanupActivity;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/PlugIns/RPBroadcastActivityViewControllerExtension_tvOS.appex/RPBroadcastActivityViewControllerExtension_tvOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIApplicationExtensionActivity.h>

@class NSExtension;

@interface RPStreamingActivity : UIApplicationExtensionActivity {

	NSExtension* _applicationExtension;

}
+(long long)activityCategory;
-(id)activityType;
-(id)activityImage;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)initWithApplicationExtension:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)applicationExtension;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:30 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBAppInfoStoreDynamicStateDataSource
@required
-(void)invalidateStateForApplicationWithBundleIdentifier:(id)arg1;
-(void)setRecentlyUpdated:(BOOL)arg1 forApplicationWithBundleIdentifier:(id)arg2;
-(id)badgeValueForApplication:(id)arg1;
-(BOOL)isBadgeEnabledForApplication:(id)arg1;
-(BOOL)isApplicationRecentlyUpdated:(id)arg1;
-(BOOL)isApplicationCacheDeleting:(id)arg1;
-(void)setBadgeValue:(id)arg1 forApplicationWithBundleIdentifier:(id)arg2;
-(void)setBadgeEnabled:(BOOL)arg1 forApplicationWithBundleIdentifier:(id)arg2;
-(void)setCacheDeleting:(BOOL)arg1 forApplicationWithBundleIdentifier:(id)arg2;

@end

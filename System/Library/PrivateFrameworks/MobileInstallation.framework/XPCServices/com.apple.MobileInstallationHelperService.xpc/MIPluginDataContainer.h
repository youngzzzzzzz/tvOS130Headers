/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:46:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/XPCServices/com.apple.MobileInstallationHelperService.xpc/com.apple.MobileInstallationHelperService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.MobileInstallationHelperService/MIDataContainer.h>

@class NSString;

@interface MIPluginDataContainer : MIDataContainer {

	NSString* _parentBundleID;

}

@property (nonatomic,copy) NSString * parentBundleID;              //@synthesize parentBundleID=_parentBundleID - In the implementation block
+(id)pluginDataContainerWithIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2 created:(BOOL*)arg3 error:(id*)arg4 ;
-(NSString *)parentBundleID;
-(void)setParentBundleID:(NSString *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SharingXPCServices.framework/XPCServices/SharingXPCHelper.xpc/SharingXPCHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SharingXPCHelper/SharingXPCHelper-Structs.h>
#import <SharingXPCHelper/SharingXPCHelperProtocol.h>

@protocol OS_os_transaction;
@class NSObject, UISUIActivityViewControllerConfiguration;

@interface SharingXPCHelper : NSObject <SharingXPCHelperProtocol> {

	NSObject*<OS_os_transaction> _transaction;
	unsigned long long _intervalID;
	UISUIActivityViewControllerConfiguration* _uiConfig;

}
-(id)init;
-(void)setSessionKeepAliveTransactionIdentifier:(id)arg1 ;
-(void)monogramImageDataForContactSync:(id)arg1 style:(long long)arg2 diameter:(double)arg3 monogramsAsFlatImages:(BOOL)arg4 shouldCache:(BOOL)arg5 replyHandler:(/*^block*/id)arg6 ;
-(void)groupMonogramImageDataForContactsSync:(id)arg1 style:(long long)arg2 diameter:(double)arg3 monogramsAsFlatImages:(BOOL)arg4 shouldCache:(BOOL)arg5 replyHandler:(/*^block*/id)arg6 ;
-(void)urlToCGImgDataForCallHandoffIconWithAppIconImageData:(id)arg1 contact:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)CGImgDataForUIActivityTitle:(id)arg1 foregroundColor:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)CGImgDataForNameLabelWithString:(id)arg1 textColor:(id)arg2 maxNumberOfLines:(unsigned long long)arg3 isAirDrop:(BOOL)arg4 ignoreNameWrapping:(BOOL)arg5 replyHandler:(/*^block*/id)arg6 ;
-(void)CGImgDataForActivityMoreListEntryForActivityTitle:(id)arg1 labelColor:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)CGImgDataForActionPlatterWithTitle:(id)arg1 tintColor:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)CGImgDataForNearbyBadgeWithCount:(long long)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)updateShareSheetHostConfiguration:(id)arg1 ;
-(id)badgeNumberFormatter;
-(CGSize)nameLabelSize;
-(id)cappedOrthoLabelFont;
-(BOOL)orthoAX;
-(long long)hostNaturalTextAlignment;
-(double)platterMaxWidth;
-(double)morePlatterMaxWidth;
-(BOOL)actionsAX;
@end


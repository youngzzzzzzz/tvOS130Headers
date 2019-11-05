/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <PhotoLibraryServices/PLAssetsdNotificationServiceProtocol.h>

@class NSString;

@interface PLAssetsdNotificationService : PLAbstractLibraryServicesManagerService <PLAssetsdNotificationServiceProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userViewedNotificationWithAlbumCloudGUID:(id)arg1 ;
-(void)noteInterestingMemoryAlertWithMemoryUUID:(id)arg1 notificationDeliveryDate:(id)arg2 ;
-(void)noteInterestingMemoryAlertViewedWithUUID:(id)arg1 ;
-(void)respondToPhotoStreamInvitationWithAlbumCloudGUID:(id)arg1 acceptInvitation:(BOOL)arg2 ;
-(void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1 ;
-(void)noteSuggestedCMMAlertWithCMMUUID:(id)arg1 notificationDeliveryDate:(id)arg2 ;
-(void)noteSuggestedCMMAlertViewedWithCMMUUID:(id)arg1 ;
-(void)noteGoingToExpireCMMsAlertWithCMMUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 ;
@end

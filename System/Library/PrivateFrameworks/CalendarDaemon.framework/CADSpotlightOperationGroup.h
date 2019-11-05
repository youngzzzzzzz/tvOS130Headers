/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CADOperationGroup.h>

@interface CADSpotlightOperationGroup : CADOperationGroup
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
+(id)whitelistedBundles;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
-(void)CADPushItemsToSpotlight:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_gatherAllCalendarItemUUIDs;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <CalendarDaemon/CADCalendarItemInterface.h>

@interface CADCalendarItemOperationGroup : CADOperationGroup <CADCalendarItemInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(id)_resultsFilteredForTCCAccess:(id)arg1 ;
-(id)_resultsFilteredForJunkEvents:(id)arg1 ;
-(void)CADDatabaseGetCalendarItemWithUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(id)arg1 inCalendar:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADDatabaseFetchCalendarItemsWithPredicate:(id)arg1 entityType:(int)arg2 fetchIdentifier:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned)arg1 ;
-(void)CADDatabaseExportCalendarItemAsICS:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetContactIdentifierForCalendarItem:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseAddContactWithIdentifier:(id)arg1 forCalendarItem:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)CADDatabaseRemoveContactIdentifier:(id)arg1 forCalendarItem:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)CADDatabaseCountEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)CADDatabaseFetchEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(/*^block*/id)arg3 ;
@end

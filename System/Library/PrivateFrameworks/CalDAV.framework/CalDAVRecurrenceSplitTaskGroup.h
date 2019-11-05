/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSArray;

@interface CalDAVRecurrenceSplitTaskGroup : CoreDAVTaskGroup {

	NSURL* _folderURL;
	NSArray* _actions;

}

@property (assign,nonatomic,__weak) id<CalDAVRecurrenceSplitTaskGroupDelegate> delegate; 
-(void)startTaskGroup;
-(id)initWithCalendar:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3 ;
@end

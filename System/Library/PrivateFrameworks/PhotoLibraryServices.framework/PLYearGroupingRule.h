/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLHighlightItemClustererRule.h>

@class NSCalendar, NSString;

@interface PLYearGroupingRule : NSObject <PLHighlightItemClustererRule> {

	NSCalendar* _calendar;

}

@property (nonatomic,readonly) NSCalendar * calendar;               //@synthesize calendar=_calendar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSCalendar *)calendar;
-(void)titlesForHighlightItemList:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(void)titlesForHighlightItemList:(id)arg1 forceUpdateLocale:(BOOL)arg2 resultBlock:(/*^block*/id)arg3 ;
-(BOOL)highlightItem:(id)arg1 belongsToHighlightItemList:(id)arg2 ;
-(BOOL)highlightItemList:(id)arg1 canBeMergedWithOtherHighlightItemList:(id)arg2 ;
-(unsigned long long)dominantYearForStartDate:(id)arg1 endDate:(id)arg2 ;
@end


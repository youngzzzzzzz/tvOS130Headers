/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <ScreenTimeCore/STSerializableManagedObject.h>
#import <ScreenTimeCore/STSyncableSubObject.h>

@class STBlueprint, NSArray, NSNumber, STBlueprintUsageLimitScheduleRepresentation, NSString;

@interface STBlueprintUsageLimit : NSManagedObject <STSerializableManagedObject, STSyncableSubObject>

@property (assign,nonatomic) double day0Limit; 
@property (assign,nonatomic) double day1Limit; 
@property (assign,nonatomic) double day2Limit; 
@property (assign,nonatomic) double day3Limit; 
@property (assign,nonatomic) double day4Limit; 
@property (assign,nonatomic) double day5Limit; 
@property (assign,nonatomic) double day6Limit; 
@property (nonatomic,readonly) STBlueprint * blueprint; 
@property (nonatomic,copy) NSArray * applicationIdentifiers; 
@property (nonatomic,copy) NSArray * categoryIdentifiers; 
@property (nonatomic,copy) NSArray * websiteIdentifiers; 
@property (nonatomic,retain) NSNumber * notificationTimeInterval; 
@property (nonatomic,retain) STBlueprintUsageLimitScheduleRepresentation * budgetLimitScheduleRepresentation; 
@property (nonatomic,copy) NSString * usageItemType; 
@property (nonatomic,copy) NSArray * itemIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<STSerializableManagedObject> syncableRootObject; 
+(id)limitKeyPaths;
+(id)keyPathsForValuesAffectingBudgetLimitScheduleRepresentation;
-(id)dictionaryRepresentation;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(STBlueprintUsageLimitScheduleRepresentation *)budgetLimitScheduleRepresentation;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(void)setApplicationIdentifiers:(NSArray *)arg1 ;
-(void)setWebsiteIdentifiers:(NSArray *)arg1 ;
-(void)setCategoryIdentifiers:(NSArray *)arg1 ;
-(void)setUsageItemType:(NSString *)arg1 ;
-(void)setBudgetLimit:(double)arg1 forDay:(unsigned long long)arg2 ;
-(void)setBudgetLimit:(double)arg1 ;
-(id<STSerializableManagedObject>)syncableRootObject;
-(void)_usageLimitDidChangeFromOldApplicationIdentifiers:(id)arg1 oldCategoryIdentifiers:(id)arg2 oldWebDomains:(id)arg3 oldItemIdentifiers:(id)arg4 oldItemType:(id)arg5 toNewApplicationIdentifiers:(id)arg6 newCategoryIdentifiers:(id)arg7 newWebDomains:(id)arg8 newItemIdentifiers:(id)arg9 newItemType:(id)arg10 ;
-(void)setBudgetLimitScheduleRepresentation:(STBlueprintUsageLimitScheduleRepresentation *)arg1 ;
@end


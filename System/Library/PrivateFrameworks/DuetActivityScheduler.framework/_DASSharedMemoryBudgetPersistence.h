/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivityScheduler/DuetActivityScheduler-Structs.h>
#import <DuetActivityScheduler/_DASBudgetPersisting.h>

@class NSMutableDictionary, NSString;

@interface _DASSharedMemoryBudgetPersistence : NSObject <_DASBudgetPersisting> {

	SCD_Struct_DA3* _currentData;
	NSMutableDictionary* _budgetToIndex;

}

@property (nonatomic,retain) NSMutableDictionary * budgetToIndex;              //@synthesize budgetToIndex=_budgetToIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)persistence;
+(id)log;
-(id)init;
-(NSMutableDictionary *)budgetToIndex;
-(id)validatedStringFromStoredValue:(char*)arg1 withAllowedNames:(id)arg2 ;
-(id)loadBudgetsWithExpectedNames:(id)arg1 ;
-(void)saveBudgets:(id)arg1 ;
-(void)updateBudget:(id)arg1 ;
-(void)saveModulationDate:(id)arg1 ;
-(id)lastModulationDate;
-(void)setBudgetToIndex:(NSMutableDictionary *)arg1 ;
@end

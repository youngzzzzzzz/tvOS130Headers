/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <appstored/NSCopying.h>

@class NSMutableDictionary, NSDictionary;

@interface SQLiteMemoryEntity : NSObject <NSCopying> {

	long long _databaseID;
	NSMutableDictionary* _propertyValues;
	NSMutableDictionary* _externalPropertyValues;

}

@property (assign,nonatomic) long long databaseID;                                      //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * propertyValues;                      //@synthesize propertyValues=_propertyValues - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * externalPropertyValues;              //@synthesize externalPropertyValues=_externalPropertyValues - In the implementation block
+(id)defaultProperties;
+(Class)databaseEntityClass;
+(id)queryOnConnection:(id)arg1 predicate:(id)arg2 ;
+(id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 ;
+(id)anyOnConnection:(id)arg1 predicate:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)valueForProperty:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)valueForExternalProperty:(id)arg1 ;
-(void)setExternalValuesWithDictionary:(id)arg1 ;
-(void)setValuesWithDictionary:(id)arg1 ;
-(void)setDatabaseID:(long long)arg1 ;
-(void)reloadFromDatabaseEntity:(id)arg1 properties:(id)arg2 ;
-(void)setValues:(id*)arg1 forProperties:(const id*)arg2 count:(long long)arg3 ;
-(void)setValues:(id*)arg1 forExternalProperties:(const id*)arg2 count:(long long)arg3 ;
-(long long)databaseID;
-(NSDictionary *)propertyValues;
-(NSDictionary *)externalPropertyValues;
-(id)initWithDatabaseEntity:(id)arg1 properties:(id)arg2 ;
-(void)setValue:(id)arg1 forExternalProperty:(id)arg2 ;
-(id)initWithPropertyValues:(id)arg1 ;
-(id)stringValueForProperty:(id)arg1 ;
-(long long)integerValueForProperty:(id)arg1 ;
-(BOOL)boolValueForProperty:(id)arg1 ;
-(id)numberValueForProperty:(id)arg1 ;
-(id)uuidValueForProperty:(id)arg1 ;
-(id)urlValueForProperty:(id)arg1 ;
@end


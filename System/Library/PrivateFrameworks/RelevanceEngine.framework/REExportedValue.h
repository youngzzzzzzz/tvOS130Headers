/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface REExportedValue : NSObject
+(id)exportedValueForObject:(id)arg1 ;
+(id)_exportedValueForTable:(id)arg1 ;
+(id)exportedValueForString:(id)arg1 ;
+(id)exportedValueForNumber:(id)arg1 ;
+(id)exportedValueForArray:(id)arg1 ;
+(id)exportedValueForDictionary:(id)arg1 ;
+(id)exportedValueForDate:(id)arg1 ;
-(unsigned long long)type;
-(id)stringValue;
-(id)dateValue;
-(id)arrayValue;
-(id)dictionaryValue;
-(id)numberValue;
-(id)objectValue;
-(unsigned long long)propertyCount;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldEncodeProperty:(id)arg1 ;
-(id)exportedValueForKey:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/NSFastEnumeration.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSArray;

@interface IMOrderedMutableDictionary : NSObject <NSFastEnumeration> {

	NSMutableDictionary* _dictionary;
	NSMutableOrderedSet* _mutableOrderedSet;
	NSArray* _orderedItems;

}

@property (readonly) unsigned long long count; 
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_IM9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)containsKey:(id)arg1 ;
-(id)orderedObjects;
-(void)setOrderedObject:(id)arg1 forKey:(id)arg2 ;
-(id)orderedObjectForKey:(id)arg1 ;
-(void)removeOrderedObjectForKey:(id)arg1 ;
-(BOOL)containsOrderedObject:(id)arg1 ;
@end


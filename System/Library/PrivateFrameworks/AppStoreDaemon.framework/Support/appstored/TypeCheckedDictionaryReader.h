/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/TypeCheckedAbstractReader.h>

@class NSDictionary, NSMutableDictionary;

@interface TypeCheckedDictionaryReader : TypeCheckedAbstractReader {

	NSDictionary* _dictionary;
	NSMutableDictionary* _keyPathCache;

}
-(id)initWithDictionary:(id)arg1 ;
-(id)valueOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)valueOfClass:(Class)arg1 forKeyPath:(id)arg2 ;
@end


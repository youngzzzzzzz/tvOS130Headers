/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLDeferredLogFormatter : NSObject {

	NSMutableArray* _entries;

}
+(id)_serializableDictionaryForEntry:(id)arg1 ;
+(id)_entityDescriptionForContext:(long long)arg1 ;
+(id)_logTypeForContext:(long long)arg1 ;
+(BOOL)_isManagedObjectPointerForContext:(long long)arg1 ;
-(id)init;
-(id)stringWithFormat:(long long)arg1 ;
-(void)clear;
-(void)addLogWithContext:(long long)arg1 timestamp:(double)arg2 pointer:(unsigned long long)arg3 ;
-(id)_formattedStringForPrinting;
-(id)_JSONStringPretty:(BOOL)arg1 ;
-(id)_plistString;
@end

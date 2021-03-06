/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:16:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/lib/libprequelite.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libprequelite.dylib/libprequelite.dylib-Structs.h>
#import <libprequelite.dylib/PQLNameInjectionBase.h>
#import <libprequelite.dylib/PQLInjecting.h>

@class NSMutableArray, NSString, NSData;

@interface PQLFormatInjection : PQLNameInjectionBase <PQLInjecting> {

	NSMutableArray* _binds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * sql; 
+(id)formatInjection:(id)arg1 ;
-(NSString *)description;
-(id)initWithFormat:(id)arg1 arguments:(char*)arg2 ;
-(int)bindWithStatement:(sqlite3_stmtRef)arg1 startingAtIndex:(int)arg2 ;
-(id)bindValuesToKeepAlive;
@end


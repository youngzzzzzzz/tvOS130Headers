/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSString, NSArray;

@interface OSLogMessagePlaceholder : NSObject {

	os_log_fmt_cspec_s* _placeholder;
	NSString* _placeholderString;
	NSArray* _placeholderTokens;

}

@property (nonatomic,readonly) NSString * rawString; 
@property (nonatomic,readonly) NSArray * tokens; 
@property (nonatomic,readonly) NSString * typeNamespace; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int precision; 
-(void)dealloc;
-(NSString *)type;
-(int)width;
-(int)precision;
-(NSArray *)tokens;
-(NSString *)rawString;
-(id)initWithPlaceholderStruct:(os_log_fmt_cspec_s*)arg1 ;
-(NSString *)typeNamespace;
@end

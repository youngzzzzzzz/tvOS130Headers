/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContentKit/ContentKit-Structs.h>
@class NSString, NSMutableArray;

@interface NBNumberFormat : NSObject {

	BOOL _nationalPrefixOptionalWhenFormatting;
	NSString* _pattern;
	NSString* _format;
	NSMutableArray* _leadingDigitsPatterns;
	NSString* _nationalPrefixFormattingRule;
	NSString* _domesticCarrierCodeFormattingRule;

}

@property (nonatomic,retain) NSString * pattern;                                        //@synthesize pattern=_pattern - In the implementation block
@property (nonatomic,retain) NSString * format;                                         //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSMutableArray * leadingDigitsPatterns;                    //@synthesize leadingDigitsPatterns=_leadingDigitsPatterns - In the implementation block
@property (nonatomic,retain) NSString * nationalPrefixFormattingRule;                   //@synthesize nationalPrefixFormattingRule=_nationalPrefixFormattingRule - In the implementation block
@property (assign,nonatomic) BOOL nationalPrefixOptionalWhenFormatting;                 //@synthesize nationalPrefixOptionalWhenFormatting=_nationalPrefixOptionalWhenFormatting - In the implementation block
@property (nonatomic,retain) NSString * domesticCarrierCodeFormattingRule;              //@synthesize domesticCarrierCodeFormattingRule=_domesticCarrierCodeFormattingRule - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)pattern;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(void)setPattern:(NSString *)arg1 ;
-(id)initWithPattern:(id)arg1 withFormat:(id)arg2 withLeadingDigitsPatterns:(id)arg3 withNationalPrefixFormattingRule:(id)arg4 whenFormatting:(BOOL)arg5 withDomesticCarrierCodeFormattingRule:(id)arg6 ;
-(NSMutableArray *)leadingDigitsPatterns;
-(void)setLeadingDigitsPatterns:(NSMutableArray *)arg1 ;
-(NSString *)nationalPrefixFormattingRule;
-(void)setNationalPrefixFormattingRule:(NSString *)arg1 ;
-(BOOL)nationalPrefixOptionalWhenFormatting;
-(void)setNationalPrefixOptionalWhenFormatting:(BOOL)arg1 ;
-(NSString *)domesticCarrierCodeFormattingRule;
-(void)setDomesticCarrierCodeFormattingRule:(NSString *)arg1 ;
@end


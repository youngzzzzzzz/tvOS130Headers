/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BrailleTranslation/BrailleTranslation-Structs.h>
#import <BrailleTranslation/NSCopying.h>

@class BRLTBrailleString;

@interface BRLTBrailleBuffer : NSObject <NSCopying> {

	BRLTBrailleString* _brailleString;
	unsigned long long _cursor;

}

@property (nonatomic,readonly) BRLTBrailleString * brailleString; 
@property (assign,nonatomic) unsigned long long cursor;                        //@synthesize cursor=_cursor - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)cursor;
-(void)setCursor:(unsigned long long)arg1 ;
-(BRLTBrailleString *)brailleString;
-(void)deleteBrailleChar;
-(id)initWithBrailleString:(id)arg1 ;
-(void)insertBrailleChar:(id)arg1 ;
@end


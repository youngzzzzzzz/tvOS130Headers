/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <VectorKit/NSCopying.h>

@interface VKPGenericShieldStyleInfo : PBCodable <NSCopying> {

	SCD_Struct_VK191* _textDropShadowOffsets;
	unsigned _backgroundColor;
	unsigned _borderColor;
	int _style;
	unsigned _textColor;
	unsigned _textDropShadowColor;
	float _textDropShadowSize;
	unsigned _textStrokeColor;
	float _textStrokeSize;
	SCD_Struct_VK196 _has;

}

@property (assign,nonatomic) BOOL hasStyle; 
@property (assign,nonatomic) int style;                                                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundColor; 
@property (assign,nonatomic) unsigned backgroundColor;                                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL hasBorderColor; 
@property (assign,nonatomic) unsigned borderColor;                                         //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) BOOL hasTextColor; 
@property (assign,nonatomic) unsigned textColor;                                           //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) BOOL hasTextStrokeSize; 
@property (assign,nonatomic) float textStrokeSize;                                         //@synthesize textStrokeSize=_textStrokeSize - In the implementation block
@property (assign,nonatomic) BOOL hasTextStrokeColor; 
@property (assign,nonatomic) unsigned textStrokeColor;                                     //@synthesize textStrokeColor=_textStrokeColor - In the implementation block
@property (nonatomic,readonly) unsigned long long textDropShadowOffsetsCount; 
@property (nonatomic,readonly) float* textDropShadowOffsets; 
@property (assign,nonatomic) BOOL hasTextDropShadowSize; 
@property (assign,nonatomic) float textDropShadowSize;                                     //@synthesize textDropShadowSize=_textDropShadowSize - In the implementation block
@property (assign,nonatomic) BOOL hasTextDropShadowColor; 
@property (assign,nonatomic) unsigned textDropShadowColor;                                 //@synthesize textDropShadowColor=_textDropShadowColor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)backgroundColor;
-(void)setBackgroundColor:(unsigned)arg1 ;
-(unsigned)borderColor;
-(void)setBorderColor:(unsigned)arg1 ;
-(void)setHasStyle:(BOOL)arg1 ;
-(BOOL)hasStyle;
-(unsigned)textColor;
-(void)setTextColor:(unsigned)arg1 ;
-(BOOL)hasTextColor;
-(BOOL)hasBackgroundColor;
-(void)setHasBackgroundColor:(BOOL)arg1 ;
-(void)setHasBorderColor:(BOOL)arg1 ;
-(BOOL)hasBorderColor;
-(unsigned long long)textDropShadowOffsetsCount;
-(void)clearTextDropShadowOffsets;
-(float)textDropShadowOffsetAtIndex:(unsigned long long)arg1 ;
-(void)addTextDropShadowOffset:(float)arg1 ;
-(void)setHasTextColor:(BOOL)arg1 ;
-(void)setTextStrokeSize:(float)arg1 ;
-(void)setHasTextStrokeSize:(BOOL)arg1 ;
-(BOOL)hasTextStrokeSize;
-(void)setTextStrokeColor:(unsigned)arg1 ;
-(void)setHasTextStrokeColor:(BOOL)arg1 ;
-(BOOL)hasTextStrokeColor;
-(float*)textDropShadowOffsets;
-(void)setTextDropShadowOffsets:(float*)arg1 count:(unsigned long long)arg2 ;
-(void)setTextDropShadowSize:(float)arg1 ;
-(void)setHasTextDropShadowSize:(BOOL)arg1 ;
-(BOOL)hasTextDropShadowSize;
-(unsigned)textDropShadowColor;
-(void)setTextDropShadowColor:(unsigned)arg1 ;
-(void)setHasTextDropShadowColor:(BOOL)arg1 ;
-(BOOL)hasTextDropShadowColor;
-(float)textStrokeSize;
-(unsigned)textStrokeColor;
-(float)textDropShadowSize;
@end


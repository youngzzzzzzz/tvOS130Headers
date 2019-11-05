/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/NSCopying.h>
#import <TextInput/NSSecureCoding.h>

@class NSString;

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasCandidateKey;
	BOOL _hasAccentKey;
	BOOL _canMultitap;
	BOOL _isAlphabeticPlane;
	BOOL _isKanaPlane;
	BOOL _diacriticForwardCompose;
	BOOL _interfaceIdiomIsPad;
	NSString* _inputMode;
	NSString* _layoutTag;
	long long _userInterfaceIdiom;

}

@property (nonatomic,copy) NSString * inputMode;                        //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,readonly) NSString * softwareLayout; 
@property (assign,nonatomic) BOOL hasCandidateKey;                      //@synthesize hasCandidateKey=_hasCandidateKey - In the implementation block
@property (assign,nonatomic) BOOL hasAccentKey;                         //@synthesize hasAccentKey=_hasAccentKey - In the implementation block
@property (assign,nonatomic) BOOL canMultitap;                          //@synthesize canMultitap=_canMultitap - In the implementation block
@property (assign,nonatomic) BOOL isAlphabeticPlane;                    //@synthesize isAlphabeticPlane=_isAlphabeticPlane - In the implementation block
@property (assign,nonatomic) BOOL isKanaPlane;                          //@synthesize isKanaPlane=_isKanaPlane - In the implementation block
@property (assign,nonatomic) BOOL diacriticForwardCompose;              //@synthesize diacriticForwardCompose=_diacriticForwardCompose - In the implementation block
@property (nonatomic,copy) NSString * layoutTag;                        //@synthesize layoutTag=_layoutTag - In the implementation block
@property (assign,nonatomic) long long userInterfaceIdiom;              //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (assign,nonatomic) BOOL interfaceIdiomIsPad;                  //@synthesize interfaceIdiomIsPad=_interfaceIdiomIsPad - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)layoutTag;
-(NSString *)inputMode;
-(void)setInputMode:(NSString *)arg1 ;
-(void)setLayoutTag:(NSString *)arg1 ;
-(NSString *)softwareLayout;
-(BOOL)interfaceIdiomIsPad;
-(void)setInterfaceIdiomIsPad;
-(BOOL)hasCandidateKey;
-(void)setHasCandidateKey:(BOOL)arg1 ;
-(BOOL)hasAccentKey;
-(void)setHasAccentKey:(BOOL)arg1 ;
-(BOOL)canMultitap;
-(void)setCanMultitap:(BOOL)arg1 ;
-(BOOL)isAlphabeticPlane;
-(void)setIsAlphabeticPlane:(BOOL)arg1 ;
-(BOOL)isKanaPlane;
-(void)setIsKanaPlane:(BOOL)arg1 ;
-(BOOL)diacriticForwardCompose;
-(void)setDiacriticForwardCompose:(BOOL)arg1 ;
-(long long)userInterfaceIdiom;
-(void)setUserInterfaceIdiom:(long long)arg1 ;
-(void)setInterfaceIdiomIsPad:(BOOL)arg1 ;
@end

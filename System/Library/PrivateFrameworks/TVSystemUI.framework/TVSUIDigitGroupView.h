/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <TVSystemUI/CAAnimationDelegate.h>

@class NSMutableArray, NSIndexSet, NSString;

@interface TVSUIDigitGroupView : UIView <CAAnimationDelegate> {

	NSMutableArray* _digits;
	BOOL _secure;
	unsigned long long _numberOfDigits;
	NSIndexSet* _separatorIndexes;
	NSString* _text;

}

@property (nonatomic,readonly) unsigned long long numberOfDigits;              //@synthesize numberOfDigits=_numberOfDigits - In the implementation block
@property (nonatomic,readonly) NSIndexSet * separatorIndexes;                  //@synthesize separatorIndexes=_separatorIndexes - In the implementation block
@property (nonatomic,copy) NSString * text;                                    //@synthesize text=_text - In the implementation block
@property (assign,getter=isSecure,nonatomic) BOOL secure;                      //@synthesize secure=_secure - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversOfText;
-(BOOL)isSecure;
-(void)reset;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setSecure:(BOOL)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)_setupSubviews;
-(id)initWithNumberOfDigits:(unsigned long long)arg1 separatorIndexes:(id)arg2 ;
-(void)shake;
-(unsigned long long)numberOfDigits;
-(NSIndexSet *)separatorIndexes;
-(void)_updateDigits;
@end


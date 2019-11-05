/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDecimalNumber, NSString;


@protocol INPriceRangeExport <NSObject,JSExport>
@property (nonatomic,copy) NSDecimalNumber * minimumPrice; 
@property (nonatomic,copy) NSDecimalNumber * maximumPrice; 
@property (nonatomic,copy) NSString * currencyCode; 
@required
+(id)_priceWithPriceRangeValue:(id)arg1;
-(id)init;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(id)arg1;
-(NSDecimalNumber *)maximumPrice;
-(void)setMaximumPrice:(id)arg1;
-(NSDecimalNumber *)minimumPrice;
-(void)setMinimumPrice:(id)arg1;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TVCKUIFactory : NSObject {

	NSArray* _factories;

}

@property (nonatomic,copy) NSArray * factories;              //@synthesize factories=_factories - In the implementation block
+(id)sharedInstance;
-(void)setup;
-(void)_registerViewElements;
-(void)setFactories:(NSArray *)arg1 ;
-(NSArray *)factories;
@end

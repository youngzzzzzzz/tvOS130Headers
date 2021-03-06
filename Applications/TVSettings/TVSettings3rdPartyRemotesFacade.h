/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TVSettings3rdPartyRemotesFacade : NSObject {

	BOOL _recomputingConfigurations;
	NSArray* _configurations;

}

@property (assign,nonatomic) BOOL recomputingConfigurations;              //@synthesize recomputingConfigurations=_recomputingConfigurations - In the implementation block
@property (nonatomic,copy) NSArray * configurations;                      //@synthesize configurations=_configurations - In the implementation block
-(id)init;
-(void)dealloc;
-(NSArray *)configurations;
-(void)setConfigurations:(NSArray *)arg1 ;
-(void)_updateConfigurations:(id)arg1 ;
-(BOOL)recomputingConfigurations;
-(void)setRecomputingConfigurations:(BOOL)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REElementDataSourceProperties.h>

@protocol REElementDataSourceActivityDelegate, REElementDataSourceDelegate;
@class NSString, NSDictionary, NSArray;

@interface REElementDataSource : NSObject <REElementDataSourceProperties> {

	id<REElementDataSourceActivityDelegate> _activityDelegate;
	BOOL _running;
	BOOL _allowsLocationUse;
	BOOL _unlockedSinceBoot;
	id<REElementDataSourceDelegate> _delegate;
	unsigned long long _state;
	NSString* _logHeader;

}

@property (assign,nonatomic,__weak) id<REElementDataSourceDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * supportedSections; 
@property (getter=isRunning,nonatomic,readonly) BOOL running;                                   //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) BOOL allowsLocationUse;                                            //@synthesize allowsLocationUse=_allowsLocationUse - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * logHeader;                                            //@synthesize logHeader=_logHeader - In the implementation block
@property (getter=hasUnlockedSinceBoot,nonatomic,readonly) BOOL unlockedSinceBoot;              //@synthesize unlockedSinceBoot=_unlockedSinceBoot - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSDictionary * dataSourceProperties; 
+(id)bundleIdentifier;
+(id)contentAttributes;
+(id)applicationBundleIdentifier;
+(BOOL)supportsPersistence;
+(SCD_Struct_RE2)minimumSupportedSystemVersion;
+(BOOL)wantsPrivateQueue;
+(id)overrideDataSourceImage;
+(id)overrideLocalizedDataSourceName;
+(BOOL)wantsAppPrewarm;
+(BOOL)wantsLocationInUseAsserton;
+(BOOL)wantsReloadForSignificantTimeChange;
+(BOOL)wantsReloadForFirstDeviceUnlock;
+(BOOL)wantsAutomaticFetching;
+(unsigned long long)elementContentMode;
-(NSString *)name;
-(id)init;
-(id<REElementDataSourceDelegate>)delegate;
-(void)setDelegate:(id<REElementDataSourceDelegate>)arg1 ;
-(unsigned long long)state;
-(void)resume;
-(void)setState:(unsigned long long)arg1 ;
-(void)pause;
-(BOOL)isRunning;
-(void)setRunning:(BOOL)arg1 ;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(void)setAllowsLocationUse:(BOOL)arg1 ;
-(void)setActivityDelegate:(id)arg1 ;
-(void)loadLoggingHeader;
-(void)beginActivity:(id)arg1 ;
-(void)finishActivity:(id)arg1 ;
-(NSDictionary *)dataSourceProperties;
-(NSArray *)supportedSections;
-(void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)getElementsInSection:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)elementWithIdentifierWillBecomeVisible:(id)arg1 ;
-(void)elementWithIdentifierDidBecomeHidden:(id)arg1 ;
-(id)complicationDescriptor;
-(void)beginFetchingData;
-(void)finishFetchingData;
-(id)activityDelegate;
-(BOOL)allowsLocationUse;
-(NSString *)logHeader;
-(BOOL)hasUnlockedSinceBoot;
-(void)collectLoggableState:(/*^block*/id)arg1 ;
@end

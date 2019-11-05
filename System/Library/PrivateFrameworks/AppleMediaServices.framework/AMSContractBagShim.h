/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSBagProtocol.h>

@class NSDate, NSString, NSObject;

@interface AMSContractBagShim : NSObject <AMSBagProtocol> {

	NSObject* _bagContract;

}

@property (nonatomic,retain) NSObject * bagContract;                        //@synthesize bagContract=_bagContract - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
+(id)_callSelector:(SEL)arg1 onBagContract:(id)arg2 ;
-(id)boolForKey:(id)arg1 ;
-(BOOL)isLoaded;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(NSString *)profile;
-(NSString *)profileVersion;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithBagContract:(id)arg1 ;
-(NSObject *)bagContract;
-(void)setBagContract:(NSObject *)arg1 ;
-(id)_bagValueForBagKey:(id)arg1 bagValueType:(unsigned long long)arg2 ;
-(SEL)_selectorForBagKey:(id)arg1 ;
@end

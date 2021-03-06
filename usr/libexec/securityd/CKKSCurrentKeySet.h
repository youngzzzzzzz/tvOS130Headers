/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <securityd/securityd-Structs.h>
@class NSString, NSError, CKKSKey, CKKSCurrentKeyPointer, NSArray;

@interface CKKSCurrentKeySet : NSObject {

	BOOL _proposed;
	NSString* _viewName;
	NSError* _error;
	CKKSKey* _tlk;
	CKKSKey* _classA;
	CKKSKey* _classC;
	CKKSCurrentKeyPointer* _currentTLKPointer;
	CKKSCurrentKeyPointer* _currentClassAPointer;
	CKKSCurrentKeyPointer* _currentClassCPointer;
	NSArray* _tlkShares;
	NSArray* _pendingTLKShares;

}

@property (retain) NSString * viewName;                                       //@synthesize viewName=_viewName - In the implementation block
@property (retain) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (retain) CKKSKey * tlk;                                             //@synthesize tlk=_tlk - In the implementation block
@property (retain) CKKSKey * classA;                                          //@synthesize classA=_classA - In the implementation block
@property (retain) CKKSKey * classC;                                          //@synthesize classC=_classC - In the implementation block
@property (retain) CKKSCurrentKeyPointer * currentTLKPointer;                 //@synthesize currentTLKPointer=_currentTLKPointer - In the implementation block
@property (retain) CKKSCurrentKeyPointer * currentClassAPointer;              //@synthesize currentClassAPointer=_currentClassAPointer - In the implementation block
@property (retain) CKKSCurrentKeyPointer * currentClassCPointer;              //@synthesize currentClassCPointer=_currentClassCPointer - In the implementation block
@property (assign) BOOL proposed;                                             //@synthesize proposed=_proposed - In the implementation block
@property (retain) NSArray * tlkShares;                                       //@synthesize tlkShares=_tlkShares - In the implementation block
@property (retain) NSArray * pendingTLKShares;                                //@synthesize pendingTLKShares=_pendingTLKShares - In the implementation block
+(id)loadForZone:(id)arg1 ;
-(NSArray *)tlkShares;
-(void)setTlkShares:(NSArray *)arg1 ;
-(NSArray *)pendingTLKShares;
-(void)setPendingTLKShares:(NSArray *)arg1 ;
-(id)asKeychainBackedSet:(id*)arg1 ;
-(void)setCurrentClassCPointer:(CKKSCurrentKeyPointer *)arg1 ;
-(void)setCurrentClassAPointer:(CKKSCurrentKeyPointer *)arg1 ;
-(void)setCurrentTLKPointer:(CKKSCurrentKeyPointer *)arg1 ;
-(CKKSCurrentKeyPointer *)currentClassCPointer;
-(CKKSCurrentKeyPointer *)currentClassAPointer;
-(CKKSCurrentKeyPointer *)currentTLKPointer;
-(id)initForZoneName:(id)arg1 ;
-(BOOL)proposed;
-(void)setProposed:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)viewName;
-(CKKSKey *)tlk;
-(CKKSKey *)classA;
-(CKKSKey *)classC;
-(void)setTlk:(CKKSKey *)arg1 ;
-(void)setClassA:(CKKSKey *)arg1 ;
-(void)setClassC:(CKKSKey *)arg1 ;
-(void)setViewName:(NSString *)arg1 ;
@end


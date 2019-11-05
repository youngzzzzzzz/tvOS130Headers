/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/PurchaseTask.h>
#import <appstored/SSPurchaseManagerDelegate.h>

@class NSMutableArray, PurchaseBatch, SSPurchaseManager, NSMutableDictionary, NSString;

@interface RemotePurchaseTask : PurchaseTask <SSPurchaseManagerDelegate> {

	BOOL _hasDisplayedRequestFailure;
	NSMutableArray* _pendingPurchases;
	PurchaseBatch* _purchaseBatch;
	SSPurchaseManager* _purchaseManager;
	NSMutableDictionary* _purchaseInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2 ;
-(id)initWithPurchaseBatch:(id)arg1 ;
@end

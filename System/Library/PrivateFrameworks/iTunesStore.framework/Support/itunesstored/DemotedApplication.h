/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/NSCopying.h>

@class LSApplicationProxy, NSString, NSNumber, RestoreAppInstall, RestoreItem;

@interface DemotedApplication : NSObject <NSCopying> {

	LSApplicationProxy* _proxy;
	NSString* _bundleID;
	NSNumber* _externalVersionID;
	NSNumber* _itemID;
	NSNumber* _storeFrontID;
	NSString* _vendorID;
	NSString* _accountID;
	NSNumber* _downloaderID;
	NSNumber* _familyID;
	NSNumber* _purchaserID;
	NSNumber* _failureReason;

}

@property (nonatomic,readonly) RestoreAppInstall * restoreAppInstall; 
@property (nonatomic,readonly) RestoreItem * restoreItem; 
@property (nonatomic,copy) NSString * bundleID;                                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSNumber * externalVersionID;                           //@synthesize externalVersionID=_externalVersionID - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                                      //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSNumber * storeFrontID;                                //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (nonatomic,copy) NSString * vendorID;                                    //@synthesize vendorID=_vendorID - In the implementation block
@property (nonatomic,copy) NSString * accountID;                                   //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSNumber * downloaderID;                                //@synthesize downloaderID=_downloaderID - In the implementation block
@property (nonatomic,copy) NSNumber * familyID;                                    //@synthesize familyID=_familyID - In the implementation block
@property (nonatomic,copy) NSNumber * purchaserID;                                 //@synthesize purchaserID=_purchaserID - In the implementation block
@property (nonatomic,copy) NSNumber * failureReason;                               //@synthesize failureReason=_failureReason - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSNumber *)itemID;
-(NSString *)accountID;
-(void)setFailureReason:(NSNumber *)arg1 ;
-(NSNumber *)failureReason;
-(NSString *)vendorID;
-(void)setVendorID:(NSString *)arg1 ;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(void)setStoreFrontID:(NSNumber *)arg1 ;
-(NSNumber *)storeFrontID;
-(id)initWithApplication:(id)arg1 ;
-(void)setDownloaderID:(NSNumber *)arg1 ;
-(void)setFamilyID:(NSNumber *)arg1 ;
-(void)setPurchaserID:(NSNumber *)arg1 ;
-(NSNumber *)downloaderID;
-(NSNumber *)familyID;
-(NSNumber *)purchaserID;
-(void)setExternalVersionID:(NSNumber *)arg1 ;
-(NSNumber *)externalVersionID;
-(RestoreItem *)restoreItem;
-(RestoreAppInstall *)restoreAppInstall;
@end

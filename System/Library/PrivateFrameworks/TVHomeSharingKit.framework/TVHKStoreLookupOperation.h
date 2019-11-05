/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHSAsynchronousOperation.h>

@class NSDictionary, NSError, SSVPlatformRequestOperation, NSString;

@interface TVHKStoreLookupOperation : TVHSAsynchronousOperation {

	unsigned long long _storeID;
	unsigned long long _storefrontID;
	NSDictionary* _results;
	NSError* _error;
	SSVPlatformRequestOperation* _platformOperation;
	NSString* _storeIDString;
	NSString* _storefrontIDString;

}

@property (nonatomic,retain) SSVPlatformRequestOperation * platformOperation;              //@synthesize platformOperation=_platformOperation - In the implementation block
@property (nonatomic,copy) NSString * storeIDString;                                       //@synthesize storeIDString=_storeIDString - In the implementation block
@property (nonatomic,copy) NSString * storefrontIDString;                                  //@synthesize storefrontIDString=_storefrontIDString - In the implementation block
@property (nonatomic,copy) NSDictionary * results;                                         //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned long long storeID;                                 //@synthesize storeID=_storeID - In the implementation block
@property (assign,nonatomic) unsigned long long storefrontID;                              //@synthesize storefrontID=_storefrontID - In the implementation block
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(NSDictionary *)results;
-(unsigned long long)storeID;
-(id)_countryCode;
-(void)setResults:(NSDictionary *)arg1 ;
-(unsigned long long)storefrontID;
-(void)setStorefrontID:(unsigned long long)arg1 ;
-(void)executionDidBegin;
-(NSString *)storeIDString;
-(void)setPlatformOperation:(SSVPlatformRequestOperation *)arg1 ;
-(SSVPlatformRequestOperation *)platformOperation;
-(NSString *)storefrontIDString;
-(id)initWithStoreID:(unsigned long long)arg1 ;
-(void)setStoreIDString:(NSString *)arg1 ;
-(void)setStorefrontIDString:(NSString *)arg1 ;
@end

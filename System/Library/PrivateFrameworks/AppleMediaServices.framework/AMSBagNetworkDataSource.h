/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSBagDataSourceProtocol.h>

@protocol OS_dispatch_queue;
@class NSDate, NSString, NSDictionary, NSObject, AMSUniqueExecutionQueue, AMSProcessInfo, AMSURLSession;

@interface AMSBagNetworkDataSource : NSObject <AMSBagDataSourceProtocol> {

	/*^block*/id _dataSourceChangedHandler;
	/*^block*/id _dataSourceDataInvalidatedHandler;
	NSString* _profile;
	NSString* _profileVersion;
	NSDictionary* _cachedData;
	NSObject*<OS_dispatch_queue> _cachedDataAccessQueue;
	NSString* _cachedStorefront;
	NSObject*<OS_dispatch_queue> _cachedStorefrontAccessQueue;
	AMSUniqueExecutionQueue* _loadDataQueue;
	NSObject*<OS_dispatch_queue> _processAccountStoreDidChangeNotificationQueue;
	AMSProcessInfo* _processInfo;
	AMSURLSession* _URLSession;

}

@property (nonatomic,retain) NSDictionary * cachedData;                                                               //@synthesize cachedData=_cachedData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cachedDataAccessQueue;                                      //@synthesize cachedDataAccessQueue=_cachedDataAccessQueue - In the implementation block
@property (nonatomic,retain) NSString * cachedStorefront;                                                             //@synthesize cachedStorefront=_cachedStorefront - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cachedStorefrontAccessQueue;                                //@synthesize cachedStorefrontAccessQueue=_cachedStorefrontAccessQueue - In the implementation block
@property (nonatomic,retain) AMSUniqueExecutionQueue * loadDataQueue;                                                 //@synthesize loadDataQueue=_loadDataQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processAccountStoreDidChangeNotificationQueue;              //@synthesize processAccountStoreDidChangeNotificationQueue=_processAccountStoreDidChangeNotificationQueue - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * processInfo;                                                            //@synthesize processInfo=_processInfo - In the implementation block
@property (nonatomic,retain) AMSURLSession * URLSession;                                                              //@synthesize URLSession=_URLSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,copy,readonly) NSString * profile;                                                               //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) NSString * profileVersion;                                                        //@synthesize profileVersion=_profileVersion - In the implementation block
@property (nonatomic,copy) id dataSourceChangedHandler;                                                               //@synthesize dataSourceChangedHandler=_dataSourceChangedHandler - In the implementation block
@property (nonatomic,copy) id dataSourceDataInvalidatedHandler;                                                       //@synthesize dataSourceDataInvalidatedHandler=_dataSourceDataInvalidatedHandler - In the implementation block
+(id)_currentStorefrontForAccountMediaType:(id)arg1 ;
+(id)_accountForAccountMediaType:(id)arg1 ;
+(BOOL)_shouldProcessAccountStoreDidChangeNotification:(id)arg1 withMediaType:(id)arg2 ;
+(id)_URLCookieNamesForProfile:(id)arg1 ;
+(void)_setURLCookieNames:(id)arg1 forProfile:(id)arg2 ;
+(BOOL)_shouldReloadDataForOriginalCookies:(id)arg1 newCookies:(id)arg2 ;
+(BOOL)_shouldReloadDataForSetStorefront:(id)arg1 bagData:(id)arg2 ;
+(id)_requestStorefrontFromURLResponse:(id)arg1 ;
+(id)_setStorefrontFromURLResponse:(id)arg1 bagData:(id)arg2 ;
+(BOOL)_isDataDictionary:(id)arg1 equalToDataDictionary:(id)arg2 ;
+(id)_defaultURLCookieNames;
+(id)_deviceString;
+(id)_OSBuildTypeString;
-(NSString *)description;
-(void)dealloc;
-(BOOL)isLoaded;
-(AMSProcessInfo *)processInfo;
-(NSDate *)expirationDate;
-(void)_accountStoreDidChange:(id)arg1 ;
-(NSString *)profile;
-(AMSURLSession *)URLSession;
-(void)setURLSession:(AMSURLSession *)arg1 ;
-(NSDictionary *)cachedData;
-(void)setCachedData:(NSDictionary *)arg1 ;
-(void)setProcessInfo:(AMSProcessInfo *)arg1 ;
-(NSString *)profileVersion;
-(id)_baseURLString;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(id)bagKeyInfoForKey:(id)arg1 ;
-(id)valueForURLVariable:(id)arg1 ;
-(id)_loadDataWithAttempt:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)_invalidateCacheNotification:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cachedDataAccessQueue;
-(AMSUniqueExecutionQueue *)loadDataQueue;
-(NSObject*<OS_dispatch_queue>)processAccountStoreDidChangeNotificationQueue;
-(NSObject*<OS_dispatch_queue>)cachedStorefrontAccessQueue;
-(NSString *)cachedStorefront;
-(void)setCachedStorefront:(NSString *)arg1 ;
-(id)dataSourceDataInvalidatedHandler;
-(id)_createURLWithCookieNames:(id)arg1 storefront:(id)arg2 ;
-(id)_createRequestWithCookieNames:(id)arg1 storefront:(id)arg2 ;
-(id)_processLoadDataResult:(id)arg1 ;
-(void)_updateStorefrontSuffixIfNecessaryWithBagData:(id)arg1 ;
-(void)_updateCachedData:(id)arg1 ;
-(id)dataSourceChangedHandler;
-(id)_cookiesForNames:(id)arg1 ;
-(void)setDataSourceChangedHandler:(id)arg1 ;
-(void)setDataSourceDataInvalidatedHandler:(id)arg1 ;
-(id)initWithProfile:(id)arg1 profileVersion:(id)arg2 processInfo:(id)arg3 ;
-(void)setCachedDataAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCachedStorefrontAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLoadDataQueue:(AMSUniqueExecutionQueue *)arg1 ;
-(void)setProcessAccountStoreDidChangeNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

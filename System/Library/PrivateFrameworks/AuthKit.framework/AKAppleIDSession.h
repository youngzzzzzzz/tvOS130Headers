/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/AuthKit-Structs.h>
#import <AuthKit/NSURLSessionAppleIDContext.h>

@protocol AKAnisetteServiceProtocol;
@class NSString, AKAnisetteProvisioningController, AKAnisetteData, NSLock, AKDevice;

@interface AKAppleIDSession : NSObject <NSURLSessionAppleIDContext> {

	NSString* _serviceID;
	AKAnisetteProvisioningController* _nativeAnisetteController;
	AKAnisetteProvisioningController* _pairedDeviceAnisetteController;
	AKAnisetteData* _proxiedAnisetteData;
	NSLock* _anisetteControllerLock;
	AKDevice* _pairedDevice;
	id<AKAnisetteServiceProtocol> _anisetteDataProvider;

}

@property (nonatomic,retain) AKDevice * pairedDevice;                                         //@synthesize pairedDevice=_pairedDevice - In the implementation block
@property (nonatomic,retain) id<AKAnisetteServiceProtocol> anisetteDataProvider;              //@synthesize anisetteDataProvider=_anisetteDataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)relevantHTTPStatusCodes;
-(void)URLSession:(id)arg1 task:(id)arg2 getAppleIDHeadersForResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithIdentifier:(id)arg1 ;
-(AKDevice *)pairedDevice;
-(void)setPairedDevice:(AKDevice *)arg1 ;
-(id<AKAnisetteServiceProtocol>)anisetteDataProvider;
-(void)setAnisetteDataProvider:(id<AKAnisetteServiceProtocol>)arg1 ;
-(void)_generateAppleIDHeadersForSessionTask:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleURLResponse:(id)arg1 forRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_generateAppleIDHeadersForRequest:(id)arg1 error:(id*)arg2 ;
-(id)_genericAppleIDHeadersDictionaryForRequest:(id)arg1 ;
-(id)_nativeAnisetteController;
-(id)_pairedDeviceAnisetteController;
-(id)appleIDHeadersForRequest:(id)arg1 ;
-(void)handleResponse:(id)arg1 forRequest:(id)arg2 shouldRetry:(BOOL*)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSURLBag, NSDictionary, NSString;

@interface IKURLBagCache : NSObject {

	SSURLBag* _urlBag;
	NSDictionary* _existingDictionary;
	NSString* _cachePath;

}

@property (nonatomic,readonly) SSURLBag * urlBag;                              //@synthesize urlBag=_urlBag - In the implementation block
@property (nonatomic,readonly) NSDictionary * existingDictionary;              //@synthesize existingDictionary=_existingDictionary - In the implementation block
@property (nonatomic,readonly) NSString * cachePath;                           //@synthesize cachePath=_cachePath - In the implementation block
+(id)sharedCache;
+(id)URLBagContext;
-(id)init;
-(id)valueForKey:(id)arg1 ;
-(NSString *)cachePath;
-(SSURLBag *)urlBag;
-(void)updateWithInvalidation:(BOOL)arg1 ;
-(void)_loadWithNotification:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(NSDictionary *)existingDictionary;
-(void)loadValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkTrustStatusForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isTrustedURL:(id)arg1 ;
@end


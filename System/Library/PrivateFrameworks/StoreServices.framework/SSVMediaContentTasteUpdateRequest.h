/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <StoreServices/SSXPCCoding.h>

@class NSArray, NSString;

@interface SSVMediaContentTasteUpdateRequest : SSRequest <SSXPCCoding> {

	BOOL _shouldInvalidateLocalCache;
	NSArray* _contentTasteItemUpdates;

}

@property (nonatomic,copy) NSArray * contentTasteItemUpdates;              //@synthesize contentTasteItemUpdates=_contentTasteItemUpdates - In the implementation block
@property (assign,nonatomic) BOOL shouldInvalidateLocalCache;              //@synthesize shouldInvalidateLocalCache=_shouldInvalidateLocalCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setContentTasteItemUpdates:(NSArray *)arg1 ;
-(NSArray *)contentTasteItemUpdates;
-(BOOL)shouldInvalidateLocalCache;
-(void)setShouldInvalidateLocalCache:(BOOL)arg1 ;
@end

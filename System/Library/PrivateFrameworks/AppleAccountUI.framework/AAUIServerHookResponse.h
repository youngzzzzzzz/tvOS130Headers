/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURLRequest;

@interface AAUIServerHookResponse : NSObject {

	NSDictionary* _additionalPayload;
	NSURLRequest* _continuationRequest;

}

@property (nonatomic,copy) NSDictionary * additionalPayload;                //@synthesize additionalPayload=_additionalPayload - In the implementation block
@property (nonatomic,copy) NSURLRequest * continuationRequest;              //@synthesize continuationRequest=_continuationRequest - In the implementation block
-(void)setContinuationRequest:(NSURLRequest *)arg1 ;
-(NSDictionary *)additionalPayload;
-(void)setAdditionalPayload:(NSDictionary *)arg1 ;
-(NSURLRequest *)continuationRequest;
@end


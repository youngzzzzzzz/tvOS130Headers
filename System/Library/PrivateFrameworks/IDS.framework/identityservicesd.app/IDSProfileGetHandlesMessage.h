/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <identityservicesd/NSCopying.h>

@class NSArray, NSDictionary;

@interface IDSProfileGetHandlesMessage : FTIDSMessage <NSCopying> {

	NSArray* _responseHandles;
	NSDictionary* _selfHandle;

}

@property (copy) NSArray * responseHandles;              //@synthesize responseHandles=_responseHandles - In the implementation block
@property (copy) NSDictionary * selfHandle;              //@synthesize selfHandle=_selfHandle - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)messageBody;
-(id)requiredKeys;
-(int)maxTimeoutRetries;
-(BOOL)wantsExtraTimeoutRetry;
-(double)anisetteHeadersTimeout;
-(id)bagKey;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(NSArray *)responseHandles;
-(NSDictionary *)selfHandle;
-(void)setResponseHandles:(NSArray *)arg1 ;
-(void)setSelfHandle:(NSDictionary *)arg1 ;
@end

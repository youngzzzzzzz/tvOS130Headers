/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/DAAPRequestDataProvider.h>

@class NSNumber, NSString;

@interface PurchaseHistoryUpdateDAAPRequestEncoder : NSObject <DAAPRequestDataProvider> {

	NSNumber* _revision;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)contentType;
-(id)dataForRequestWithError:(id*)arg1 ;
-(id)initWithCurrentRevision:(id)arg1 ;
@end

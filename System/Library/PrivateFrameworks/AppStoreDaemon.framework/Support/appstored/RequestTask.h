/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/Task.h>

@class ASDRequestResponse, XPCClient, ASDRequestOptions;

@interface RequestTask : Task {

	ASDRequestResponse* _response;
	XPCClient* _client;
	ASDRequestOptions* _options;

}

@property (nonatomic,readonly) XPCClient * client;                       //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) ASDRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (readonly) ASDRequestResponse * response;                      //@synthesize response=_response - In the implementation block
-(ASDRequestOptions *)options;
-(ASDRequestResponse *)response;
-(XPCClient *)client;
-(void)_setResponse:(id)arg1 ;
-(id)initForClient:(id)arg1 withOptions:(id)arg2 ;
@end


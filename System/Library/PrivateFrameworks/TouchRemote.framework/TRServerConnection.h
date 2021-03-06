/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRConnection.h>

@class SFService;

@interface TRServerConnection : TRConnection {

	SFService* _service;

}

@property (assign,nonatomic,__weak) SFService * service;              //@synthesize service=_service - In the implementation block
-(void)invalidate;
-(SFService *)service;
-(void)sendResponse:(id)arg1 ;
-(void)setService:(SFService *)arg1 ;
-(id)initWithService:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)sendRequest:(id)arg1 ;
@end


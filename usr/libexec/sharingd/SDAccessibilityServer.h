/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:54 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDXPCDaemon.h>
#import <sharingd/SFAccessibilityInterface.h>

@class NSString;

@interface SDAccessibilityServer : SDXPCDaemon <SFAccessibilityInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(void)activate;
-(id)machServiceName;
-(void)requestLabelForActivityWithSlotID:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)connectionInvalidated:(id)arg1 ;
-(BOOL)shouldAcceptNewConnection:(id)arg1 ;
-(void)connectionEstablished:(id)arg1 ;
@end


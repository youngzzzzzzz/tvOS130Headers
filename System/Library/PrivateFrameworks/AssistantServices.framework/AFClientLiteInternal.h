/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFClientLiteClientCommandHandling.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface AFClientLiteInternal : NSObject <AFClientLiteClientCommandHandling> {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _commandHandler;

}
-(void)_handleCommand:(id)arg1 afterCurrentRequest:(BOOL)arg2 isOneWay:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(oneway void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initAndHandleCommand:(id)arg1 afterCurrentRequest:(BOOL)arg2 isOneWay:(BOOL)arg3 commandHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
@end

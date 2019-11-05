/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/XPCServices/nsattributedstringagent.xpc/nsattributedstringagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <nsattributedstringagent/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface _NSAttributedStringAgentService : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedApplication;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface _UIKBRTObject : NSObject {

	NSMutableArray* _owner;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
-(void)setOwner:(id)arg1 ;
-(id)owner;
-(id)previousEntry;
-(id)nextEntry;
@end

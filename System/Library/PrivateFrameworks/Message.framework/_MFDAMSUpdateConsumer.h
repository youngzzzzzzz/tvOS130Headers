/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/_MFDAMSBasicConsumer.h>
#import <Message/MFDASyncActionsConsumer.h>

@interface _MFDAMSUpdateConsumer : _MFDAMSBasicConsumer <MFDASyncActionsConsumer>
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(BOOL)handleItems:(id)arg1 ;
-(void)drainMailbox;
-(void)receiveSyncActions:(id)arg1 ;
-(void)commitSyncActions;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailMessage.h>

@class DAMailMessage, MFMessage, MFMailboxUid, NSString;

@interface MFDAMessage : MFMailMessage {

	DAMailMessage* _DAMailMessage;
	MFMessage* _rfc822CreatedMessage;
	MFMailboxUid* _mailbox;
	NSString* _externalConversationID;

}

@property (nonatomic,readonly) DAMailMessage * DAMailMessage;              //@synthesize DAMailMessage=_DAMailMessage - In the implementation block
-(void)dealloc;
-(id)messageBody;
-(unsigned long long)messageSize;
-(id)headers;
-(BOOL)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(BOOL)messageDataHolder:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(id)headersIfAvailable;
-(id)remoteID;
-(unsigned long long)messageFlags;
-(id)mailbox;
-(id)externalConversationID;
-(id)remoteMailboxURL;
-(DAMailMessage *)DAMailMessage;
-(id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2 ;
@end


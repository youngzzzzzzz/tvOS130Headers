/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailServices/MSXPCService.h>

@interface MSAutosave : MSXPCService
+(id)autosave;
-(id)init;
-(id)_timeout;
-(id)initWithRemoteObjectInterface:(id)arg1 ;
-(void)removeAutosavedMessageWithIdentifier:(id)arg1 ;
-(void)autosaveMessageData:(id)arg1 withIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasAutosavedMessageWithIdentifier:(id)arg1 ;
-(id)autosavedMessageDataWithIdentifier:(id)arg1 error:(id*)arg2 ;
@end

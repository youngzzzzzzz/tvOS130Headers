/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSFanoutFactoryParameter <IDSPipelineParameter>
@required
-(id)service;
-(id)guid;
-(unsigned long long)maxSize;
-(id)aggregatableMessages;
-(id)messageToSend;
-(BOOL)forceOnePerFanout;
-(id)fromIdentity;
-(void)setAggregateMessages:(id)arg1;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LAContextXPC <LAContextExternalizationProt,LAContextPropertiesProt,LAContextClientEvaluationProt,LAContextEventFeedbackProt>
@required
-(void)allowTransferToProcess:(int)arg1 receiverAuditTokenData:(id)arg2 reply:(/*^block*/id)arg3;
-(void)tokenForTransferToUnknownProcess:(/*^block*/id)arg1;

@end

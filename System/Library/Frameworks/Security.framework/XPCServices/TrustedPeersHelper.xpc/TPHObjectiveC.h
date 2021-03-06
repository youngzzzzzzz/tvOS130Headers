/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Security.framework/XPCServices/TrustedPeersHelper.xpc/TrustedPeersHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TrustedPeersHelper/TrustedPeersHelper-Structs.h>
@interface TPHObjectiveC : NSObject
+(unsigned long long)ccsha384_diSize;
+(ccec_full_ctx*)ccec384Context;
+(void)contextFree:(void*)arg1 ;
+(id)fetchKeyPairWithPrivateKeyPersistentRef:(id)arg1 error:(id*)arg2 ;
+(long long)aes256BitSize;
+(id)digestUsingSha384:(id)arg1 ;
@end


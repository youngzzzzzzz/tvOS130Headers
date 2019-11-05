/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@interface DDScannerService : NSObject
+(void)cancelJob:(long long)arg1 ;
+(void)appendWatchOSLinksToString:(id)arg1 ;
+(id)scanString:(id)arg1 range:(NSRange)arg2 configuration:(id)arg3 ;
+(id)scanQuery:(DDScanQueryRef)arg1 configuration:(id)arg2 ;
+(id)scanString:(id)arg1 ;
+(long long)scanString:(id)arg1 range:(NSRange)arg2 configuration:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
+(long long)scanQuery:(DDScanQueryRef)arg1 configuration:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(long long)scanString:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

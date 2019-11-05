/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SignpostSupport/SignpostAnimationSubInterval.h>

@class NSString;

@interface SignpostAnimationTransactionLifetime : SignpostAnimationSubInterval {

	unsigned _transactionSeed;
	unsigned _swapId;
	int _pid;
	NSString* _processName;
	NSString* _executablePath;

}

@property (nonatomic,readonly) unsigned transactionSeed;               //@synthesize transactionSeed=_transactionSeed - In the implementation block
@property (nonatomic,readonly) unsigned swapId;                        //@synthesize swapId=_swapId - In the implementation block
@property (nonatomic,readonly) int pid;                                //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSString * processName;                 //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) NSString * executablePath;              //@synthesize executablePath=_executablePath - In the implementation block
-(NSString *)executablePath;
-(NSString *)processName;
-(int)pid;
-(id)initWithTransactionSeedInterval:(id)arg1 ;
-(unsigned)transactionSeed;
-(unsigned)swapId;
@end

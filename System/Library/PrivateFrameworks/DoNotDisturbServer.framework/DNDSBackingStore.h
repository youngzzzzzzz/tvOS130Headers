/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DNDSBackingStore <NSObject>
@property (assign,nonatomic,__weak) id<DNDSBackingStoreDelegate> delegate; 
@required
-(id<DNDSBackingStoreDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)readRecordWithError:(id*)arg1;
-(unsigned long long)writeRecord:(id)arg1 error:(id*)arg2;

@end


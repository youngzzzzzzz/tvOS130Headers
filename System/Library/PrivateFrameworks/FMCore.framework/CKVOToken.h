/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKVOToken : NSObject {

	NSString* _keypath;
	long long _index;
	/*^block*/id _block;

}

@property (nonatomic,copy,readonly) NSString * keypath;              //@synthesize keypath=_keypath - In the implementation block
@property (nonatomic,readonly) long long index;                      //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) id block;                        //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) void* context; 
-(id)description;
-(long long)index;
-(id)block;
-(void*)context;
-(NSString *)keypath;
-(id)initWithKeyPath:(id)arg1 index:(long long)arg2 block:(/*^block*/id)arg3 ;
@end


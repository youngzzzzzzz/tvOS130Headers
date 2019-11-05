/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:42 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/installd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MIDataProtectionChangeOperation : NSObject {

	int _newClass;
	/*^block*/id _completionBlock;
	NSArray* _urls;
	unsigned long long _operationType;

}

@property (nonatomic,readonly) NSArray * urls;                                //@synthesize urls=_urls - In the implementation block
@property (nonatomic,readonly) int newClass;                                  //@synthesize newClass=_newClass - In the implementation block
@property (nonatomic,readonly) unsigned long long operationType;              //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,copy) id completionBlock;                                //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)dataProtectionChangeOperationForURLs:(id)arg1 settingClass:(int)arg2 changeType:(unsigned long long)arg3 ;
+(id)dataProtectionChangeOperationForURL:(id)arg1 settingClass:(int)arg2 changeType:(unsigned long long)arg3 ;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(unsigned long long)operationType;
-(NSArray *)urls;
-(id)initWithURLs:(id)arg1 newClass:(int)arg2 changeType:(unsigned long long)arg3 ;
-(int)newClass;
-(BOOL)_runChangeOperationWasLocked:(BOOL*)arg1 withError:(id*)arg2 ;
-(void)performChangeOperation;
@end

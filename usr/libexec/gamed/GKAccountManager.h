/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:39 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore;

@interface GKAccountManager : NSObject {

	ACAccountStore* _internalStore;

}

@property (nonatomic,retain,readonly) ACAccountStore * internalStore;              //@synthesize internalStore=_internalStore - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(id)primaryAccount;
-(ACAccountStore *)internalStore;
@end


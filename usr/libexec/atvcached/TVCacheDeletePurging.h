/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/atvcached
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVCacheDeletePurging <NSObject>
@optional
-(void)cancelPurge;

@required
-(long long)purgeableAmountWithUrgency:(long long)arg1;
-(long long)purgeAmount:(long long)arg1 withUrgency:(long long)arg2;

@end


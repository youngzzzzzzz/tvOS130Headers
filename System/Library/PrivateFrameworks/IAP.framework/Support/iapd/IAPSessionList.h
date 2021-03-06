/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iapd/iapd-Structs.h>
@interface IAPSessionList : NSObject {

	map<unsigned short, IAPSession *, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, IAPSession *> > >* _iapSessionMap;

}
-(id)init;
-(void)dealloc;
-(id)sessions;
-(id)sessionWithSessionID:(unsigned short)arg1 ;
-(void)addSession:(id)arg1 withSessionID:(unsigned short)arg2 ;
-(void)removeSessionWithSessionID:(unsigned short)arg1 ;
-(id)sessionsForClientID:(unsigned)arg1 ;
-(id)sessionWithProtocolID:(unsigned char)arg1 ;
-(id)sessionsWithProtocolID:(unsigned char)arg1 ;
@end


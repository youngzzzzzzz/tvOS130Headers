/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet;

@interface WPAdvertisingRequestsQueue : NSObject {

	NSMutableArray* _queue;
	NSMutableSet* _clientTypes;

}

@property (nonatomic,retain) NSMutableArray * queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * clientTypes;              //@synthesize clientTypes=_clientTypes - In the implementation block
-(id)init;
-(unsigned long long)count;
-(void)setQueue:(NSMutableArray *)arg1 ;
-(NSMutableArray *)queue;
-(void)remove:(id)arg1 ;
-(void)removeAll;
-(void)add:(id)arg1 ;
-(void)removeRequestsOfClientType:(unsigned char)arg1 ;
-(BOOL)isAdvertisingForClientType:(unsigned char)arg1 ;
-(id)allRequests;
-(NSMutableSet *)clientTypes;
-(void)setClientTypes:(NSMutableSet *)arg1 ;
@end

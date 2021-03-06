/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:55 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <sharingd/sharingd-Structs.h>
@class NSString, NSObject;

@interface SFNotificationProxy : NSObject {

	NSString* _externalID;
	NSMutableArray* _internalIDs;
	BOOL _showingMedium;
	NSString* _triggeredID;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _dismissedHandler;
	/*^block*/id _tappedHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id dismissedHandler;                                       //@synthesize dismissedHandler=_dismissedHandler - In the implementation block
@property (nonatomic,copy) id tappedHandler;                                          //@synthesize tappedHandler=_tappedHandler - In the implementation block
-(id)init;
-(void)reset;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)externalID;
-(void)setDismissedHandler:(id)arg1 ;
-(id)dismissedHandler;
-(void)_requestPostOrUpdate:(id)arg1 info:(id)arg2 mediumVariant:(BOOL)arg3 canPost:(BOOL)arg4 ;
-(void)requestPostOrUpdate:(id)arg1 info:(id)arg2 mediumVariant:(BOOL)arg3 ;
-(void)requestRemove:(id)arg1 withReason:(long long)arg2 ;
-(void)requestRemoveAll;
-(void)requestUpdate:(id)arg1 info:(id)arg2 mediumVariant:(BOOL)arg3 ;
-(void)handleNotificationWasTapped:(id)arg1 ;
-(void)handleNotificationWasDismissed:(id)arg1 reason:(long long)arg2 ;
-(id)tappedHandler;
-(void)setTappedHandler:(id)arg1 ;
@end


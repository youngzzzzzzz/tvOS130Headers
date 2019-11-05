/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:54 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SDMISManagerDelegate;
#import <sharingd/sharingd-Structs.h>
@class RadiosPreferences, NSTimer;

@interface SDMISManager : NSObject {

	CFRunLoopSourceRef _scRunLoopSource;
	SCDynamicStoreRef _scDynamicStore;
	NETRBClientRef _netClient;
	int _state;
	int _reason;
	BOOL _needStateUpdate;
	RadiosPreferences* _radioPrefs;
	long long _attachCount;
	NSTimer* _authTimer;
	long long _connectedHosts;
	id<SDMISManagerDelegate> _delegate;

}

@property (__weak) id<SDMISManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(id<SDMISManagerDelegate>)delegate;
-(void)setDelegate:(id<SDMISManagerDelegate>)arg1 ;
-(void)setState:(int)arg1 ;
-(void)stopService;
-(void)detachMIS;
-(void)attachMIS;
-(void)readMISState:(int*)arg1 andReason:(int*)arg2 ;
-(long long)readConnectHosts;
-(long long)connectedHosts;
-(void)getState:(int*)arg1 andReason:(int*)arg2 ;
-(BOOL)hostIsOnlyUSBEthernet;
-(void)handleMISStateChanged;
@end

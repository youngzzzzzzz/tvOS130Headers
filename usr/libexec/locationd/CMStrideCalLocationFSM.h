/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:45 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CMStrideCalLocationFSMDelegate;
#import <locationd/locationd-Structs.h>
@class CalTrackFinder;

@interface CMStrideCalLocationFSM : NSObject {

	int fLocationState;
	CalTrackFinder* fTrackFinder;
	int fSource;
	id<CMStrideCalLocationFSMDelegate> _delegate;

}

@property (assign,nonatomic) id<CMStrideCalLocationFSMDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int locationState; 
-(void)dealloc;
-(id<CMStrideCalLocationFSMDelegate>)delegate;
-(void)setDelegate:(id<CMStrideCalLocationFSMDelegate>)arg1 ;
-(int)locationState;
-(void)requestTransitionToLocationState:(int)arg1 ;
-(int)originDeviceToGpsSource:(int)arg1 locationType:(int)arg2 ;
-(void)feedLocationData:(const NotificationData*)arg1 ;
-(void)feedGpsOdometerData:(const NotificationData*)arg1 ;
-(void)feedPedometerData:(const NotificationData*)arg1 ;
@end


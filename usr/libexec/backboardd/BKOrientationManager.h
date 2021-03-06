/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:33 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/BKIOHIDServiceMatchObserver.h>
#import <backboardd/BKIOHIDServiceDisappearanceObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSOperationQueue, CMDeviceOrientationManager, BKIOHIDService, BKIOHIDServiceMatcher, NSString;

@interface BKOrientationManager : NSObject <BKIOHIDServiceMatchObserver, BKIOHIDServiceDisappearanceObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _observerCalloutQueue;
	NSHashTable* _queue_observers;
	double _queue_updateInterval;
	float _queue_interruptEventThresholds;
	BOOL _queue_isOrientationEventsEnabled;
	long long _queue_lastUnambiguousRawAccelerometerDeviceOrientation;
	long long _queue_currentUserInterfaceOrientation;
	long long _queue_currentRawAccelerometerDeviceOrientation;
	long long _queue_lastEffectiveInterfaceOrientation;
	long long _queue_effectiveDeviceOrientation;
	unsigned long long _queue_orientationLocksEnabled;
	BOOL _queue_ignoreAccelerometerAndOrientationEventsForTesting;
	NSOperationQueue* _queue_orientationManagerOperationQueue;
	CMDeviceOrientationManager* _queue_orientationManager;
	BKIOHIDService* _queue_HIDService;
	BKIOHIDServiceMatcher* _queue_HIDServiceMatcher;
	NSObject*<OS_dispatch_queue> _notifyQueue;

}

@property (setter=_queue_setHIDService:,getter=_queue_HIDService,nonatomic,retain) BKIOHIDService * queue_HIDService;              //@synthesize queue_HIDService=_queue_HIDService - In the implementation block
@property (assign,nonatomic) float interruptEventThresholds; 
@property (assign,nonatomic) double updateInterval; 
@property (assign,getter=isOrientationEventsEnabled,nonatomic) BOOL orientationEventsEnabled; 
@property (assign,nonatomic) long long currentUserInterfaceOrientation; 
@property (nonatomic,readonly) long long currentRawAccelerometerDeviceOrientation; 
@property (nonatomic,readonly) long long lastEffectiveInterfaceOrientation; 
@property (nonatomic,readonly) long long effectiveDeviceOrientation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)setUpdateInterval:(double)arg1 ;
-(void)setOrientationEventsEnabled:(BOOL)arg1 ;
-(double)updateInterval;
-(void)serviceDidDisappear:(id)arg1 ;
-(void)matcher:(id)arg1 servicesDidMatch:(id)arg2 ;
-(id)_queue_HIDService;
-(id)_initWithDeviceOrientationManager:(id)arg1 ;
-(float)interruptEventThresholds;
-(void)setInterruptEventThresholds:(float)arg1 ;
-(BOOL)isOrientationEventsEnabled;
-(long long)currentUserInterfaceOrientation;
-(void)setCurrentUserInterfaceOrientation:(long long)arg1 ;
-(long long)lastEffectiveInterfaceOrientation;
-(long long)currentRawAccelerometerDeviceOrientation;
-(long long)effectiveDeviceOrientation;
-(BOOL)isDeviceOrientationLocked;
-(BOOL)isDeviceOrientationLocked:(long long*)arg1 ;
-(BOOL)isDeviceOrientationLockedForType:(unsigned long long)arg1 ;
-(void)lockDeviceOrientation:(unsigned long long)arg1 deviceOrientation:(long long)arg2 ;
-(void)unlockDeviceOrientation:(unsigned long long)arg1 ;
-(void)updateDeviceOrientation:(long long)arg1 changeSource:(long long)arg2 ;
-(void)refreshEffectiveDeviceOrientation;
-(void)_systemAppDidCheckin:(id)arg1 ;
-(void)_systemAppDidExit:(id)arg1 ;
-(void)_queue_setInterruptEventThresholds:(float)arg1 ;
-(void)_queue_setUpdateInterval:(double)arg1 ;
-(BOOL)_queue_isOrientationLocked;
-(void)_queue_setOrientationEventsEnabled:(BOOL)arg1 ;
-(void)_queue_resetDeviceOrientation;
-(void)_queue_setCurrentUserInterfaceOrientation:(long long)arg1 ;
-(void)_queue_setEffectiveDeviceOrientation:(long long)arg1 affectingLastEffectiveInterfaceOrientation:(BOOL)arg2 ;
-(void)_queue_setCurrentRawAccelerometerDeviceOrientation:(long long)arg1 ;
-(void)_queue_setLastUnambiguousDeviceOrientation:(long long)arg1 ;
-(void)_queue_updateDeviceOrientationSynchronously;
-(void)_queue_updateDeviceOrientationWithTemporaryManager;
-(void)_queue_updateDeviceOrientationFromCoreMotion:(id)arg1 ;
-(void)_queue_updateDeviceOrientation:(long long)arg1 changeSource:(long long)arg2 ;
-(void)_queue_noteEffectiveOrRawDeviceOrientationDidChange:(long long)arg1 changeSource:(long long)arg2 ;
-(void)_queue_postDeviceOrientationLockChangedNotification;
-(void)_queue_lockDeviceOrientation:(unsigned long long)arg1 deviceOrientation:(long long)arg2 ;
-(BOOL)_queue_isDeviceLockedForAllTypes:(unsigned long long)arg1 ;
-(BOOL)_queue_isDeviceLockedForAtLeastOneType:(unsigned long long)arg1 ;
-(void)_queue_unlockDeviceOrientationForType:(unsigned long long)arg1 ;
-(void)_queue_postUpdatedOrientation:(long long)arg1 ;
-(void)_queue_postUpdatedRawAccelerometerDeviceOrientation:(long long)arg1 ;
-(void)_queue_postUpdatedLastUnambiguousDeviceOrientation:(long long)arg1 ;
-(void)_queue_postDeviceOrientationLockChangedNotification:(BOOL)arg1 ;
-(void)_queue_setHIDService:(id)arg1 ;
@end


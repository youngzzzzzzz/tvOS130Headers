/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UINavigationItemChangeObserver;
@class NSArray, NSMutableArray, _UINavigationBarTransitionAssistant, _UINavigationBarItemStackEntry, UINavigationItem;

@interface _UINavigationBarItemStack : NSObject {

	NSArray* _previousItems;
	NSMutableArray* _items;
	int _state;
	id<_UINavigationItemChangeObserver> _changeObserver;
	_UINavigationBarTransitionAssistant* _transitionAssistant;

}

@property (assign,nonatomic,__weak) id<_UINavigationItemChangeObserver> changeObserver;                //@synthesize changeObserver=_changeObserver - In the implementation block
@property (nonatomic,readonly) int state;                                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) _UINavigationBarTransitionAssistant * transitionAssistant;              //@synthesize transitionAssistant=_transitionAssistant - In the implementation block
@property (nonatomic,readonly) _UINavigationBarItemStackEntry * topEntry; 
@property (nonatomic,readonly) _UINavigationBarItemStackEntry * backEntry; 
@property (nonatomic,readonly) _UINavigationBarItemStackEntry * previousTopEntry; 
@property (nonatomic,readonly) _UINavigationBarItemStackEntry * previousBackEntry; 
@property (nonatomic,readonly) UINavigationItem * topItem; 
@property (nonatomic,readonly) UINavigationItem * backItem; 
@property (nonatomic,readonly) UINavigationItem * previousTopItem; 
@property (nonatomic,readonly) UINavigationItem * previousBackItem; 
@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,readonly) long long itemCount; 
@property (getter=isPushingOrPopping,nonatomic,readonly) BOOL pushingOrPopping; 
-(id)description;
-(id)init;
-(int)state;
-(NSArray *)items;
-(long long)itemCount;
-(id)initWithItems:(id)arg1 ;
-(UINavigationItem *)backItem;
-(void)completeOperation;
-(UINavigationItem *)topItem;
-(id<_UINavigationItemChangeObserver>)changeObserver;
-(void)setChangeObserver:(id<_UINavigationItemChangeObserver>)arg1 ;
-(void)cancelOperation;
-(BOOL)stackItemsAreEqualTo:(id)arg1 ;
-(void)iterateItems:(/*^block*/id)arg1 ;
-(void)setItems:(id)arg1 withTransitionAssistant:(id)arg2 ;
-(_UINavigationBarTransitionAssistant *)transitionAssistant;
-(void)beginInteractiveTransition;
-(void)endInteractiveTransition;
-(UINavigationItem *)previousTopItem;
-(void)pushItem:(id)arg1 withTransitionAssistant:(id)arg2 ;
-(id)_shim_popNestedNavigationItem;
-(void)_shim_pushNestedNavigationItem:(id)arg1 ;
-(void)popItemWithTransitionAssistant:(id)arg1 ;
-(void)iterateEntries:(/*^block*/id)arg1 ;
-(UINavigationItem *)previousBackItem;
-(BOOL)isPushingOrPopping;
-(_UINavigationBarItemStackEntry *)topEntry;
-(_UINavigationBarItemStackEntry *)backEntry;
-(_UINavigationBarItemStackEntry *)previousTopEntry;
-(_UINavigationBarItemStackEntry *)previousBackEntry;
-(void)_updateChangeObserversFor:(id)arg1 ;
-(void)_prepareTransitionWithAssistant:(id)arg1 ;
-(void)_cleanupTransitionAssistant;
-(void)_completeTransition;
-(long long)_effectiveDisplayModeForItem:(id)arg1 inStack:(id)arg2 ;
-(long long)effectiveDisplayModeForItemInCurrentStack:(id)arg1 ;
-(long long)effectiveDisplayModeForItemInPreviousStack:(id)arg1 ;
@end


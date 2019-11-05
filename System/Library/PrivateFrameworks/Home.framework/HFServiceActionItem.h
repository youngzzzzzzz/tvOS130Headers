/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <Home/HFServiceLikeItem.h>

@protocol HFServiceLikeItem;
@class HMHome, HFItem, NSSet, NSString;

@interface HFServiceActionItem : HFItem <HFServiceLikeItem> {

	HMHome* _home;
	HFItem*<HFServiceLikeItem> _containingItem;
	NSSet* _actions;
	NSSet* _actionBuilders;

}

@property (nonatomic,readonly) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource; 
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> containingItem;                //@synthesize containingItem=_containingItem - In the implementation block
@property (nonatomic,retain) NSSet * actions;                                            //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSSet * actionBuilders;                                     //@synthesize actionBuilders=_actionBuilders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) NSSet * services; 
+(id)_percentFormatter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSSet *)actions;
-(void)setActions:(NSSet *)arg1 ;
-(NSSet *)services;
-(void)addAction:(id)arg1 ;
-(HMHome *)home;
-(id)accessories;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)namingComponentForHomeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(void)setActionBuilders:(NSSet *)arg1 ;
-(NSSet *)actionBuilders;
-(id)initWithHome:(id)arg1 containingItem:(id)arg2 ;
-(HFItem*<HFServiceLikeItem>)containingItem;
-(void)_getDesiredItemDescription:(id*)arg1 controlDescription:(id*)arg2 withSourceItemResults:(id)arg3 ;
-(id)_characteristicTypeToTargetValuesMap;
-(void)addActionBuilder:(id)arg1 ;
-(id)serviceActionItemForChildServiceItem:(id)arg1 ;
@end

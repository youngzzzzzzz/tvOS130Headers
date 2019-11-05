/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFMultiStateControlItem.h>
#import <Home/HFTogglableControlItem.h>

@class NSString, HFMultiStateValueSet, HFPowerStateControlItem;

@interface HFTargetModeControlItem : HFMultiStateControlItem <HFTogglableControlItem> {

	NSString* _targetModeCharacteristicType;
	HFMultiStateValueSet* _targetModeValueSet;
	HFPowerStateControlItem* _primaryPowerStateControlItem;

}

@property (nonatomic,readonly) NSString * targetModeCharacteristicType;                             //@synthesize targetModeCharacteristicType=_targetModeCharacteristicType - In the implementation block
@property (nonatomic,readonly) HFMultiStateValueSet * targetModeValueSet;                           //@synthesize targetModeValueSet=_targetModeValueSet - In the implementation block
@property (nonatomic,readonly) HFPowerStateControlItem * primaryPowerStateControlItem;              //@synthesize primaryPowerStateControlItem=_primaryPowerStateControlItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)updateWithOptions:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 possibleValueSet:(id)arg3 displayResults:(id)arg4 ;
-(id)toggleValue;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 targetModeCharacteristicType:(id)arg2 targetModeValueSet:(id)arg3 primaryPowerStateControlItem:(id)arg4 displayResults:(id)arg5 ;
-(HFPowerStateControlItem *)primaryPowerStateControlItem;
-(NSString *)targetModeCharacteristicType;
-(HFMultiStateValueSet *)targetModeValueSet;
@end

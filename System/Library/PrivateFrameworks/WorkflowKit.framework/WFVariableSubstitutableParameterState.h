/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFParameterState.h>

@protocol NSObject;
@class WFVariable, NSString;

@interface WFVariableSubstitutableParameterState : NSObject <WFParameterState> {

	id<NSObject> _value;
	WFVariable* _variable;

}

@property (nonatomic,readonly) id<NSObject> value;                  //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) WFVariable * variable;               //@synthesize variable=_variable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)processingValueClass;
+(id)serializedRepresentationFromValue:(id)arg1 ;
+(id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(id<NSObject>)value;
-(WFVariable *)variable;
-(id)initWithVariable:(id)arg1 ;
-(id)serializedRepresentation;
-(id)initWithValue:(id)arg1 ;
-(void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(/*^block*/id)arg3 valueHandler:(/*^block*/id)arg4 ;
-(id)containedVariables;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(BOOL)willProcessToSameValue:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModulePlugins/ModuleACM.bundle/ModuleACM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModuleACM/ModuleACM-Structs.h>
#import <ModuleBase/MechanismManager.h>

@interface MechanismManagerACM : MechanismManager
+(id)sharedInstance;
-(unsigned)_acmPurposeForPolicy:(long long)arg1 ;
-(id)_loadACMMechanismFromPlugin:(long long)arg1 acmContextRecord:(id)arg2 internalInfo:(id)arg3 request:(id)arg4 error:(id*)arg5 ;
-(void)_mechanismForACMRequirement:(const ACMRequirementRef)arg1 acmContextRecord:(id)arg2 policy:(long long)arg3 internalInfo:(id)arg4 uiDelegate:(id)arg5 originator:(id)arg6 request:(id)arg7 reply:(/*^block*/id)arg8 ;
-(id)_nonUiSubmechanismsForACMRequirement:(const ACMRequirementRef)arg1 acmContextRecord:(id)arg2 policy:(long long)arg3 internalInfo:(id)arg4 request:(id)arg5 requiredCount:(long long*)arg6 error:(id*)arg7 ;
-(id)_nonUiMechanismForACMRequirement:(const ACMRequirementRef)arg1 acmContextRecord:(id)arg2 policy:(long long)arg3 internalInfo:(id)arg4 request:(id)arg5 state:(unsigned*)arg6 error:(id*)arg7 ;
-(id)_restrictedNonUiMechanism:(id)arg1 availabilityEvents:(id*)arg2 policy:(long long)arg3 internalInfo:(id)arg4 request:(id)arg5 ;
-(id)_buildUiForMechanism:(id)arg1 policy:(long long)arg2 internalInfo:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 error:(id*)arg6 ;
-(id)_preferedError:(id)arg1 ;
-(void)mechanismForApplicationPasswordMode:(long long)arg1 acmContextRecord:(id)arg2 options:(id)arg3 internalInfo:(id)arg4 uiDelegate:(id)arg5 originator:(id)arg6 request:(id)arg7 reply:(/*^block*/id)arg8 ;
-(void)mechanismForACMRequirement:(const ACMRequirementRef)arg1 acmContextRecord:(id)arg2 policy:(long long)arg3 internalInfo:(id)arg4 uiDelegate:(id)arg5 originator:(id)arg6 request:(id)arg7 reply:(/*^block*/id)arg8 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WAUtil : NSObject
+(id)deviceName;
+(id)_getBasePersistenceKeychainQuery;
+(id)getObscureKey;
+(id)_getBaseTokenStorageKeychainQueryWithIdentifer:(id)arg1 ;
+(id)unobscureModelData:(id)arg1 forModelkey:(id)arg2 ;
+(id)rotateUUIDsForMessage:(id)arg1 ;
+(id)getCopyOfMessage:(id)arg1 withNumericalValuesSubstractedByValuesInMessage:(id)arg2 ;
+(id)rotateObscureKey;
+(BOOL)storeToken:(id)arg1 withIdentifier:(id)arg2 ;
+(id)getTokenForIdentifier:(id)arg1 ;
+(id)getMessageInstanceForKey:(id)arg1 andGroupType:(long long)arg2 ;
+(id)groupTypeToString:(long long)arg1 ;
+(id)groupTypeToAWDComponentID;
+(id)trimTokenForLogging:(id)arg1 ;
+(id)getValueForEntitlementForCurrentProcess:(id)arg1 ;
+(id)_generateInvocationForMethod:(void*)arg1 ;
@end


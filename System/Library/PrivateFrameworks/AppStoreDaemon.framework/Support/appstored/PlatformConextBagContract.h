/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AMSBagValue;


@protocol PlatformConextBagContract <NSObject>
@property (readonly) AMSBagValue * mescalSignedActions; 
@property (readonly) AMSBagValue * personalizedLookupURL; 
@property (readonly) AMSBagValue * unpersonalizedLookupURL; 
@required
-(AMSBagValue *)mescalSignedActions;
-(AMSBagValue *)personalizedLookupURL;
-(AMSBagValue *)unpersonalizedLookupURL;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/NSCopying.h>

@class IDSSockAddrWrapper;

@interface IDSSockAddrWrapperPair : NSObject <NSCopying> {

	IDSSockAddrWrapper* _localAddress;
	IDSSockAddrWrapper* _remoteAddress;

}

@property (nonatomic,retain,readonly) IDSSockAddrWrapper * localAddress;               //@synthesize localAddress=_localAddress - In the implementation block
@property (nonatomic,retain,readonly) IDSSockAddrWrapper * remoteAddress;              //@synthesize remoteAddress=_remoteAddress - In the implementation block
+(id)wrapperPairWithLocalAddress:(id)arg1 remoteAddress:(id)arg2 ;
+(id)shortDescriptionForLocalAddress:(id)arg1 remoteAddress:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(IDSSockAddrWrapper *)localAddress;
-(IDSSockAddrWrapper *)remoteAddress;
-(id)shortDescription;
-(id)initWithLocalAddress:(id)arg1 remoteAddress:(id)arg2 ;
-(BOOL)isEqualToSockAddrWrapperPair:(id)arg1 ;
@end


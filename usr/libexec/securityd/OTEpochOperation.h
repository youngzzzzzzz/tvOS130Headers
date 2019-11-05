/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/securityd-Structs.h>
#import <securityd/CKKSGroupOperation.h>
#import <securityd/OctagonStateTransitionOperationProtocol.h>

@class OTCuttlefishContext;

@interface OTEpochOperation : CKKSGroupOperation <OctagonStateTransitionOperationProtocol> {

	NSString* _intendedState;
	NSString* _nextState;
	OTCuttlefishContext* _cuttlefishContext;
	unsigned long long _epoch;

}

@property (retain) NSString*<OctagonStateString> nextState;                    //@synthesize nextState=_nextState - In the implementation block
@property (__weak) OTCuttlefishContext * cuttlefishContext;                    //@synthesize cuttlefishContext=_cuttlefishContext - In the implementation block
@property (assign,nonatomic) unsigned long long epoch;                         //@synthesize epoch=_epoch - In the implementation block
@property (readonly) NSString*<OctagonStateString> intendedState;              //@synthesize intendedState=_intendedState - In the implementation block
-(void)groupStart;
-(NSString*<OctagonStateString>)intendedState;
-(OTCuttlefishContext *)cuttlefishContext;
-(void)setCuttlefishContext:(OTCuttlefishContext *)arg1 ;
-(id)initForCuttlefishContext:(id)arg1 intendedState:(NSString*)arg2 errorState:(NSString*)arg3 ;
-(unsigned long long)epoch;
-(void)setEpoch:(unsigned long long)arg1 ;
-(NSString*<OctagonStateString>)nextState;
-(void)setNextState:(NSString*<OctagonStateString>)arg1 ;
@end

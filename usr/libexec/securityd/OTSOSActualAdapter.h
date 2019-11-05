/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/OTSOSAdapter.h>

@class NSString, CKKSListenerCollection;

@interface OTSOSActualAdapter : NSObject <OTSOSAdapter> {

	BOOL sosEnabled;
	BOOL _essential;
	NSString* _providerID;
	CKKSListenerCollection* _peerChangeListeners;

}

@property (retain) CKKSListenerCollection * peerChangeListeners;              //@synthesize peerChangeListeners=_peerChangeListeners - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * providerID;                                   //@synthesize providerID=_providerID - In the implementation block
@property (assign) BOOL essential;                                            //@synthesize essential=_essential - In the implementation block
@property (assign) BOOL sosEnabled; 
+(id)sosCKKSViewList;
+(id)peerPublicSigningKeySPKIs:(id)arg1 ;
-(id)fetchSelfPeers:(id*)arg1 ;
-(id)fetchTrustedPeers:(id*)arg1 ;
-(void)registerForPeerChangeUpdates:(id)arg1 ;
-(void)sendSelfPeerChangedUpdate;
-(void)sendTrustedPeerSetChangedUpdate;
-(BOOL)essential;
-(void)setEssential:(BOOL)arg1 ;
-(CKKSListenerCollection *)peerChangeListeners;
-(void)setPeerChangeListeners:(CKKSListenerCollection *)arg1 ;
-(id)initAsEssential:(BOOL)arg1 ;
-(void)updateOctagonKeySetWithAccount:(id)arg1 error:(id*)arg2 ;
-(id)currentSOSSelf:(id*)arg1 ;
-(BOOL)sosEnabled;
-(void)setSosEnabled:(BOOL)arg1 ;
-(NSString *)description;
-(NSString *)providerID;
-(int)circleStatus:(id*)arg1 ;
@end
